@class NSArray, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ESDAgentManager : NSObject {
    NSArray *_activeAgents;
    NSObject<OS_dispatch_queue> *_activeAgentsQueue;
    NSMutableDictionary *_watchedIDs;
    unsigned int _pmNotifier;
    struct IONotificationPort { } *_pmPort;
    struct __CFRunLoopSource { } *_pmRunLoopSource;
    id /* block */ _startAgentsWhenSystemReadyBlock;
    NSObject<OS_dispatch_queue> *_CTCellularUsagePolicyNotificationQ;
    struct __CTServerConnection { } *_ctServerConnection;
    int _pendingAccountSetupCount;
}

@property (retain, nonatomic) NSMutableArray *subCalHandlers;
@property (nonatomic) unsigned long long nextDisableMonitoringAgentsToken;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens;
@property (readonly, nonatomic) NSArray *activeAgents;

+ (id)sharedManager;

- (void)_calDaysToSyncDidChange;
- (id)stateString;
- (id)init;
- (BOOL)resumeMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (void)getStatusReportDictsWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleURLString:(id)a0;
- (BOOL)updateFolderListForAccountID:(id)a0 andDataclasses:(long long)a1 requireChangedFolders:(BOOL)a2 isUserRequested:(BOOL)a3;
- (void)cleanupLaunchdSemaphore;
- (void)dealloc;
- (void)_addAccountAggdEntries;
- (void)_stopMonitoringAndSaveAgents;
- (id)accountWithAccountID:(id)a0;
- (BOOL)_systemMayNowBeReady;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)a0 deleted:(id)a1 foldersTag:(id)a2 forAccountID:(id)a3;
- (void)_resetMonitoringRequestsAndLoadAgents;
- (void)saveAndReleaseAgents;
- (void)_registerForCTDataUsageNotificaiton;
- (BOOL)suspendMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (id)_phoneVersion;
- (id)activeAccountBundleIDs;
- (void)disableDaemon;
- (unsigned long long)disableMonitoringAgents;
- (BOOL)addPersistMonitoringAccountID:(id)a0 folderIDs:(id)a1 clientID:(id)a2;
- (void)requestPolicyUpdateForAccount:(id)a0;
- (void)reportFolderItemsSyncSuccess:(BOOL)a0 forFolderWithID:(id)a1 withItemsCount:(unsigned long long)a2 andAccountWithID:(id)a3;
- (id)agentWithAccountID:(id)a0;
- (void)enableMonitoringAgentsWithToken:(unsigned long long)a0;
- (void)enableActiveSync;
- (BOOL)clearPersistMonitoringAccountID:(id)a0 clientID:(id)a1;
- (void)_deviceDidWake;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (id)_configFileForAgent:(id)a0;
- (void)addPendingAccountSetup;
- (void)_loadAndStartExchangeMonitoringAgents;
- (void)loadAgents;
- (void)removePendingAccountSetup;
- (BOOL)hasPendingAccountSetup;
- (BOOL)_removeSubscribedCalendarsForAccountWithID:(id)a0 inStore:(void *)a1;
- (void)disableActiveSync;
- (BOOL)dadRemoveStoresForAccountWithID:(id)a0;
- (BOOL)processFolderChange:(id)a0 forAccountWithID:(id)a1 completionBlock:(id /* block */)a2;
- (void)_handleCellularDataUsageChangedNotification;
- (BOOL)startMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (void)loadExchangeAgents;
- (BOOL)removePersistMonitoringAccountID:(id)a0 folderIDs:(id)a1 clientID:(id)a2;
- (BOOL)hasActiveAccounts;
- (id)changeHistoryClerkWithDBHelper:(id)a0;
- (id)currentPolicyKeyForAccount:(id)a0;
- (BOOL)stopMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (BOOL)resetCertWarningsForAccountWithId:(id)a0 andDataclasses:(long long)a1;
- (void)registerForBuddy;
- (id)accountsProviderWithDBHelper:(id)a0;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4 callback:(id /* block */)a5;
- (void)_clearOrphanedStores;
- (void)enableDaemon;
- (BOOL)hasEASAccountConfigured;
- (BOOL)updateContentsOfFolders:(id)a0 forAccountID:(id)a1 andDataclasses:(long long)a2 isUserRequested:(BOOL)a3;
- (id)_accountInfoPath;
- (void)_deviceWillSleep;
- (BOOL)_hasDataclassWeCareAbout:(id)a0;
- (id)accountWithAccountID:(id)a0 andClassName:(id)a1;

@end
