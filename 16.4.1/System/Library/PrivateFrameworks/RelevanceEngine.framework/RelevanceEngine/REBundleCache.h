@class REConcurrentDictionary;

@interface REBundleCache : NSObject {
    REConcurrentDictionary *_cachedBundles;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)bundleAtPath:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
