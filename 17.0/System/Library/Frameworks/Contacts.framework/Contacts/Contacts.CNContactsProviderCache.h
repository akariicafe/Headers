@class NSArray, _TtC8Contacts23CNContactsProviderCache;

@interface Contacts.CNContactsProviderCache : NSObject {
    void /* unknown type, empty encoding */ appExtensionIdentityByBundleIdentifierCache;
    void /* unknown type, empty encoding */ appExtensionIdentityCache;
    void /* unknown type, empty encoding */ containerByBundleIdentifierCache;
    void /* unknown type, empty encoding */ queryTask;
    void /* unknown type, empty encoding */ lock;
}

@property (class, nonatomic, readonly) _TtC8Contacts23CNContactsProviderCache *sharedCache;

@property (nonatomic, readonly) NSArray *cachedBundleIdentifiers;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;

@end
