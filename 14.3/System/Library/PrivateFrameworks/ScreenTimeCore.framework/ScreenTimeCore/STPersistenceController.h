@class NSManagedObjectContext, NSMutableDictionary, NSPersistentStore, NSString, NSObject, NSPersistentContainer;
@protocol OS_dispatch_queue;

@interface STPersistenceController : NSObject <STPersistenceControllerProtocol> {
    NSObject *_lastPersistentHistoryTokenByStoreIdentifierLock;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *lastPersistentHistoryTokenByStoreIdentifier;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coreDataQueue;
@property (readonly, nonatomic) NSManagedObjectContext *viewContext;
@property (readonly, nonatomic) BOOL hasStoreLoaded;
@property (readonly) NSPersistentStore *localStore;
@property (readonly) NSPersistentStore *cloudStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)newBackgroundContext;
- (void)performBackgroundTask:(id /* block */)a0;
- (void)_remotePersistentStoreDidChange:(id)a0;
- (void)_persistentStoreCoordinatorStoresDidChange:(id)a0;
- (id)initWithPersistentContainer:(id)a0;
- (void)performBackgroundTaskAndWait:(id /* block */)a0;
- (void)_logAboutMissingStoreName:(id)a0;
- (id)persistentHistoryTokenForStore:(id)a0;
- (void)savePersistentHistoryToken:(id)a0 forStore:(id)a1;
- (id)localPersistentStoreMetadataValueForKey:(id)a0;
- (void)setLocalPersistentStoreValue:(id)a0 forKey:(id)a1;
- (id)descriptionForPersistentStore:(id)a0;

@end
