@class SURedeemCodeTextField, NSString, UIActivityIndicatorView, SUCodeRedeemerController, UIView, UIBarButtonItem;

@interface SURedeemCameraViewController : UIViewController <SUCodeRedeemerControllerDelegate, UITextFieldDelegate>

@property (retain, nonatomic) SUCodeRedeemerController *cameraController;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) long long state;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIBarButtonItem *redeemBarButton;
@property (retain, nonatomic) SURedeemCodeTextField *codeTextField;
@property (retain, nonatomic) UIBarButtonItem *toggleCameraBarButton;
@property (nonatomic) BOOL ignoreDefaultKeyboardNotifications;
@property (copy, nonatomic) id /* block */ codeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cameraSupported;

- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)_updateState;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)_setup;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setupNotifications;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)_cancelButtonAction;
- (void)_setupNavigationItem;
- (void)performAction:(long long)a0 withObject:(id)a1;
- (void)_recognitionError;
- (void)_startActivityIndicator;
- (void)codeRedeemerControllerDidCancel;
- (void)_detectedCode:(id)a0;
- (void)_dismissKeyboard;
- (void)_hideOverlay;
- (void)_layoutCodeTextField;
- (void)_layoutCodeTextFieldWithNotification:(id)a0;
- (void)_overlayTapAction;
- (void)_pauseCamera;
- (void)_presentCameraErrorAlert;
- (void)_recognitionSuccess;
- (void)_redeemButtonAction;
- (void)_resumeCamera;
- (void)_setBackButtonTitle:(id)a0;
- (void)_setupActivityIndicator;
- (void)_setupCameraController;
- (void)_setupCodeTextField;
- (void)_setupOverlayView;
- (void)_showOverlay;
- (void)_startCameraController;
- (void)_stopAcitivityIndicator;
- (void)_stopCameraController;
- (void)_toggleCameraButtonAction;
- (void)_updateNavigationItemAnimated;
- (void)codeRedeemerControllerDidEndWithCode:(id)a0 error:(id)a1;

@end
