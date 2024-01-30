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

- (id)now;
- (id)predictions;
- (id)predictionsValidNow;
- (void)scheduleExistingPredictions;
- (void)initializeLock;
- (void)readPredictionsFromUserDefaultsOrInitialize;
- (void)schedulePredictions:(id)a0 anchor:(id)a1;
- (id)predictionsWithTimeIntervalOverlappingWithCurrentTime;
- (void)logPredictionsGeneratedMetricsWithAnchorModelPredictions:(id)a0;
- (void)scheduleNextPredictionUpdate;
- (void)clearPredictionsForAnchor:(id)a0;
- (id)predictionsAfterFilteringInactiveAnchors:(id)a0;
- (void)forwardPredictionUpdatesOnDate:(id)a0;
- (id)dateOfSoonestUpcomingPredictionChange;
- (id)deduplicatedPredictions:(id)a0;
- (id)earlierDateInFuture:(id)a0 earliestDateSoFar:(id)a1 now:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)registerXPCActivityForPredictionUpdateWithCriteria:(id)a0;
- (id)serializePredictions;
- (BOOL)dateIsInFuture:(id)a0 now:(id)a1;
- (id)deserializePredictionsDataOrInitializeDictionary:(id)a0;
- (id)initWithPredictionForwarder:(id)a0 hyperParameters:(id)a1 tracker:(id)a2 now:(id)a3;
- (void)persistPredictions:(id)a0 anchor:(id)a1;
- (id)criteriaForJobOnDate:(id)a0;
- (void)forwardPredictionUpdates;
- (void)writePredictionsToUserDefaults;

@end
