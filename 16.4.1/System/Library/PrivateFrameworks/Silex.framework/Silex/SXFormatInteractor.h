@class NSString;
@protocol SXLayoutOptionsFactory, SXSubscriptionStatusProviding, SXNewsletterSubscriptionStatusProviding, SXPresentationEnvironment, SXOfferUpsellScenarioProviding, SXFormatInteractorDelegate, SXSubscriptionActivationEligibilityProviding, SXDebugLayoutOptionsProviding, SXLayoutCoordinator, SXPresentationAttributesProvider;

@interface SXFormatInteractor : NSObject <SXLayoutCoordinatorDelegate, SXPresentationAttributesObserver, SXSubscriptionStatusObserving, SXDebugLayoutOptionsObserving, SXNewsletterSubscriptionStatusObserving, SXOfferUpsellScenarioObserving, SXSubscriptionActivationEligibilityObserving, SXFormatInteractor>

@property (readonly, nonatomic) id<SXLayoutCoordinator> layoutCoordinator;
@property (readonly, nonatomic) id<SXLayoutOptionsFactory> layoutOptionsFactory;
@property (readonly, nonatomic) id<SXPresentationAttributesProvider> presentationAttributesProvider;
@property (readonly, nonatomic) id<SXSubscriptionStatusProviding> subscriptionStatusProvider;
@property (weak, nonatomic) id<SXPresentationEnvironment> presentationEnvironment;
@property (readonly, nonatomic) id<SXDebugLayoutOptionsProviding> debugLayoutOptionsProvider;
@property (readonly, nonatomic) id<SXNewsletterSubscriptionStatusProviding> newsletterSubscriptionStatusProvider;
@property (readonly, nonatomic) id<SXOfferUpsellScenarioProviding> offerUpsellScenarioProvider;
@property (readonly, nonatomic) id<SXSubscriptionActivationEligibilityProviding> subscriptionActivationEligibilityProvider;
@property (nonatomic) BOOL requestedContentHiding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXFormatInteractorDelegate> delegate;

- (void).cxx_destruct;
- (void)bundleSubscriptionStatusDidChangeFromStatus:(long long)a0;
- (void)channelSubscriptionStatusDidChangeFromStatus:(long long)a0;
- (void)debugLayoutOptionsDidChange:(id)a0;
- (void)newsletterSubscriptionStatusDidChangeFromStatus:(unsigned long long)a0;
- (void)offerUpsellScenarioDidChangeFromScenario:(long long)a0;
- (void)subscriptionActivationEligibilityDidChangeFromEligibility:(long long)a0 to:(long long)a1;
- (id)initWithLayoutCoordinator:(id)a0 layoutOptionsFactory:(id)a1 presentationAttributesProvider:(id)a2 subscriptionStatusProvider:(id)a3 debugLayoutOptionsProvider:(id)a4 newsletterSubscriptionStatusProvider:(id)a5 offerUpsellScenarioProvider:(id)a6 subscriptionActivationEligibilityProvider:(id)a7;
- (void)layoutCoordinator:(id)a0 cancelledLayoutWithOptions:(id)a1;
- (void)layoutCoordinator:(id)a0 didIntegrateBlueprint:(id)a1;
- (void)layoutCoordinator:(id)a0 willIntegrateBlueprint:(id)a1;
- (void)layoutCoordinator:(id)a0 willLayoutWithParameters:(id)a1;
- (void)presentationAttributesDidChangeFrom:(id)a0 toAttributes:(id)a1;
- (void)updateWithPresentationEnvironment:(id)a0;

@end
