@class NSDictionary, NSLock;

@interface RemovableSoftwareLookupTable : NSObject {
    NSDictionary *_bundleDictionary;
    NSLock *_lock;
}

@property (readonly, copy) NSDictionary *bundleDictionary;

+ (BOOL)isRestrictedAppBundleIdentifier:(id)a0;
+ (id)urlForBundleIdentifier:(id)a0;
+ (id)_fallbackItemIdentifier:(id)a0;
+ (id)_urlForBundleIdentifier:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_identifierForBundleIdentifier:(id)a0;
- (void)_invalidateLookupCache:(id)a0;
- (void)_populateBundleDictionary;
- (id)itemIdentifierForBundleIdentifer:(id)a0;

@end
