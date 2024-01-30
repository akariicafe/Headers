@class NSURL, STBlockingViewController;
@protocol _SFDigitalHealthViewControllerDelegate;

@interface _SFDigitalHealthViewController : UIViewController {
    NSURL *_url;
    STBlockingViewController *_blockingViewController;
}

@property (weak, nonatomic) id<_SFDigitalHealthViewControllerDelegate> digitalHealthViewControllerDelegate;
@property (nonatomic) double additionalVerticalSafeAreaMargin;

- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_blockingViewDidHide:(id)a0;
- (void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(long long)a0;
- (id)showBlockingViewControllerForURL:(id)a0 withPolicy:(long long)a1 animated:(BOOL)a2;
- (void)hideBlockingViewControllerWithCompletionHandler:(id /* block */)a0;

@end
