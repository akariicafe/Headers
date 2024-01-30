@class RTVisitSCIStayCluster, RTHint, RTHintManager, NSDate, NSObject, RTDefaultsManager, NSMutableArray, NSString, RTDelayedLocationRequester, RTLocation, NSArray, RTDistanceCalculator, RTVisitHyperParameter;
@protocol OS_dispatch_queue;

@interface RTVisitPipelineModuleSCI : NSObject <RTVisitPipelineModule> {
    BOOL _useLowConfidence;
    NSMutableArray *_clusters;
    RTLocation *_lastPointProcessed;
    RTDistanceCalculator *_distanceCalculator;
    NSArray *_hintCache;
    RTLocation *_hintCacheUpdateLocation;
    double _requiredDwellTimeCache;
    NSDate *_requiredDwellTimeCacheDateToUpdate;
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
+ (BOOL)filterHint:(id)a0 sourceFilter:(id)a1 inverseFilter:(BOOL)a2;
+ (id)FSMEventToString:(unsigned long long)a0;
+ (id)LCFSMStateToString:(unsigned long long)a0;

- (void)_onHintNotification:(id)a0;
- (BOOL)isHint:(id)a0 withinDistance:(double)a1 location:(id)a2;
- (id)getHintWithinDistance:(double)a0 ofLocation:(id)a1 sourceFilter:(id)a2 inverseFilter:(BOOL)a3;
- (void)shutdown;
- (double)requiredDwellTimeForLocation:(id)a0;
- (id)filterHints:(id)a0 existingHints:(id)a1;
- (id)hintsNearLocation:(id)a0;
- (BOOL)isValidLatestGeofenceHintSource:(long long)a0 date:(id)a1;
- (double)minStaticIntervalForSLVArrival;
- (void)exitUntilNotInWorkingHypotheisWithBlock:(id /* block */)a0;
- (void)addVisitFromWorkingHypothesis:(long long)a0 confidence:(double)a1;
- (void)resetWorkingHypothesis;
- (void)processContextOnGeofenceEntry;
- (BOOL)isHintConsistentWithLocation:(id)a0 hint:(id)a1;
- (BOOL)isInWorkingHypothesis;
- (void)processPoints:(id)a0;
- (void)exitFromWorkingHypothesis;
- (void)addToClusters:(id)a0;
- (id)getHintsNearLocation:(id)a0 withinDistance:(double)a1 sourceFilter:(id)a2 fromDate:(id)a3 limit:(unsigned long long)a4;
- (BOOL)isDwellTimeSatisfiedForLocation:(id)a0;
- (id)stateMachineConfidenceString;
- (void).cxx_destruct;
- (double)minStaticIntervalForSLVArrivalWithHint;
- (id)relevantDateForHintSource:(long long)a0 date:(id)a1;
- (id)init;
- (void)refreshLatestGeofenceHintCache;
- (id)initWithDefaultsManager:(id)a0 delayedLocationRequester:(id)a1 hintManager:(id)a2 queue:(id)a3 hyperParameter:(id)a4 useLowConfidence:(BOOL)a5;
- (id)retrieveNonLOIHintsNearLocation:(id)a0 withinDistance:(double)a1;
- (void)onHintNotification:(id)a0;
- (BOOL)isTimeOutsideClusterSatisfiedForOutlierCount:(unsigned long long)a0 location:(id)a1;
- (id)process:(id)a0;
- (BOOL)isVisitInFlight;
- (id)getHintConsistentWithLocation:(id)a0 sourceFilter:(id)a1 inverseFilter:(BOOL)a2;
- (id)handleFSM:(unsigned long long)a0 point:(id)a1;
- (void)populateHintCacheNearLocation:(id)a0 withinDistance:(double)a1;
- (BOOL)isHintNearLocation:(id)a0;
- (BOOL)isLastGeofenceHintNearLocation:(id)a0 hintSource:(long long)a1;
- (double)requiredTimeOutsideClusterForOutlierCount:(unsigned long long)a0 location:(id)a1;
- (id)getLastHintUsingSourceFilter:(id)a0;

@end
