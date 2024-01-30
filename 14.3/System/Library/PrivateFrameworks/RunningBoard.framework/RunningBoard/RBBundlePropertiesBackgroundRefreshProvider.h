@class NSCache;

@interface RBBundlePropertiesBackgroundRefreshProvider : NSObject {
    NSCache *_backgroundRefreshStateByIdentity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isBackgroundRefreshEnabledForIdentity:(id)a0;
- (id)description;
- (void)removeIdentity:(id)a0;

@end
