@interface SBSpotlightTransientOverlaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) unsigned long long presentationSource;

- (unsigned long long)level;
- (unsigned long long)remoteSearchViewPresentationSource;
- (BOOL)_canShowWhileLocked;

@end
