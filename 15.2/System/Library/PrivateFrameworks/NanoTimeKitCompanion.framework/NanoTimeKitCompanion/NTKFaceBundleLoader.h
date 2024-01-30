@class NSArray;

@interface NTKFaceBundleLoader : NSObject {
    NSArray *_cachedFaceBundles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

+ (id)faceBundleLoaderWithDirectories:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)_loadClassesUsingBlock:(id /* block */)a0;
- (void)enumerateFaceBundleClassesIgnoringCache:(BOOL)a0 withBlock:(id /* block */)a1;

@end
