@class NSString, NSManagedObjectModel, NSPersistentStoreCoordinator, NSPredicate, NSManagedObjectContext;

@interface OFMetadataCache : NSObject {
    NSString *_diskCacheFilepath;
    NSManagedObjectContext *_parentManagedObjectContext;
    NSPredicate *_predicateEntryIdentifierTemplate;
    NSPredicate *_predicateMetadataKeyTemplate;
}

@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (BOOL)_save;
- (id)init;
- (void)invalidateMemoryCaches;
- (BOOL)save;
- (void)dealloc;
- (void)invalidateDiskCaches;
- (void)_didEnterBackgroundNotification;
- (void)_willTerminateNotification;
- (id)initWithDiskCacheFilepath:(id)a0;

@end
