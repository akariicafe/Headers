@class NSPersistentCloudKitContainerEvent, CKDatabase, CKRecordID, NSURL, CKContainer, PFCloudKitStoreMonitor, NSObject, NSCloudKitMirroringDelegateOptions, CKDatabaseSubscription, NSCloudKitMirroringDelegateSetupRequest, CKRecordZone;
@protocol OS_dispatch_semaphore;

@interface PFCloudKitSetupAssistant : NSObject

@property (readonly, nonatomic) NSCloudKitMirroringDelegateSetupRequest *setupRequest;
@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) CKDatabaseSubscription *databaseSubscription;
@property (readonly, nonatomic) CKRecordID *currentUserRecordID;
@property (readonly, nonatomic) NSURL *largeBlobDirectoryURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *cloudKitSemaphore;
@property (readonly, nonatomic) PFCloudKitStoreMonitor *storeMonitor;
@property (readonly, nonatomic) NSPersistentCloudKitContainerEvent *setupEvent;

- (BOOL)_createZoneIfNecessary:(id *)a0;
- (void)_setContainer:(id)a0;
- (BOOL)_checkUserIdentity:(id *)a0;
- (void)dealloc;
- (void)_setStoreMonitor:(id)a0;
- (void)_setRecordZone:(id)a0;
- (BOOL)_saveZone:(id)a0 error:(id *)a1;
- (BOOL)_initializeCloudKitForObservedStore:(id *)a0;
- (BOOL)_checkAccountStatus:(id *)a0;
- (BOOL)_checkAndTruncateEventHistoryIfNeededWithManagedObjectContext:(id)a0 error:(id *)a1;
- (BOOL)_setupDatabaseSubscriptionIfNecessary:(id *)a0;
- (BOOL)_checkAndInitializeMetadata:(id *)a0;
- (void)_setDatabase:(id)a0;
- (BOOL)_checkIfZoneExists:(id)a0 error:(id *)a1;
- (BOOL)_initializeAssetStorageURLError:(id *)a0;
- (id)initWithSetupRequest:(id)a0 mirroringOptions:(id)a1 observedStore:(id)a2 zone:(id)a3;
- (void)configureSetupOperation:(id)a0;
- (BOOL)_shouldAttemptRecoveryForZone:(id)a0 byDeletingExistingZone:(BOOL *)a1 afterError:(id)a2;
- (BOOL)_deleteZone:(id)a0 error:(id *)a1;

@end
