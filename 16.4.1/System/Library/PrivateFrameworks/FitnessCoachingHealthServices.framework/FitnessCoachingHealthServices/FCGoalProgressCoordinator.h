@class FCGoalProgressStore, FCCGoalProgressConfiguration, NSString, NSArray, FCTypicalDayProvider, FCGoalProgressDebouncer, HDProfile, NSObject, FCCXPCActivityScheduler, FCCDateProvider;
@protocol OS_dispatch_queue, FCGoalProgressCoordinatorDelegate;

@interface FCGoalProgressCoordinator : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, FCGoalProgressEvaluationDelegate, FCCXPCActivitySchedulerDelegate, FCGoalProgressDebouncerDelegate> {
    FCCGoalProgressConfiguration *_currentConfiguration;
    FCCDateProvider *_dateProvider;
    FCGoalProgressDebouncer *_debouncer;
    NSArray *_progressEvents;
    HDProfile *_profile;
    FCCXPCActivityScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    FCGoalProgressStore *_store;
    FCTypicalDayProvider *_typicalDayProvider;
}

@property (weak, nonatomic) id<FCGoalProgressCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (id)initWithDateProvider:(id)a0 debouncer:(id)a1 profile:(id)a2 scheduler:(id)a3 serviceQueue:(id)a4 store:(id)a5 typicalDayProvider:(id)a6;
- (void)_onqueue_rescheduleEvents;
- (void)_onqueue_notificationPosted:(id)a0;
- (id)currentDate;
- (unsigned long long)currentExperienceType;
- (void)scheduler:(id)a0 performActivityWithName:(id)a1 completion:(id /* block */)a2;
- (void)registerGoalProgressConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_onqueue_handleGoalProgressConfiguration:(id)a0;
- (void)_onqueue_runEvaluation;
- (void)dealloc;
- (id)_minimumActiveDaysOverride;
- (id)lastFiredDateForProgressEventIdentifier:(id)a0;
- (void)_todayActivityChanged:(id)a0;
- (id)currentCalendar;
- (void)_onqueue_registerGoalProgressConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)debouncerDidFinishDebounce:(id)a0;
- (void).cxx_destruct;

@end
