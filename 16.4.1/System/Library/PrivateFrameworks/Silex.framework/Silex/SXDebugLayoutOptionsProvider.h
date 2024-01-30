@class NSString, NSHashTable;

@interface SXDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding>

@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned long long viewingLocation;
@property (nonatomic) long long bundleSubscriptionStatus;
@property (nonatomic) long long channelSubscriptionStatus;
@property (nonatomic) unsigned long long newsletterSubscriptionStatus;
@property (nonatomic) long long offerUpsellScenario;
@property (nonatomic) long long subscriptionActivationEligibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObservers;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)overrideBundleSubscriptionStatus:(long long)a0;
- (long long)overrideChannelSubscriptionStatus:(long long)a0;
- (long long)overrideNewsletterSubscriptionStatus:(unsigned long long)a0;
- (long long)overrideOfferUpsellScenario:(long long)a0;
- (long long)overrideSubscriptionActivationEligibility:(long long)a0;
- (unsigned long long)overrideViewingLocation:(unsigned long long)a0;

@end
