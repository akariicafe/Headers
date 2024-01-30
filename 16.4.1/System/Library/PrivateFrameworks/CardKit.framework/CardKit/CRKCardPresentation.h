@class _CRKCardSectionViewLoader, NSString, CRProtocolRestrictedInvocationChain, CRKCardPresentationConfiguration, UIViewController;
@protocol CRKCardViewControlling, CRKIdentifiedProviding, CRKCardViewControllerDelegate, CRCard, CRKCardPresentationDelegate;

@interface CRKCardPresentation : NSObject <CRKCardSectionViewProviderDelegate, _CRKSendMessageCardFactoryDelegate, _CRKCardSectionViewLoaderDelegate, _CRKCardViewControllerTransitionAnimatorDelegate, CRKCardViewControllerDelegate, CRKCardPresenting> {
    _CRKCardSectionViewLoader *_cardSectionViewLoader;
    id<CRKIdentifiedProviding> _loadedCardViewControllerProvider;
    CRProtocolRestrictedInvocationChain *_cardViewControllerDelegateChain;
    id<CRKCardViewControllerDelegate> _externalCardViewControllerDelegate;
}

@property (nonatomic) BOOL debugModeEnabled;
@property (weak, nonatomic) id<CRKCardPresentationDelegate> delegate;
@property (readonly, nonatomic) UIViewController<CRKCardViewControlling> *cardViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) CRKCardPresentationConfiguration *configuration;
@property (readonly, nonatomic) id<CRCard> card;

+ (void)initialize;
+ (void)unregisterProvider:(id)a0;
+ (void)registerProvider:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_cardSectionViewControllerForCardSection:(id)a0;
- (void)cardViewController:(id)a0 requestCardSectionViewSourceForCard:(id)a1 reply:(id /* block */)a2;
- (void)setConfiguration:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_configureWithRequestedCard:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_establishParsecSessionIfNeeded:(id /* block */)a0;
- (void)_fullyConfigureWithRequestedCard:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_loadAndRegisterBundleProviders:(id /* block */)a0;
- (void)_updateViewConfigurationsDebugMode:(BOOL)a0;
- (double)boundingWidthForProvider:(id)a0;
- (BOOL)cardSectionDisplayRequiresUserConsentForProvider:(id)a0;
- (long long)cardSectionViewLoader:(id)a0 compareCardSectionViewProviderOne:(id)a1 providerTwo:(id)a2;
- (void)configureWithCard:(id)a0 completion:(id /* block */)a1;
- (void)configureWithCardRequest:(id)a0 completion:(id /* block */)a1;
- (void)configureWithContent:(id)a0 completion:(id /* block */)a1;
- (id)defaultFeedbackDelegateForProvider:(id)a0;
- (long long)semanticContentAttributeForCardFactory:(id)a0;
- (void)transitionAnimator:(id)a0 willTransitionFromCardViewController:(id)a1 toCardViewController:(id)a2 withAnimationCoordinator:(id)a3;

@end
