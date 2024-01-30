@protocol _SBDashBoardSpotlightViewControllerDelegate;

@interface _SBDashBoardSpotlightViewController : SBSpotlightMultiplexingViewController

@property (weak, nonatomic) id<_SBDashBoardSpotlightViewControllerDelegate> delegate;

- (unsigned long long)remoteSearchViewPresentationSource;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)level;
- (void).cxx_destruct;

@end
