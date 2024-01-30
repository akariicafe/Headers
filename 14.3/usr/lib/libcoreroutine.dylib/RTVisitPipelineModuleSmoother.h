@class NSString, NSDate, RTVisit, NSMutableArray;

@interface RTVisitPipelineModuleSmoother : NSObject <RTVisitPipelineModule>

@property (readonly, nonatomic) NSDate *previousProcessedDate;
@property (readonly, nonatomic) NSDate *nextDateToProcess;
@property (readonly, nonatomic) NSDate *firstDateToProcessForVisit;
@property (readonly, nonatomic) double timeIntervalBetweenSmoothedPoints;
@property (readonly, nonatomic) double kernelWidth;
@property (readonly, nonatomic) double smallestSignificantWeightExponent;
@property (readonly, nonatomic) double maxGapInVisit;
@property (readonly, nonatomic) unsigned long long leftWindowIncludedIndex;
@property (readonly, nonatomic) unsigned long long rightWindowExcludedIndex;
@property (readonly, nonatomic) unsigned long long outputLocationsCount;
@property (readonly, nonatomic) NSMutableArray *rawLocations;
@property (readonly, nonatomic) RTVisit *workingVisit;
@property (readonly, nonatomic) NSDate *entryBeforeAnyGaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)findIndexOfLocationInArray:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 afterDate:(id)a2;
+ (double)getWeightExponentForSmoothedLocationDate:(id)a0 rawLocationDate:(id)a1 kernelWidth:(double)a2 maxDelta:(double)a3;
+ (double)getMaxDeltaForSmoothedLocationDate:(id)a0 rawLocations:(id)a1 kernelWidth:(double)a2;
+ (id)computeSmoothedPointForDate:(id)a0 rawLocations:(id)a1 kernelWidth:(double)a2 smallestSignificantWeightExponent:(double)a3;
+ (double)getTimeDeltaSignificanceThresholdForSmoothedLocationDate:(id)a0 rawLocations:(id)a1 kernelWidth:(double)a2 smallestSignificantaWeightExponent:(double)a3;
+ (id)getNextDateToProcessForDate:(id)a0 firstDateToProcessForVisit:(id)a1 timeIntervalBetweenSmoothedPoints:(double)a2;
+ (void)disposeObsoleteRawLocations:(id)a0 currentDateToProcess:(id)a1 halfTimeProcessWindow:(double)a2;
+ (id)createNewOutputClusterForSmoothedPoints:(id)a0 workingVisit:(id)a1 exit:(id)a2;
+ (id)getEndOfGapAtDate:(id)a0 rawLocations:(id)a1 maxGapWithinVisit:(double)a2;
+ (BOOL)hasRawLocationsNeededToComputeSmoothedLocationAtDate:(id)a0 workingVisitExit:(id)a1 rawLocations:(id)a2 kernelWidth:(double)a3 smallestSignificantWeightExponent:(double)a4;

- (void).cxx_destruct;
- (void)resetState;
- (id)process:(id)a0;
- (id)initWithTimeIntervalBetweenSmoothedPoints:(double)a0 kernelWidth:(double)a1 smallestSignificantWeightExponent:(double)a2 maxGapWithinVisit:(double)a3;
- (id)getNextDateToProcessForDate:(id)a0;
- (id)getEndOfGapAtDate:(id)a0;
- (id)createNewOutputClusterForSmoothedPoints:(id)a0 exit:(id)a1;
- (id)computeSmoothedPointForDate:(id)a0;
- (void)disposeObsoleteRawLocationsForCurrentDateToProcess:(id)a0 halfTimeProcessWindow:(double)a1;
- (void)updateStateWithNewCluster:(id)a0;
- (id)processCachedPoints;

@end
