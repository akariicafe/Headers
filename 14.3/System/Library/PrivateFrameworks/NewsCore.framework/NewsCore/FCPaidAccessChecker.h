@protocol FCPurchaseProviderType, FCBundleSubscriptionProviderType, FCCoreConfigurationManager;

@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType>

@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (readonly, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (readonly, nonatomic) id<FCPurchaseProviderType> purchaseProvider;

- (BOOL)_canGetALaCarteSubscriptionToChannel:(id)a0;
- (BOOL)canGetBundleSubscriptionToChannel:(id)a0;
- (BOOL)_canGetBundleSubscriptionToChannel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPreparedForUse;
- (BOOL)canGetSubscriptionToChannel:(id)a0;
- (id)initWithPurchaseProvider:(id)a0 bundleSubscriptionProvider:(id)a1 configurationManager:(id)a2;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (BOOL)canGetAccessToItemPaid:(BOOL)a0 bundlePaid:(BOOL)a1 channel:(id)a2;

@end
