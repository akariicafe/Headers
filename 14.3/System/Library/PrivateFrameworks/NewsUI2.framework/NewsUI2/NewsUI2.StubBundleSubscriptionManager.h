@interface NewsUI2.StubBundleSubscriptionManager : _TtCs12_SwiftObject <FCBundleSubscriptionManagerType>

@property (nonatomic, readonly) void /* unknown type, empty encoding */ cachedSubscription;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ bundleSubscription;
@property (nonatomic, retain) void /* unknown type, empty encoding */ entitlementsOverrideProvider;

- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)silentExpireBundleSubscription;
- (void)clearBundleSubscription;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)a0;
- (void)renewalNoticeShownWithPurchaseID:(id)a0;
- (id)bundleSubscriptionLookupEntry;

@end
