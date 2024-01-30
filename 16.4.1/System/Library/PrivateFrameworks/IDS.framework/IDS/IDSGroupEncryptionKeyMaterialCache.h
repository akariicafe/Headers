@class NSMutableSet;

@interface IDSGroupEncryptionKeyMaterialCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (void)enumerateCachedKeyMaterialUsingBlock:(id /* block */)a0;
- (void)invalidateKeyMaterialByKeyIndexes:(id)a0;
- (void)recvKeyMaterial:(id)a0;

@end
