@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

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
}

@property (retain, nonatomic) NSMutableArray *subCalHandlers;
@property (nonatomic) unsigned long long nextDisableMonitoringAgentsToken;
@property (readonly, nonatomic) NSMutableDictionary *disableMonitoringAgentsTokens;
@property (readonly, nonatomic) NSArray *activeAgents;

+ (id)sharedManager;
+ (BOOL)wirelessPolicy:(id)a0 isMorePermissiveThanPolicy:(id)a1;
+ (BOOL)_shouldAccount:(id)a0 syncWhenSyncingParentAccountWithID:(id)a1;

- (id)stateString;
- (BOOL)resumeMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (unsigned long long)disableMonitoringAgents;
- (id)accountWithAccountID:(id)a0;
- (id)activeAccountBundleIDs;
- (void)_calDaysToSyncDidChange;
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
- (id)changeHistoryClerkWithDBHelper:(id)a0;
- (void)handleURLString:(id)a0;
- (BOOL)removePersistMonitoringAccountID:(id)a0 folderIDs:(id)a1 clientID:(id)a2;
- (void)_deviceDidWake;
- (void)saveAndReleaseAgents;
- (void)_deviceWillSleep;
- (BOOL)startMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (void)processMeetingRequestDatas:(id)a0 deliveryIdsToClear:(id)a1 deliveryIdsToSoftClear:(id)a2 inFolderWithId:(id)a3 forAccountWithId:(id)a4 callback:(id /* block */)a5;
- (BOOL)_systemMayNowBeReady;
- (BOOL)suspendMonitoringAccountID:(id)a0 folderIDs:(id)a1;
- (BOOL)clearPersistMonitoringAccountID:(id)a0 clientID:(id)a1;
- (BOOL)addPersistMonitoringAccountID:(id)a0 folderIDs:(id)a1 clientID:(id)a2;
- (void)registerForBuddy;
- (void).cxx_destruct;
- (id)agentWithAccountID:(id)a0;
- (id)init;
- (void)loadAgents;
- (void)_registerForCTDataUsageNotificaiton;
- (id)accountsProviderWithDBHelper:(id)a0;
- (void)_resetMonitoringRequestsAndLoadAgents;
- (void)enableActiveSync;
- (BOOL)processFolderChange:(id)a0 forAccountWithID:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)a0 andDataclasses:(long long)a1 isUserRequested:(BOOL)a2;
- (BOOL)hasActiveAccounts;
- (void)disableActiveSync;
- (BOOL)resetCertWarningsForAccountWithId:(id)a0 andDataclasses:(long long)a1;
- (BOOL)_hasDataclassWeCareAbout:(id)a0;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)a0 deleted:(id)a1 foldersTag:(id)a2 forAccountID:(id)a3;
- (void)dealloc;
- (void)_clearOrphanedStores;
- (id)_accountInfoPath;
- (void)_stopMonitoringAndSaveAgents;
- (void)reportFolderItemsSyncSuccess:(BOOL)a0 forFolderWithID:(id)a1 withItemsCount:(unsigned long long)a2 andAccountWithID:(id)a3;
- (BOOL)hasEASAccountConfigured;
- (id)accountWithAccountID:(id)a0 andClassName:(id)a1;
- (void)_handleCellularDataUsageChangedNotification;
- (id)containerProviderWithDBHelper:(id)a0;
- (id)appleAccountsMatchingClass:(id)a0 errror:(id *)a1;
- (BOOL)_clearOrphanedSubscribedCalendars:(void *)a0 eventAccountIds:(id)a1;
- (void)_loadAndStartMonitoringAgents;
- (void)_sendAccountAnalytics;
- (id)agentsToSyncForAccountID:(id)a0;

@end
