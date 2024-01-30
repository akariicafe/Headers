@class NSMutableDictionary;

@interface NTKBundleLoader : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *bundlesByPath;

+ (id)rootDirectory;

- (void)resetCacheForDirectoryURL:(id)a0;
- (void)enumerateBundlesFromDirectoryURL:(id)a0 enumerator:(id /* block */)a1;
- (id)loadBundlesFromDirectoryURL:(id)a0 enumerator:(id /* block */)a1;
- (id)init;
- (id)bundlesFromDirectoryURL:(id)a0;
- (void).cxx_destruct;

@end
