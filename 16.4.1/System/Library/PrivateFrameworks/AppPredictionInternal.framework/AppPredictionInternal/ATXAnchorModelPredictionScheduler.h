@class NSUserDefaults, ATXAnchorModelHyperParameters, NSDate, _PASLock;
@protocol ATXPETEventTracker2Protocol, ATXAnchorModelPredictionForwarderProtocol;

@interface ATXAnchorModelPredictionScheduler : NSObject {
    _PASLock *_schedulerLock;
    id<ATXAnchorModelPredictionForwarderProtocol> _predictionForwarder;
    ATXAnchorModelHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSDate *_now;
    NSUserDefaults *_defaults;
    unsigned long long _maxPredictions;
}

- (id)now;
- (id)criteriaForJobOnDate:(id)a0;
- (id)predictions;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (void)scheduleNextPredictionUpdate;
- (id)readPredictionsFromUserDefaults;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;
- (id)deserializePredictionsDataOrInitializeDictionary:(id)a0;
- (void)scheduleExistingPredictions;
- (id)dateOfSoonestUpcomingPredictionChange;
- (void)clearPredictionsForAnchor:(id)a0;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (void)initializeLock;
- (void)writePredictionsToUserDefaults:(id)a0;
- (id)predictionsValidNow;
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (id)init;
- (id)serializePredictions:(id)a0;
- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3 maxPredictions:(unsigned long long)a4;
- (id)deduplicatedPredictions:(id)a0;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (void)forwardPredictionUpdates;
- (void).cxx_destruct;

@end
