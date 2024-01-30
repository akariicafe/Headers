@class NSString, SBDashBoardSpotlightViewController;
@protocol SBFDashBoardModalPresenterProtocol, SBFLegibilitySettingsProvider;

@interface SBDashBoardSpotlightPresenter : NSObject <SPUIRemoteSearchViewDelegate, SBFLegibilitySettingsProviderDelegate, SBDashBoardSpotlightViewControllerDelegate, CSSpotlightPresenting> {
    id<SBFDashBoardModalPresenterProtocol> _presenterViewController;
    SBDashBoardSpotlightViewController *_spotlightViewController;
    id<SBFLegibilitySettingsProvider> _spotlightLegibilitySettingsProvider;
    unsigned long long _spotlightMultiplexingLevel;
    unsigned long long _remoteSearchViewPresentationSource;
    long long _homeGestureParticipantIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)providerLegibilitySettingsChanged:(id)a0;
- (void).cxx_destruct;
- (void)dismissSearchView;
- (void)dismissSpotlightWithCompletion:(id /* block */)a0;
- (void)launchSpotlightForSourceViewController:(id)a0 interactive:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)spotlightMultiplexingLevelForSpotlightViewController:(id)a0;
- (unsigned long long)remoteSearchViewPresentationSourceForSpotlightViewController:(id)a0;
- (long long)homeGestureParticipantIdentifierForSpotlightViewController:(id)a0;
- (id)initWithPresenterViewController:(id)a0 spotlightMultiplexingLevel:(unsigned long long)a1 remoteSearchViewPresentationSource:(unsigned long long)a2 homeGestureParticipantIdentifier:(long long)a3;
- (id)createSpotlightLegiblitySettingsProvider;
- (void)dismissSpotlight;
- (void)launchSpotlightForSourceViewController:(id)a0 interactive:(BOOL)a1;

@end
