@class HKSPObserverSet, NSString, NSHashTable, NSDate, HDSPSleepEventList, HDSPEnvironment;
@protocol HDSPEventScheduler, HKSPExecutor;

@interface HDSPSleepEventScheduler : NSObject <HDSPEventScheduleDelegate, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepEventDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } scheduleLock;
@property (readonly, nonatomic) HDSPSleepEventList *sleepEvents;
@property (readonly, nonatomic) HKSPObserverSet *eventHandlers;
@property (readonly, nonatomic) NSHashTable *eventProviders;
@property (readonly, nonatomic) NSHashTable *pendingEventProviders;
@property (readonly, nonatomic) id<HDSPEventScheduler> scheduler;
@property (readonly, copy, nonatomic) id<HKSPExecutor> executor;
@property (retain, nonatomic) NSDate *lastEventTriggerDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)significantTimeChangeDetected:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)scheduledEventIsDue;
- (void)removeEventHandler:(id)a0;
- (void).cxx_destruct;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepScheduleModel:(id)a2;
- (id)initWithEnvironment:(id)a0;
- (void)eventProviderCancelledEvents:(id)a0;
- (void)addEventHandler:(id)a0;
- (void)_lock_scheduledEventIsDue;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;
- (void)addEventProvider:(id)a0;
- (id)initWithEnvironment:(id)a0 schedulerProvider:(id /* block */)a1 executorProvider:(id /* block */)a2;
- (BOOL)_lock_shouldScheduleEvents;
- (id)diagnosticDescription;
- (void)_schedulePendingEvents;
- (void)removeEventProvider:(id)a0;
- (void)_lock_rescheduleEvents;
- (id)_allSleepEvents;
- (void)rescheduleEvents;
- (BOOL)_shouldNotifyHandler:(id)a0 forEvent:(id)a1;
- (void)environmentWillBecomeReady:(id)a0;
- (void)eventProviderHasUpcomingEvents:(id)a0;

@end
