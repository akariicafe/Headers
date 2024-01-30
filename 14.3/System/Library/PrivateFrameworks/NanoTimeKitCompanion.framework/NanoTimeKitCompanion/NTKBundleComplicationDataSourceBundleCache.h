@class NSMutableDictionary;

@interface NTKBundleComplicationDataSourceBundleCache : NSObject {
    NSMutableDictionary *_cachedBundles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundleLock;
}

+ (id)sharedBundleCache;

- (void).cxx_destruct;
- (void)dealloc;
- (id)bundleAtPath:(id)a0;
- (id)_init;

@end
