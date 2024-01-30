@class UINavigationController, UIViewController;

@interface UISnapshotModalViewController : UIViewController {
    long long _interfaceOrientation;
    UINavigationController *_parentController;
}

@property (retain, nonatomic) UIViewController *disappearingViewController;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_isSupportedInterfaceOrientation:(long long)a0;
- (id)initWithInterfaceOrientation:(long long)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
