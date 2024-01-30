@class NSDictionary, NSSet;

@interface INBundleAccessGrant : NSObject {
    long long _acquireCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSDictionary *securityScopedURLs;
@property (readonly, nonatomic) NSSet *bundleIdentifiers;

- (void)acquire;
- (void)relinquish;
- (id)initWithSecurityScopedURLs:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
