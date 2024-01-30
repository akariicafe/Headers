@class NSString, NSPointerArray;

@interface GEOConfigLocalProxy : NSObject <GEOConfigProxy> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSPointerArray *_configStores;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)configExpiryForSource:(long long)a0;
- (id)configStoreForOptions:(unsigned long long)a0;
- (id)init;
- (id)configExpiryForOptions:(unsigned long long)a0;
- (id)configStoreForSource:(long long)a0;
- (void).cxx_destruct;

@end
