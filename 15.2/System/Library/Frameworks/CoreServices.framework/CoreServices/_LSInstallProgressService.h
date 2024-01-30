@class NSString, NSArray, LSInstallProgressList, NSMutableDictionary, NSMutableSet, NSObject, NSMutableOrderedSet, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate> {
    NSMutableSet *_observers;
    LSInstallProgressList *_progresses;
    NSMutableSet *_publishingStrings;
    NSMutableDictionary *_installIndexes;
    NSMutableOrderedSet *_orderedInstalls;
    NSMutableSet *_inactiveInstalls;
    NSMutableDictionary *_installTypes;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSArray *_journalledNotificationsToReplay;
    NSMutableArray *_startupJournalledNotifications;
    BOOL _replayingJournalToNewClients;
    BOOL _usingNetwork;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (int)notificationTypeForOperation:(unsigned long long)a0;
+ (void)beginListening;

- (void)sendDatabaseRebuiltNotification;
- (void)restoreInactiveInstalls;
- (void)installationFailedForApplication:(id)a0;
- (void)performJournalRecovery;
- (void)addObserver:(id)a0;
- (id)_prepareApplicationProxiesForNotification:(int)a0 identifiers:(id)a1 withPlugins:(BOOL)a2 options:(id)a3;
- (void)dispatchJournalledNotificationsToObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)sendNetworkUsageChangedNotification;
- (void)sendAppControlsNotificationForApp:(id)a0 withName:(id)a1;
- (void)directlySendNotification:(int)a0 withProxies:(id)a1 toObserverProxy:(id)a2;
- (void)createInstallProgressForApplication:(id)a0 withPhase:(unsigned long long)a1 andPublishingString:(id)a2 reply:(id /* block */)a3;
- (void)_placeholdersUninstalled:(id)a0;
- (void)sendDatabaseRebuiltNotificationToObserver:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)sendNotification:(id)a0 ForPlugins:(id)a1;
- (void)sendNotification:(int)a0 forAppProxies:(id)a1 Plugins:(BOOL)a2;
- (void)directlySendNotification:(int)a0 withProxies:(id)a1 toObserver:(id)a2;
- (void)_placeholderIconUpdatedForApp:(id)a0;
- (void)dispatchJournalledNotificationsToConnectedClients;
- (id)loadJournalledNotificationsFromDisk;
- (void).cxx_destruct;
- (id)init;
- (void)addSendNotificationFenceWithTimeout:(double)a0 fenceBlock:(id /* block */)a1;
- (SEL)observerSelectorForNotification:(int)a0;
- (void)installationEndedForApplication:(id)a0 withState:(unsigned long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)parentProgressForApplication:(id)a0 andPhase:(unsigned long long)a1 isActive:(BOOL)a2;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2 options:(id)a3;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2;
- (id)_LSFindPlaceholderApplications;
- (void)sendNotification:(id)a0 forApplicationExtensionRecords:(id)a1;
- (void)rebuildInstallIndexes;

@end
