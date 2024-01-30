@class RTHint, NSString, RTDistanceCalculator, RTVisitHyperParameter, RTVisitSCIStayCluster, RTLocation, RTDefaultsManager, NSObject, NSMutableArray, RTDelayedLocationRequester, RTHintManager;
@protocol OS_dispatch_queue;

@interface RTVisitPipelineModuleSCI : NSObject <RTVisitPipelineModule> {
    BOOL _useLowConfidence;
    BOOL _checkedForHintNearEntryLocation;
    BOOL _hintNearEntryLocation;
    NSMutableArray *_clusters;
    RTLocation *_lastPointProcessed;
    RTDistanceCalculator *_distanceCalculator;
}

@property (readonly, nonatomic) unsigned long long fsmState;
@property (readonly, nonatomic) unsigned long long lcFSMState;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDelayedLocationRequester *delayedLocationRequester;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTVisitHyperParameter *hyperParameter;
@property (nonatomic) BOOL latestGeofenceHintChecked;
@property (retain, nonatomic) RTHint *latestGeofenceHint;
@property (readonly, nonatomic) RTVisitSCIStayCluster *workingHypothesis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)FSMStateToString:(unsigned long long)a0;
+ (id)LCFSMStateToString:(unsigned long long)a0;
+ (id)FSMEventToString:(unsigned long long)a0;

- (double)minStaticIntervalForSLVArrivalWithHint;
- (void)shutdown;
- (id)init;
- (void)resetWorkingHypothesis;
- (void)processPoints:(id)a0;
- (void).cxx_destruct;
- (void)onHintNotification:(id)a0;
- (void)addToClusters:(id)a0;
- (BOOL)isLastGeofenceHintNearLocation:(id)a0 OfSource:(long long)a1;
- (void)exitUntilNotInWorkingHypotheisWithBlock:(id /* block */)a0;
- (BOOL)isDwellTimeSatisfiedForLocation:(id)a0;
- (double)requiredDwellTimeForLocation:(id)a0;
- (void)logIfLastPointProcessedCouldHaveCalledFastEntryForLocation:(id)a0 hint:(id)a1;
- (BOOL)isInWorkingHypothesis;
- (id)handleFSM:(unsigned long long)a0 point:(id)a1;
- (double)requiredTimeOutsideClusterForOutlierCount:(unsigned long long)a0 location:(id)a1;
- (BOOL)isHintNearEntryLocation:(id)a0;
- (void)_onHintNotification:(id)a0;
- (void)exitFromWorkingHypothesis;
- (void)setHintNearEntryLocation:(id)a0;
- (void)addVisitFromWorkingHypothesis:(long long)a0 confidence:(double)a1;
- (double)minStaticIntervalForSLVArrival;
- (BOOL)isVisitInFlight;
- (id)initWithDefaultsManager:(id)a0 delayedLocationRequester:(id)a1 hintManager:(id)a2 queue:(id)a3 hyperParameter:(id)a4 useLowConfidence:(BOOL)a5;
- (BOOL)isTimeOutsideClusterSatisfiedForOutlierCount:(unsigned long long)a0 location:(id)a1;
- (BOOL)isNearLocationOfInterestHint:(id)a0;
- (id)process:(id)a0;

@end
