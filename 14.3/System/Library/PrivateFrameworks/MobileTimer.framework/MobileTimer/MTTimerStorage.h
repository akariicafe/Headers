@class MTTimerMigrator, NSString, NSArray, NSDate, MTObserverStore, NSMutableArray, MTTimer, MTTimerScheduler;
@protocol NAScheduler, MTPersistence;

@interface MTTimerStorage : NSObject <MTTimerSchedulerDelegate, MTAgentDiagnosticDelegate, MTTimerStorage>

@property (retain, nonatomic) NSMutableArray *orderedTimers;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (retain, nonatomic) MTTimerMigrator *migrator;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTObserverStore *observers;
@property (retain, nonatomic) id<MTPersistence> persistence;
@property (weak, nonatomic) MTTimerScheduler *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *timers;
@property (readonly, nonatomic) MTTimer *nextTimer;

+ (id)_diagnosticDictionaryForTimer:(id)a0;

- (id)initWithPersistence:(id)a0;
- (void)handleF5Reset;
- (void)_queue_sortTimers;
- (void)_queue_dismissTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)_queue_notifyObserversForTimerRemoval:(id)a0 source:(id)a1;
- (void)registerObserver:(id)a0;
- (void)_queue_persistTimers;
- (void)_queue_notifyObserversForNextTimerChange:(id)a0 source:(id)a1;
- (id)init;
- (void)_queue_setAllTimers:(id)a0 source:(id)a1;
- (void)_queue_repeatTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void).cxx_destruct;
- (void)scheduler:(id)a0 didChangeNextTimer:(id)a1;
- (void)printDiagnostics;
- (void)dealloc;
- (id)_applyNecessaryChangesFromOldTimer:(id)a0 currentTimer:(id)a1;
- (void)handleMigrationFinish;
- (id)gatherDiagnostics;
- (void)_queue_removeTimer:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)_queue_notifyObserversWithBlock:(id /* block */)a0;
- (id)_diagnosticTimerDictionary;
- (void)removeTimer:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)_queue_notifyObserversForTimerFire:(id)a0 source:(id)a1;
- (void)loadTimersSync;
- (void)_queue_removeAllTimersForSource:(id)a0;
- (void)repeatTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)dismissTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)_queue_notifyObserversForTimerAdd:(id)a0 source:(id)a1;
- (void)_queue_setAllTimers:(id)a0 source:(id)a1 persist:(BOOL)a2 notify:(BOOL)a3;
- (id)_queuePersistTimer:(id)a0 replacingTimer:(id)a1;
- (void)_createDefaultTimerIfNeededWithCompletion:(id /* block */)a0;
- (void)_queue_notifyObserversForTimerUpdate:(id)a0 source:(id)a1;
- (BOOL)_queue_hasMatchingTimer:(id)a0;
- (id)initWithPersistence:(id)a0 migrator:(id)a1 serializer:(id)a2 callbackScheduler:(id)a3 currentDateProvider:(id /* block */)a4;
- (id)_queue_updateTimer:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)scheduler:(id)a0 didFireTimer:(id)a1;
- (void)setAllTimers:(id)a0 source:(id)a1;
- (void)addTimer:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)updateTimer:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)loadTimers;
- (void)_queue_addTimer:(id)a0 withCompletion:(id /* block */)a1 source:(id)a2;
- (void)_loadTimersWithCompletion:(id /* block */)a0;
- (id)_queue_timerMatchingTimerIdentifier:(id)a0;
- (void)_queue_notifyObserversForTimerDismiss:(id)a0 source:(id)a1;
- (void)getTimersWithCompletion:(id /* block */)a0;

@end
