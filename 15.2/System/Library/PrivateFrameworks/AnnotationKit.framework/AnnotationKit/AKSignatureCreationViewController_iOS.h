@class AKController, AKSignatureBaselineView, UINavigationBar, NSString, UIButton, AKInkSignatureView, UIResponder, UILabel, AKSmoothPathView;
@protocol AKSignatureCreationControllerDelegate;

@interface AKSignatureCreationViewController_iOS : UIViewController <UINavigationBarDelegate>

@property (retain, nonatomic) UINavigationBar *navBar;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *downArrowButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) AKSmoothPathView *pathView;
@property (retain, nonatomic) AKInkSignatureView *signatureView;
@property (retain, nonatomic) AKSignatureBaselineView *baselineView;
@property (retain, nonatomic) UILabel *label;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) UIResponder *responderToRestore;
@property long long descriptionTag;
@property (retain, nonatomic) NSString *customDescription;
@property (weak) id<AKSignatureCreationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prefersStatusBarHidden;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (long long)positionForBar:(id)a0;
- (void)_done:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)_cancel:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)_clear:(id)a0;
- (id)initWithController:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_showSignatureDescriptionSelectionAlert;
- (void)_notifyDidDismiss;
- (void)_updateSignatureDescriptionWithStringValue:(id)a0;
- (void)showEditCustomDescriptionAlert;
- (void)_removeSignatureDescription;
- (void)_validateButtons;

@end
