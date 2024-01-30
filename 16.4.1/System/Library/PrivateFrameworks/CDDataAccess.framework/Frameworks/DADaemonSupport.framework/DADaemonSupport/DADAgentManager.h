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

- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4 callback:(id /* block */)a5;
- (BOOL)hasActiveAccounts;
- (id)_configFileForAgent:(id)a0;
- (BOOL)hasPendingAccountSetup;
- (id)stateString;
- (void)disableActiveSync;
- (void)_resetMonitoringRequestsAndLoadAgents;
- (unsigned long long)disableMonitoringAgents;
- (id)activeAccountBundleIDs;
- (void)addPendingAccountSetup;
- (id)_accountInfoPath;
- (id)currentPolicyKeyForAccount:(id)a0;
- (void)enableMonitoringAgentsWithToken:(unsigned long long)a0;
- (void)_addAccountAggdEntries;
- (BOOL)_hasDataclassWeCareAbout:(id)a0;
- (void)getStatusReportDictsWithCompletionBlock:(id /* block */)a0;
- (void)saveAndReleaseAgents;
- (void)_registerForCTDataUsageNotificaiton;
- (BOOL)suspendMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 requireChangedFolders:(BOOL)a2 isUserRequested:(BOOL)a3;
- (void)_handleCellularDataUsageChangedNotification;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (void)_deviceWillSleep;
- (void)_stopMonitoringAndSaveAgents;
- (void)dealloc;
- (void)_clearOrphanedStores;
- (BOOL)updateContentsOfFolders:(id)a0 forAccountID:(id)a1 andDataclasses:(long long)a2 isUserRequested:(BOOL)a3;
- (BOOL)stopMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (id)accountWithAccountID:(id)a0;
- (void)requestPolicyUpdateForAccount:(id)a0;
- (BOOL)_systemMayNowBeReady;
- (void)removePendingAccountSetup;
- (id)init;
- (id)accountWithAccountID:(id)a0 andClassName:(id)a1;
- (id)agentWithAccountID:(id)a0;
- (BOOL)hasEASAccountConfigured;
- (void)_deviceDidWake;
- (void)registerForBuddy;
- (void)enableActiveSync;
- (void).cxx_destruct;
- (void)_loadAndStartMonitoringAgents:(BOOL)a0;
- (void)loadAgents:(BOOL)a0;
- (BOOL)resumeMonitoringAccountID:(id)a0 syncKeyMap:(id)a1;
- (BOOL)startMonitoringAccountID:(id)a0 syncKeyMap:(id)a1;
- (void)unregisterForBuddy;
- (BOOL)updateContentsOfAllFoldersForAccountIDs:(id)a0;

@end
