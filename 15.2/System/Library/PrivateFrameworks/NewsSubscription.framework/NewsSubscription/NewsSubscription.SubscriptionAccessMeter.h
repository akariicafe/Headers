@interface NewsSubscription.SubscriptionAccessMeter : _TtCs12_SwiftObject <NPSubscriptionAccessMeterType> {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ purchaseProvider;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ offeredBundlePurchaseIDs;
    void /* unknown type, empty encoding */ aLaCarteSubscriptionMeteredCountMaxLimit;
    void /* unknown type, empty encoding */ bundleSubscriptionMeteredCountMaxLimit;
}

- (BOOL)canAccessArticleWithHeadline:(id)a0 articleAccess:(long long)a1;
- (void)incrementCountForHeadline:(id)a0;

@end
