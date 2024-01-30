@class BCCloudKitTransactionManager, BUCoalescingCallBlock, NSMutableArray, BCCloudKitDatabaseController, NSObject, CKContainer;
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
@property (readonly, nonatomic) NSMutableArray *pendingGetAccountInfoCompletionBlocks;
@property (readonly, nonatomic) NSMutableArray *pendingRequestUpdateAttachmentCompletionBlocks;

+ (id)databaseFolderURLForConfiguration:(id)a0;
+ (void)deleteCloudDataWithCompletion:(id /* block */)a0;
+ (id)instanceForNotificationUserInfo:(id)a0;
+ (id)p_createDatabaseArchiveDirectoryForConfiguration:(id)a0;
+ (id)p_privateDatabaseArchiveURLForConfiguration:(id)a0;
+ (void)registerForSecureNotifications;
+ (id)secureSharedInstance;

- (void)applicationDidBecomeActive;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)p_getAccountInfoWithCompletion:(id /* block */)a0;
- (void)setEnableCloudSync:(BOOL)a0 serviceMode:(BOOL)a1;
- (void)aq_flushPendingGetAccountInfoCompletionBlocksWithWillRetryUpdateAttachment:(BOOL)a0;
- (void)aq_requestUpdateAttachment;
- (void)aq_requestUpdateAttachmentWithCompletion:(id /* block */)a0;
- (void)aq_setGettingAccountInfo:(BOOL)a0 willRetryUpdateAttachment:(BOOL)a1;
- (void)handleRemoteNotification:(id)a0;
- (void)p_accountChanged:(id)a0;
- (void)p_flushPendingRequestUpdateAttachmentCompletionBlocks;
- (void)p_flushPendingRequestUpdateAttachmentCompletionBlocksWithAttached:(BOOL)a0 reachable:(BOOL)a1;
- (void)p_getAccountInfo;
- (void)p_getNecessaryAccountInfoFromContainer:(id)a0 completion:(id /* block */)a1;
- (void)p_identityChanged:(id)a0;
- (void)p_updateAttachment;
- (void)requestUpdateAttachmentWithCompletion:(id /* block */)a0;

@end
