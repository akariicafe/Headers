@class NSMutableDictionary;

@interface NTKBundleLoader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *bundlesByPath;

+ (id)rootDirectory;

- (void).cxx_destruct;
- (id)init;
- (void)enumerateBundlesFromDirectoryURL:(id)a0 enumerator:(id /* block */)a1;
- (void)resetCacheForDirectoryURL:(id)a0;
- (id)bundlesFromDirectoryURL:(id)a0;
- (id)loadBundlesFromDirectoryURL:(id)a0 enumerator:(id /* block */)a1;

@end
