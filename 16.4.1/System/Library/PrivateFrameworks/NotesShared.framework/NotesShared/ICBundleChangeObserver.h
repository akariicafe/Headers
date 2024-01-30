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
- (void)stop;
- (id)init;
- (void)start;
- (id)filePresenters;
- (void).cxx_destruct;
- (void)removeObserverForBundleWithURL:(id)a0;
- (void)addManagedObjectContextDidSaveObserver;
- (void)addObserverForBundleWithObjectID:(id)a0 url:(id)a1;
- (void)addObserversForExistingPaperAttachments;
- (void)addObserversForObjects:(id)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 managedObjectContext:(id)a1;
- (void)processObjectIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeManagedObjectContextDidSaveObserver;
- (void)stopAndNotifyObservers:(BOOL)a0;

@end
