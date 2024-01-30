@class NSURL, STBlockingViewController;
@protocol SFScreenTimeOverlayViewControllerDelegate;

@interface SFScreenTimeOverlayViewController : UIViewController {
    NSURL *_url;
    STBlockingViewController *_blockingViewController;
}

@property (weak, nonatomic) id<SFScreenTimeOverlayViewControllerDelegate> delegate;
@property (nonatomic) double additionalVerticalSafeAreaMargin;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)_blockingViewDidHide:(id)a0;
- (void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(long long)a0;
- (void)hideBlockingViewControllerWithCompletionHandler:(id /* block */)a0;
- (id)showBlockingViewControllerForURL:(id)a0 withPolicy:(long long)a1 animated:(BOOL)a2;

@end
