@class REConcurrentDictionary;

@interface REBundleCache : NSObject {
    REConcurrentDictionary *_cachedBundles;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)bundleAtPath:(id)a0;

@end
