@class SBOrientationTransformWrapperView;
@protocol SBSwitcherViewControllerDelegate;

@interface SBSwitcherViewController : UIViewController {
    SBOrientationTransformWrapperView *_contentWrapperView;
}

@property (weak, nonatomic) id<SBSwitcherViewControllerDelegate> delegate;
@property (nonatomic) long long contentOrientation;

- (void)addContentView:(id)a0;
- (BOOL)shouldAutorotate;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
