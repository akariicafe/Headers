@class NSPersistentStoreCache, NSMutableDictionary, NSPersistentStore;

@interface NSGenerationalRowCache : NSObject {
    NSPersistentStore *_store;
    NSPersistentStoreCache *_primaryCache;
    NSMutableDictionary *_rowCachesByGenerationToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)initWithStore:(id)a0;
- (void)dealloc;

@end
