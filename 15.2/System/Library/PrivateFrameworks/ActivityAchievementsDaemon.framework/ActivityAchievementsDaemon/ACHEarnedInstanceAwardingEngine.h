@class NSDate, NSString, NSCalendar, NSMutableDictionary, NSObject, HDProfile, ACHEarnedInstanceStore, ACHDataStore;
@protocol OS_dispatch_queue;

@interface ACHEarnedInstanceAwardingEngine : NSObject <HDDatabaseProtectedDataObserver> {
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    struct { BOOL allowsHistoricalEvaluationFromBeginningOfTime; long long startDate; long long endDate; } _historicalEvaluationPolicy;
    NSMutableDictionary *_sourceRegistry;
    NSCalendar *_calendar;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_currentDateOverride;
    NSMutableDictionary *_queuedIncrementalEvaluations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentDate;
- (void).cxx_destruct;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (unsigned long long)sourceCount;
- (void)requestIncrementalEvaluationForSource:(id)a0 evaluationBlock:(id /* block */)a1;
- (void)requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)a0;
- (void)setCurrentDateOverride:(id)a0;
- (void)requestHistoricalEvaluationForAllSourcesWithDatabaseContext:(id)a0 completion:(id /* block */)a1;
- (void)_queue_evaluateHistoryForSource:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithProfile:(id)a0 dataStore:(id)a1 earnedInstanceStore:(id)a2 historicalEvaluationPolicy:(struct { BOOL x0; long long x1; long long x2; })a3;
- (id)dataStorePropertyProviderForSource:(id)a0;
- (void)registerSource:(id)a0;
- (void)deregisterSource:(id)a0;

@end
