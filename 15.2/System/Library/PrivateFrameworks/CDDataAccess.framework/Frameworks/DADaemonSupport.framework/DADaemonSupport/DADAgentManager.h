@class DADBuddyStateObserver, NSMutableDictionary, NSArray, NSDictionary, DADREMLocalDBWatcher, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, DADREMStoreProvider, DADREMUserNotificationPresentingProvider;

@interface DADAgentManager : NSObject {
    NSArray *_activeAgents;
    NSObject<OS_dispatch_queue> *_activeAgentsQueue;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    struct IONotificationPort { } *_pmPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    id /* block */ _startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    struct __CTServerConnection { } *_ctServerConnection;
    NSDictionary *_wirelessPolicies;
    int _pendingAccountSetupCount;
    DADBuddyStateObserver *_buddyStateObserver;
}

@property (retain, nonatomic) DADREMLocalDBWatcher *rem_localDBWatcher;
@property (copy, nonatomic) id /* block */ rem_xpcEventHandler;
@property (retain, nonatomic) id<DADREMUserNotificationPresentingProvider> rem_userNotificationPresentingProvider;
@property (retain, nonatomic) id<DADREMStoreProvider> rem_storeProvider;
@property (retain, nonatomic) NSMutableArray *subCalHandlers;
@property (nonatomic) unsigned long long nextDisableMonitoringAgentsToken;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens;
@property (readonly, nonatomic) NSArray *activeAgents;

+ (id)sharedManager;
+ (BOOL)wirelessPolicy:(id)a0 isMorePermissiveThanPolicy:(id)a1;

- (id)stateString;
- (unsigned long long)disableMonitoringAgents;
- (void)_addAccountAggdEntries;
- (id)accountWithAccountID:(id)a0;
- (id)activeAccountBundleIDs;
- (BOOL)hasPendingAccountSetup;
- (BOOL)updateContentsOfFolders:(id)a0 forAccountID:(id)a1 andDataclasses:(long long)a2 isUserRequested:(BOOL)a3;
- (void)enableMonitoringAgentsWithToken:(unsigned long long)a0;
- (void)getStatusReportDictsWithCompletionBlock:(id /* block */)a0;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 requireChangedFolders:(BOOL)a2 isUserRequested:(BOOL)a3;
- (BOOL)stopMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (void)requestPolicyUpdateForAccount:(id)a0;
- (id)_configFileForAgent:(id)a0;
- (void)removePendingAccountSetup;
- (void)addPendingAccountSetup;
- (id)currentPolicyKeyForAccount:(id)a0;
- (void)_deviceDidWake;
- (void)saveAndReleaseAgents;
- (void)_deviceWillSleep;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4 callback:(id /* block */)a5;
- (BOOL)_systemMayNowBeReady;
- (BOOL)suspendMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (void)registerForBuddy;
- (void).cxx_destruct;
- (id)agentWithAccountID:(id)a0;
- (id)init;
- (void)_registerForCTDataUsageNotificaiton;
- (void)_resetMonitoringRequestsAndLoadAgents;
- (void)enableActiveSync;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (BOOL)hasActiveAccounts;
- (void)disableActiveSync;
- (BOOL)_hasDataclassWeCareAbout:(id)a0;
- (void)dealloc;
- (void)_clearOrphanedStores;
- (id)_accountInfoPath;
- (void)_stopMonitoringAndSaveAgents;
- (BOOL)hasEASAccountConfigured;
- (id)accountWithAccountID:(id)a0 andClassName:(id)a1;
- (void)_handleCellularDataUsageChangedNotification;
- (void)unregisterForBuddy;
- (void)_loadAndStartMonitoringAgents:(BOOL)a0;
- (void)loadAgents:(BOOL)a0;
- (BOOL)startMonitoringAccountID:(id)a0 syncKeyMap:(id)a1;
- (BOOL)resumeMonitoringAccountID:(id)a0 syncKeyMap:(id)a1;
- (BOOL)updateContentsOfAllFoldersForAccountIDs:(id)a0;

@end
