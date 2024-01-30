@class PLPhotoLibraryPathManager, NSMutableDictionary, PLManagedObjectContext;

@interface PLManagedObjectLookupItemCache : NSObject {
    NSMutableDictionary *_objectIDsByKey;
    PLManagedObjectContext *_creationContext;
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

- (id)initWithPathManager:(id)a0;
- (void).cxx_destruct;
- (void)invalidateWithReason:(id)a0;
- (void)setObjectID:(id)a0 forKey:(id)a1;
- (id)createObjectIfNecessaryForKey:(id)a0 withManagedObjectContext:(id)a1 createBlock:(id /* block */)a2;
- (id)objectIDForKey:(id)a0;

@end
