@class CKRecordZone, NSSQLCore, NSCloudKitMirroringDelegateOptions, PFCloudKitExporterOptions, NSObject, CDDCloudKitClient, CKDatabaseSubscription, CKScheduler, NSCloudKitMirroringRequestManager, NSString, CKNotificationListener, CKDatabase, CKRecordID, PFCloudKitThrottledNotificationObserver, NSPersistentStoreCoordinator, CKContainer, NSError;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NSCloudKitMirroringDelegate : NSObject <PFCloudKitExporterDelegate, NSCloudKitMirroringDelegateProgressProvider, NSPersistentStoreMirroringDelegate> {
    CDDCloudKitClient *_coredatadClient;
    PFCloudKitThrottledNotificationObserver *_accountChangeObserver;
    PFCloudKitThrottledNotificationObserver *_appActivateLifecycleObserver;
    PFCloudKitThrottledNotificationObserver *_appDeactivateLifecycleObserver;
}

@property (class, readonly, nonatomic) NSString *cloudKitMachServiceName;
@property (class, readonly, nonatomic) NSString *cloudKitMetadataTransformerName;

@property (readonly, nonatomic) NSString *ckDatabaseName;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudKitQueue;
@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) CKDatabaseSubscription *databaseSubscription;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) CKRecordID *currentUserRecordID;
@property (readonly, nonatomic) CKScheduler *scheduler;
@property (readonly, nonatomic) CKNotificationListener *notificationListener;
@property (readonly, nonatomic) NSError *lastInitializationError;
@property (readonly, weak, nonatomic) NSSQLCore *observedStore;
@property (readonly, nonatomic) NSString *observedStoreIdentifier;
@property (readonly, weak, nonatomic) NSPersistentStoreCoordinator *observedCoordinator;
@property (readonly, nonatomic) BOOL hadObservedStore;
@property (readonly, nonatomic) BOOL successfullyInitialized;
@property (readonly, nonatomic) PFCloudKitExporterOptions *exporterOptions;
@property (readonly, copy, nonatomic) NSCloudKitMirroringDelegateOptions *options;
@property (readonly, retain, nonatomic) NSCloudKitMirroringRequestManager *requestManager;
@property (readonly, nonatomic) NSString *importActivityIdentifier;
@property (readonly, nonatomic) NSString *exportActivityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)printRepresentativeSchemaForModelAtURL:(id)a0 orStoreAtURL:(id)a1 withConfiguration:(id)a2;
+ (BOOL)checkAndCreateDirectoryAtURL:(id)a0 wipeIfExists:(BOOL)a1 error:(id *)a2;
+ (id)makeACopyOfTheStoreAtURL:(id)a0 withCoordinator:(id)a1 error:(id *)a2;
+ (BOOL)checkIfContentsOfStore:(id)a0 matchContentsOfStore:(id)a1 error:(id *)a2;
+ (BOOL)isFirstPartyContainerIdentifier:(id)a0;
+ (void)printMetadataForStoreAtURL:(id)a0 withConfiguration:(id)a1 operateOnACopy:(BOOL)a2;
+ (id)createCloudKitServerWithMachServiceName:(id)a0 andStorageDirectoryPath:(id)a1;
+ (id)stringForResetReason:(unsigned long long)a0;
+ (BOOL)checkForCloudKitTablesInStoreAtURL:(id)a0 withPersistentStoreCoordinator:(id)a1 withConfiguration:(id)a2;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)ckAccountOrIdentityChangedHandler:(id)a0;
- (void)logResetSyncNotification:(id)a0;
- (void)persistentStoreCoordinator:(id)a0 didSuccessfullyAddPersistentStore:(id)a1 withDescription:(id)a2;
- (void)dealloc;
- (void)exporter:(id)a0 willScheduleOperations:(id)a1;
- (BOOL)validateManagedObjectModel:(id)a0 forUseWithStoreWithDescription:(id)a1 error:(id *)a2;
- (void)remoteStoreDidChange:(id)a0;
- (void)storesDidChange:(id)a0;
- (void)managedObjectContextSaved:(id)a0;
- (void)applicationDidActivate:(id)a0;
- (void)coordinatorWillRemoveStore:(id)a0;
- (id)initWithCloudKitContainerOptions:(id)a0;
- (void)applicationWillDeactivate:(id)a0;
- (void)eventUpdated:(id)a0;

@end
