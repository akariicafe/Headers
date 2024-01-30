@class NSDictionary, NSLock;

@interface RemovableSoftwareLookupTable : NSObject {
    NSDictionary *_bundleDictionary;
    NSLock *_lock;
}

@property (readonly, copy) NSDictionary *bundleDictionary;

+ (BOOL)isRestrictedAppBundleIdentifier:(id)a0;
+ (id)_urlForBundleIdentifier:(id)a0;
+ (id)_fallbackItemIdentifier:(id)a0;
+ (id)urlForBundleIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_invalidateLookupCache:(id)a0;
- (void)_populateBundleDictionary;
- (id)_identifierForBundleIdentifier:(id)a0;
- (id)itemIdentifierForBundleIdentifer:(id)a0;

@end
