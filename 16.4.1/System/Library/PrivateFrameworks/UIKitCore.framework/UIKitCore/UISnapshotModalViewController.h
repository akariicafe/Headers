@class UINavigationController, UIViewController;

@interface UISnapshotModalViewController : UIViewController {
    long long _interfaceOrientation;
    UINavigationController *_parentController;
}

@property (retain, nonatomic) UIViewController *disappearingViewController;

- (id)initWithInterfaceOrientation:(long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_isSupportedInterfaceOrientation:(long long)a0;

@end
