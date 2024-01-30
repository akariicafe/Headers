@class RTDefaultsManager, RTTimer, RTTimerManager, NSMutableDictionary, NSMutableArray, RTXPCActivityTask;

@interface RTXPCActivityManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTTimer *timer;
@property (retain, nonatomic) NSMutableDictionary *registrants;
@property (retain, nonatomic) RTXPCActivityTask *runningTask;
@property (retain, nonatomic) NSMutableArray *pendingTasks;

+ (void)xpcActivityUnregisterIdentifier:(const char *)a0;
+ (id)lastAttemptDateKeyForIdentifier:(id)a0;
+ (id)lastCompleteDateKeyForIdentifier:(id)a0;
+ (BOOL)xpcActivityShouldDeferActivity:(id)a0;
+ (id)criteriaDictionaryWithCriteria:(id)a0;
+ (long long)xpcActivityGetStateActivity:(id)a0;
+ (id)xpcActivityCopyCriteriaActivity:(id)a0;
+ (void)xpcActivitySetCriteriaActivity:(id)a0 criteria:(id)a1;
+ (BOOL)xpcActivitySetStateActivity:(id)a0 state:(long long)a1;
+ (void)xpcActivityRegisterIdentifier:(const char *)a0 criteria:(id)a1 handler:(id /* block */)a2;

- (void)_shutdown;
- (void)_setup;
- (id)init;
- (void).cxx_destruct;
- (void)registerActivityWithIdentifier:(id)a0 criteria:(id)a1 handler:(id /* block */)a2;
- (void)_stopDeferCheckTimer;
- (void)_startDeferCheckTimer;
- (id)initWithDefaultsManager:(id)a0;
- (void)unregisterActivityWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)initWithDefaultsManager:(id)a0 timerManager:(id)a1;
- (id)_lastAttemptDateForIdentifier:(id)a0;
- (id)_registerRegistrant:(id)a0;
- (void)_scheduleNextTask;
- (void)_runRegistrantWithIdentifier:(id)a0 activity:(id)a1 handler:(id /* block */)a2;
- (void)_onDeferCheckTimer;
- (void)_updateLastCompleteDateForIdentifier:(id)a0;
- (id)_lastCompleteDateForIdentifier:(id)a0;
- (void)_updateLastAttemptDateForIdentifier:(id)a0;
- (void)runRegistrantWithIdentifier:(id)a0 activity:(id)a1 handler:(id /* block */)a2;
- (void)_registerActivityWithIdentifier:(id)a0 criteria:(id)a1 handler:(id /* block */)a2;
- (void)_unregisterActivityWithIdentifier:(id)a0 handler:(id /* block */)a1;

@end
