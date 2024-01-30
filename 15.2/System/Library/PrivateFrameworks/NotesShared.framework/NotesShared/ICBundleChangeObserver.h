@class NSMutableDictionary, NSPersistentStoreCoordinator, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue;

@interface ICBundleChangeObserver : NSObject

@property (nonatomic) BOOL isObserving;
@property (nonatomic) BOOL didAddForExistingPaperAttachments;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSMutableDictionary *mutableFilePresenters;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (copy, nonatomic) id /* block */ didChangeFilePresenters;
@property (copy, nonatomic) id /* block */ attachmentDidChange;

- (void)contextDidSave:(id)a0;
- (id)filePresenters;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (id)initWithPersistentStoreCoordinator:(id)a0 managedObjectContext:(id)a1;
- (void)addManagedObjectContextDidSaveObserver;
- (void)addObserversForExistingPaperAttachments;
- (void)stopAndNotifyObservers:(BOOL)a0;
- (void)removeManagedObjectContextDidSaveObserver;
- (void)addObserversForObjects:(id)a0;
- (void)processObjectIDs:(id)a0 completion:(id /* block */)a1;
- (void)addObserverForBundleWithObjectID:(id)a0 url:(id)a1;
- (void)removeObserverForBundleWithURL:(id)a0;

@end
