@class BCCloudKitTransactionManager, BUCoalescingCallBlock, BCCloudKitDatabaseController, NSObject, CKContainer;
@protocol OS_dispatch_queue, BCContainerConfiguration;

@interface BCCloudKitController : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance>

@property (class, readonly) BCCloudKitController *sharedInstance;

@property (retain, nonatomic) BCCloudKitTransactionManager *transactionManager;
@property (retain, nonatomic) CKContainer *container;
@property (retain) BCCloudKitDatabaseController *privateCloudDatabaseController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) BOOL gettingAccountInfo;
@property (nonatomic) BOOL enableCloudSync;
@property (nonatomic) BOOL serviceMode;
@property (nonatomic) BOOL didChangeContainer;
@property (retain, nonatomic) id<BCContainerConfiguration> configuration;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedAttachment;

+ (void)deleteCloudDataWithCompletion:(id /* block */)a0;
+ (id)secureSharedInstance;
+ (id)p_privateDatabaseArchiveURLForConfiguration:(id)a0;
+ (void)registerForSecureNotifications;
+ (id)databaseFolderURLForConfiguration:(id)a0;
+ (id)p_createDatabaseArchiveDirectoryForConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)applicationDidBecomeActive;
- (void)p_accountChanged:(id)a0;
- (void)p_identityChanged:(id)a0;
- (void)p_updateAttachment;
- (void)p_getAccountInfo;
- (void)p_getNecessaryAccountInfoFromContainer:(id)a0 completion:(id /* block */)a1;
- (void)setEnableCloudSync:(BOOL)a0 serviceMode:(BOOL)a1;
- (void)handleRemoteNotification:(id)a0;

@end
