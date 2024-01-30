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
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (id)appTransactionAuthorName;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (id)containerName;
- (id)databaseDirectoryURL;
- (id)createPersistentContainer;
- (void)processPersistentStoreRemoteChanges;
- (BOOL)overrideDeviceEncryptionCheck;
- (id)cloudPersistentStoreDescription;
- (id)createCkContainer;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)localPersistentStoreDescription;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;
- (id)cloudDatabaseFileURL;
- (id)lastProcessedPersistentHistoryToken;
- (id)ckContainerIdentifier;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (id)localDatabaseFileURL;
- (BOOL)databaseHasBeenCreated;
- (id)newBackgroundContext;
- (void).cxx_destruct;

@end
