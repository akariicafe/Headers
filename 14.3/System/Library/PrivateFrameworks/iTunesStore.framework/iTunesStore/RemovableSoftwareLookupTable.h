@class NSDictionary, NSLock;

@interface RemovableSoftwareLookupTable : NSObject {
    NSDictionary *_bundleDictionary;
    NSLock *_lock;
}

@property (readonly, copy) NSDictionary *bundleDictionary;

+ (id)urlForBundleIdentifier:(id)a0;
+ (BOOL)isRestrictedAppBundleIdentifier:(id)a0;
+ (id)_urlForBundleIdentifier:(id)a0;
+ (id)_fallbackItemIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidateLookupCache:(id)a0;
- (void)_populateBundleDictionary;
- (id)_identifierForBundleIdentifier:(id)a0;
- (id)itemIdentifierForBundleIdentifer:(id)a0;

@end
