@class NSUserDefaults, ATXAnchorModelHyperParameters, NSDate, _PASLock;
@protocol ATXPETEventTracker2Protocol, ATXAnchorModelPredictionForwarderProtocol;

@interface ATXAnchorModelPredictionScheduler : NSObject {
    _PASLock *_schedulerLock;
    id<ATXAnchorModelPredictionForwarderProtocol> _predictionForwarder;
    ATXAnchorModelHyperParameters *_hyperParameters;
    id<ATXPETEventTracker2Protocol> _tracker;
    NSDate *_now;
    NSUserDefaults *_defaults;
}

- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;
- (void)forwardPredictionUpdates;
- (id)init;
- (void)initializeLock;
- (void).cxx_destruct;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (id)predictions;
- (void)scheduleNextPredictionUpdate;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (id)predictionsValidNow;
- (id)serializePredictions;
- (id)deserializePredictionsDataOrInitializeDictionary:(id)a0;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (void)clearPredictionsForAnchor:(id)a0;
- (void)scheduleExistingPredictions;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (id)deduplicatedPredictions:(id)a0;
- (void)writePredictionsToUserDefaults;
- (void)readPredictionsFromUserDefaultsOrInitialize;
- (id)now;
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;
- (id)dateOfSoonestUpcomingPredictionChange;
- (id)criteriaForJobOnDate:(id)a0;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;

@end
