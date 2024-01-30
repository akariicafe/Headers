@interface _SBTodaySpotlightViewController : SBSpotlightMultiplexingViewController

@property (nonatomic) long long location;

- (unsigned long long)remoteSearchViewPresentationSource;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)level;

@end
