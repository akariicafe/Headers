@interface _SBTodaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) long long location;

- (unsigned long long)level;
- (unsigned long long)remoteSearchViewPresentationSource;
- (BOOL)_canShowWhileLocked;

@end
