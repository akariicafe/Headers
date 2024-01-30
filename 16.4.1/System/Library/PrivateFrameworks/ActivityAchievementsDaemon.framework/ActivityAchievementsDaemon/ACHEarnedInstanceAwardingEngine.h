@class ACHDatabaseAssertionClient, NSString, NSCalendar, NSDate, NSMutableDictionary, HDProfile, NSObject, ACHAwardsClient, ACHEarnedInstanceStore, ACHDataStore;
@protocol OS_dispatch_queue;

@interface ACHEarnedInstanceAwardingEngine : NSObject <HDDatabaseProtectedDataObserver> {
    ACHAwardsClient *_client;
    ACHDatabaseAssertionClient *_assertionClient;
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    struct { BOOL allowsHistoricalEvaluationFromBeginningOfTime; long long startDate; long long endDate; BOOL clearDataStoreBeforeHistoricalRun; BOOL commitDataStoreAfterHistoricalRun; } _historicalEvaluationPolicy;
    NSMutableDictionary *_sourceRegistry;
    NSCalendar *_calendar;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_currentDateOverride;
    BOOL _historicalEvaluationInProgress;
    NSMutableDictionary *_queuedIncrementalEvaluations;
    int _protectedDataToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataStorePropertyProviderForSource:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_queue_performQueuedEvaluations;
- (void)deregisterSource:(id)a0;
- (id)initWithProfile:(id)a0 dataStore:(id)a1 earnedInstanceStore:(id)a2 historicalEvaluationPolicy:(struct { BOOL x0; long long x1; long long x2; BOOL x3; BOOL x4; })a3;
- (void)requestHistoricalEvaluationForAllSourcesWithDatabaseContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithClient:(id)a0 assertionClient:(id)a1 dataStore:(id)a2 earnedInstanceStore:(id)a3 historicalEvaluationPolicy:(struct { BOOL x0; long long x1; long long x2; BOOL x3; BOOL x4; })a4;
- (id)currentDate;
- (void)_client_requestIncrementalEvaluationForSource:(id)a0 evaluationBlock:(id /* block */)a1;
- (void)setCurrentDateOverride:(id)a0;
- (void)_requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)a0;
- (void)registerSource:(id)a0;
- (void)requestIncrementalEvaluationForSource:(id)a0 evaluationBlock:(id /* block */)a1;
- (void)_queue_evaluateHistoryForSource:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)_daemon_requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)a0;
- (void)_queue_evaluateHistoryForSource:(id)a0 completion:(id /* block */)a1;
- (void)_queue_protectedDataBecameAvailable;
- (void)_daemon_requestIncrementalEvaluationForSource:(id)a0 evaluationBlock:(id /* block */)a1;
- (unsigned long long)sourceCount;
- (void)_client_requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)requestHistoricalEvaluationForAllSourcesWithCompletion:(id /* block */)a0;

@end
