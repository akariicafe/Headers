@class NSString, MTScheduledList;
@protocol MTPersistence, MTTimerSchedulerDelegate, MTTimerStorage, NAScheduler, MTNotificationCenter, MTSchedulingDelegate, MTTaskScheduler;

@interface MTTimerScheduler : NSObject <MTTimerObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener>

@property (retain, nonatomic) id<MTTimerStorage> storage;
@property (retain, nonatomic) id<MTNotificationCenter> notificationCenter;
@property (readonly, nonatomic) MTScheduledList *scheduledTimers;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) id<MTSchedulingDelegate> schedulingDelegate;
@property (readonly, nonatomic) id<MTTaskScheduler> taskScheduler;
@property (retain, nonatomic) id<MTPersistence> defaults;
@property (weak, nonatomic) id<MTTimerSchedulerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intervalToCheckForTimersToFireBeforeDate:(id)a0;

- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (id)_queue_lastTimerTriggerDate;
- (id)nextTriggerDate;
- (void)scheduleTimers:(id)a0;
- (void)printDiagnostics;
- (void)scheduledListDidChange:(id)a0 withCompletion:(id /* block */)a1;
- (id)gatherDiagnostics;
- (void)_queue_triggerDidFireForTimerWithCompletionBlock:(id /* block */)a0;
- (id)initWithStorage:(id)a0 notificationCenter:(id)a1;
- (void)_queue_setLastTimerTriggerDate:(id)a0;
- (void)nextTimerDidChange:(id)a0;
- (void)_queue_unregisterTimer;
- (void)_fireScheduledTimer:(id)a0 firedDate:(id)a1 completionBlock:(id /* block */)a2;
- (id)initWithStorage:(id)a0 notificationCenter:(id)a1 scheduler:(id)a2 defaults:(id)a3;
- (void)_queue_rescheduleTimersWithCompletion:(id /* block */)a0;
- (id)nextTimer;
- (void)unscheduleTimers:(id)a0;
- (void).cxx_destruct;
- (id)initWithStorage:(id)a0 notificationCenter:(id)a1 scheduler:(id)a2 defaults:(id)a3 schedulingDelegate:(id)a4 taskScheduler:(id)a5 currentDateProvider:(id /* block */)a6;
- (id)_queue_nextTimer;
- (id)_queue_nextScheduledTimer;
- (void)_queue_scheduleTimers:(id)a0 withCompletion:(id /* block */)a1;
- (void)_queue_unscheduleTimers:(id)a0;
- (id)sourceIdentifier;
- (void)_queue_updatePersistentTimerForNextTimerWithCompletion:(id /* block */)a0;
- (void)rescheduleTimers;
- (void)rescheduleTimersWithCompletion:(id /* block */)a0;
- (void)_queue_fireTriggeredTimersWithCompletionBlock:(id /* block */)a0;
- (void)source:(id)a0 didFireTimer:(id)a1;

@end
