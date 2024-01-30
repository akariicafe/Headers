@class VCCKApplicationStateObserver, CKRecordID, VCCKShortcutSyncService, NSString, NSObject, CKContainer;
@protocol OS_dispatch_queue, VCDatabaseProvider, OS_nw_path_monitor;

@interface VCCKShortcutSyncCoordinator : NSObject

@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) struct __CTServerConnection { } *telephonyConnection;
@property (readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver;
@property (nonatomic, getter=isStarted) BOOL started;
@property (nonatomic) long long accountStatus;
@property (retain, nonatomic) CKRecordID *userRecordID;
@property (retain, nonatomic) VCCKShortcutSyncService *currentSyncService;
@property (readonly, nonatomic) NSString *accountForSyncToken;
@property (nonatomic, getter=isSyncEnabled) BOOL syncEnabled;

- (void)stopObservingAccountChanges;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startObservingReachability;
- (void)updateAccountStatusAndUserRecordID;
- (void)stopObservingReachability;
- (void)stopObservingDataUsagePermission;
- (void)stopObservingUserDefaults;
- (void)handleCloudKitSyncEnabledChange;
- (void)updateCurrentSyncServiceIfNeeded;
- (id)initWithDatabaseProvider:(id)a0;
- (void)setupPathMonitor;
- (void)start;
- (void)deleteLegacyShortcutsZoneSubscriptionIfNeeded;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startObservingAccountChanges;
- (void)startObservingApplicationVisibility;
- (void)startObservingUserDefaults;
- (void)stopObservingApplicationVisibility;
- (void)handleAccountChangedNotification:(id)a0;
- (void)handleCloudKitSyncZoneWasPurgedChange;
- (void)startObservingDataUsagePermission;

@end
