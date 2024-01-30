@interface SBSpotlightTransientOverlaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) unsigned long long presentationSource;

- (unsigned long long)remoteSearchViewPresentationSource;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)level;

@end
