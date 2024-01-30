@class NSString, UILabel, UIView;
@protocol _SKUIStatusBarAlertViewControllerDelegate;

@interface _SKUIStatusBarAlertViewController : UIViewController {
    UILabel *_label;
}

@property (readonly, nonatomic) UIView *statusBarView;
@property (nonatomic) long long style;
@property (nonatomic, getter=isOnScreen) BOOL onScreen;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (weak, nonatomic) id<_SKUIStatusBarAlertViewControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long defaultInterfaceOrientations;

- (void)updateLabelFrame;
- (void).cxx_destruct;
- (void)handleLabelTap:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)endAllAnimations;

@end
