@class AKController, AKSignatureBaselineView, UINavigationBar, NSString, UIResponder, AKInkSignatureView, UILabel, AKSmoothPathView;
@protocol AKSignatureCreationControllerDelegate;

@interface AKSignatureCreationViewController_iOS : UIViewController <UINavigationBarDelegate>

@property (retain, nonatomic) UINavigationBar *navBar;
@property (retain, nonatomic) AKSmoothPathView *pathView;
@property (retain, nonatomic) AKInkSignatureView *signatureView;
@property (retain, nonatomic) AKSignatureBaselineView *baselineView;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) UIResponder *responderToRestore;
@property (weak) id<AKSignatureCreationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_cancel:(id)a0;
- (void)loadView;
- (long long)positionForBar:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithController:(id)a0;
- (void)_clear:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_notifyDidDismiss;
- (void)_validateButtons;

@end
