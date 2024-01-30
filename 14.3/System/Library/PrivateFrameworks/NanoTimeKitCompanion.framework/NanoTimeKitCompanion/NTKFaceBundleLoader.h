@class NSArray;

@interface NTKFaceBundleLoader : NSObject {
    NSArray *_cachedFaceBundles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

+ (id)faceBundleLoaderWithDirectories:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_loadClassesUsingBlock:(id /* block */)a0;
- (void)enumerationFaceBundleClassesWithBlock:(id /* block */)a0;

@end
