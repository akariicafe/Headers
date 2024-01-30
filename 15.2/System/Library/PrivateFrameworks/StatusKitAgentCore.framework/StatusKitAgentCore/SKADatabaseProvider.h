@class CKContainer, NSString, NSObject, NSPersistentContainer;
@protocol OS_dispatch_queue, SKADatabaseProvidingDelegate;

@interface SKADatabaseProvider : NSObject <SKADatabaseProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *historyProcessingQueue;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) CKContainer *ckContainer;
@property (weak, nonatomic) id<SKADatabaseProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)fileManager;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (id)initWithDelegate:(id)a0;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)databaseDirectoryURL;
- (id)lastProcessedPersistentHistoryToken;
- (id)containerName;
- (id)appTransactionAuthorName;
- (BOOL)databaseHasBeenCreated;
- (id)localPersistentStoreDescription;
- (id)cloudDatabaseFileURL;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (void).cxx_destruct;
- (id)ckContainerIdentifier;
- (id)createPersistentContainer;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (void)processPersistentStoreRemoteChanges;
- (id)cloudPersistentStoreDescription;
- (id)newBackgroundContext;
- (id)createCkContainer;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (id)localDatabaseFileURL;
- (BOOL)overrideDeviceEncryptionCheck;

@end
