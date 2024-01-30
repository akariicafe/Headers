@class NSDate, PCPersistentTimer, NSArray, NSTimer, EKTimedEventStorePurger, EKEventStore, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;

@interface _EKNotificationMonitor : NSObject {
    id /* block */ _eventStoreGetter;
    BOOL _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _lastChangedTimestamp;
    BOOL _changedIDsValid;
    NSMutableArray *_changedIDs;
    int _ignoreSyncTimer;
    BOOL _initialCheck;
    BOOL _shouldInstallPersistentTimer;
    BOOL _useSyncIdleTimer;
    BOOL _registerForDarwinNotifications;
    BOOL _filteredByShowsNotificationsFlag;
    BOOL _computeChangedNotificationSet;
    BOOL _automaticallyFaultNotifications;
    BOOL _lastExpirationTimerFireDateWasInThePast;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *logHandle;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, nonatomic) BOOL isMonitoringOnlyNotificationCount;
@property (readonly, nonatomic) EKTimedEventStorePurger *eventStorePurger;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackNotificationQueue;
@property (readonly, nonatomic) unsigned long long notificationCount;
@property (readonly, nonatomic) NSArray *notificationReferences;

+ (id)requestedDarwinNotifications;
+ (void)addBlacklistedNotificationObjectID:(id)a0;
+ (id)blacklistedNotificationQueue;
+ (id)blacklistedRowIDs;

- (void)handleDarwinNotification:(id)a0;
- (void)_timerFired;
- (void)_eventStoreChanged;
- (void)_killSyncTimer:(id)a0;
- (void)_updateTimerFireDate:(id)a0;
- (id)effectiveCallbackQueue;
- (void)_alertPrefChanged;
- (void)_eventStoreChangedNotification:(id)a0;
- (id)_initWithOptions:(long long)a0 eventStore:(id)a1 eventStoreGetter:(id /* block */)a2;
- (id)initWithOptions:(long long)a0;
- (id)initWithOptions:(long long)a0 eventStore:(id)a1;
- (void)_syncDidStart;
- (id)initWithOptions:(long long)a0 eventStoreGetter:(id /* block */)a1;
- (void)_databaseChanged;
- (void)_syncDidEnd:(id)a0;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)a0 earliestExpiringNotification:(id *)a1;
- (void)start;
- (id)_eventStore;
- (void)_killTimer;
- (void)adjust;
- (void).cxx_destruct;
- (void)_syncTimerFired:(id)a0;
- (id)init;
- (void)attemptReloadSynchronously:(BOOL)a0;
- (void)attemptReload;
- (void)_addRemovedOrAddedObjectIDsTo:(id)a0 oldNotifications:(id)a1 newNotifications:(id)a2;
- (void)dealloc;
- (void)trackChangesInEventStore;
- (void)_notificationCountChangedExternally;
- (void)_resetSyncTimer;
- (void)stop;

@end
