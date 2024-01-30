@class NSArray, NTKBundleLoader, NSSet;

@interface NTKFaceBundleLoader : NSObject {
    NSArray *_cachedFaceBundles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    NTKBundleLoader *_loader;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loaderLock;
    NSSet *_urls;
}

+ (id)faceBundleLoaderWithDirectories:(id)a0;

- (void).cxx_destruct;
- (id)initWithURLs:(id)a0;
- (void)_enumerateBundles:(id /* block */)a0;
- (void)_loadClassesUsingBlock:(id /* block */)a0;
- (void)enumerateFaceBundleClassesIgnoringCache:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)loadFaceBundleWithIdentifier:(id)a0;
- (id)loadLegacyFaceBundleForStyle:(long long)a0;

@end
