@protocol _SBDashBoardSpotlightViewControllerDelegate;

@interface _SBDashBoardSpotlightViewController : SBSpotlightMultiplexingViewController

@property (weak, nonatomic) id<_SBDashBoardSpotlightViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (unsigned long long)level;
- (unsigned long long)remoteSearchViewPresentationSource;
- (BOOL)_canShowWhileLocked;

@end
