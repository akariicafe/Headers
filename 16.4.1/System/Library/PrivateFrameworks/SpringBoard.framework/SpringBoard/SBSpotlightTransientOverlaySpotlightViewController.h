@interface SBSpotlightTransientOverlaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) unsigned long long presentationSource;

- (BOOL)_canShowWhileLocked;
- (unsigned long long)remoteSearchViewPresentationSource;
- (unsigned long long)level;

@end
