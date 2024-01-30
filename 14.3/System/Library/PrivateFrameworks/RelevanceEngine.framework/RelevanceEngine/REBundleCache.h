@class REConcurrentDictionary;

@interface REBundleCache : NSObject {
    REConcurrentDictionary *_cachedBundles;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)bundleAtPath:(id)a0;

@end
