@class NSString, RTStateDepictionOneState, RTMapItem, RTStateModelLocation, NSDate;
@protocol GEOMapItem;

@interface RTStateDepiction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTStateDepictionOneState *clusterState;
@property (nonatomic) long long numOfDataPts;
@property (nonatomic) unsigned long long mapItemSource;
@property (retain, nonatomic) id<GEOMapItem> geoMapItem;
@property (retain, nonatomic) RTStateModelLocation *location;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long typeSource;
@property (retain, nonatomic) RTMapItem *mapItem;
@property (retain, nonatomic) NSDate *geocodeDate;
@property (copy, nonatomic) NSString *customLabel;

+ (long long)maximumNumberOfDataPoints;
+ (double)quantizeTimeIntervalSinceReferenceDate:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 type:(long long)a1 typeSource:(unsigned long long)a2 customLabel:(id)a3 mapItem:(id)a4;
- (void)_performIntegrityCheck;
- (void)_performErrorCorrection;
- (id)lastEntyExit;
- (BOOL)exemptFromPurge;
- (id)getAllOneVisits;
- (void)submitEntry:(double)a0 exit:(double)a1;
- (double)getAggTimeScaleFactor:(double)a0 predictionWindow:(double)a1;
- (void)removeEntry:(double)a0 exit:(double)a1;
- (void)incrementNumOfDataPtsByInteger:(long long)a0;
- (double)getLastVisit;
- (BOOL)cleanState:(double)a0;
- (id)getRecentVisits:(double)a0;
- (void)addOneVisitsFromStateDepiction:(id)a0;
- (unsigned long long)getNumOfVisitsOverall;
- (id)getAggStateStat;
- (void)showState;
- (id)getEarliestLatestEntry;
- (id)getGetWeeklyStats:(double)a0 numOfWeeks:(int)a1 uniqueID:(id)a2;
- (id)getPredState:(double)a0 predictionWindow:(double)a1 numOfWeeks:(int)a2 uniqueID:(id)a3;
- (void)removeAllVisitsExceptMostRecent;
- (id)_filterEntryExitData:(id)a0 options:(id)a1;
- (id)_referenceAdjustEntryExitDates:(id)a0 options:(id)a1;
- (id)_excludeEntryExitOutlierDates:(id)a0 options:(id)a1;
- (double)_calculateStandardDeviationForDates:(id)a0 options:(id)a1 error:(id *)a2;
- (double)calculateStandardDeviationWithOptions:(id)a0 error:(id *)a1;

@end
