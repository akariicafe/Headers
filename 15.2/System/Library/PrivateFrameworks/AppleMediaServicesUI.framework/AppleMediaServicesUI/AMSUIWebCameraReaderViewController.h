@class AMSUIWebNavigationBarModel, UIView, AMSUIWebCameraReaderInfoView, AMSUIWebAppearance, AMSUIWebCameraTextField, NSString, NSDictionary, CRCameraReader, AMSUIWebClientContext, AMSUIWebCameraReaderPageModel;

@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <CRCameraReaderDelegate, CRCodeRedeemerControllerDelegate, UITextFieldDelegate, AMSUIWebPagePresenter>

@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (retain, nonatomic) CRCameraReader *cameraController;
@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) AMSUIWebCameraReaderInfoView *infoView;
@property (retain, nonatomic) AMSUIWebCameraReaderPageModel *model;
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBarModel;
@property (retain, nonatomic) NSDictionary *output;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardRect;
@property (retain, nonatomic) UIView *overlay;
@property (retain, nonatomic) AMSUIWebCameraTextField *textField;
@property (retain, nonatomic) UIView *textFieldSafeAreaBackdrop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)cameraSupported;

- (void)keyboardDidHide:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithContext:(id)a0;
- (void)loadView;
- (void)textFieldDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillHide:(id)a0;
- (void)_hideKeyboard;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)keyboardWillShow:(id)a0;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)_applyAppearance;
- (void)_setupPage;
- (void)_layoutPage;
- (void)_setupPageForCreditCard;
- (void)_setupPageForGiftCard;
- (void)_setupPageForIDCard;
- (void)_setupInfoView;
- (void)_setupCameraToggle;
- (void)_setupTextEntry;
- (void)_setupNavigationModel;
- (void)_commitNavigationBarModel;
- (void)_overlayTapGestureAction:(id)a0;
- (id)_makeTextFieldWithPlaceholderColor:(id)a0;
- (void)_layoutFullScreen;
- (void)_layoutHalfScreen;
- (void)_layoutTextField;
- (void)_setCameraToggleButton;
- (void)_redeemAction:(id)a0;
- (id)_outputForGiftCardReaderCode:(id)a0;
- (void)_handleCameraOutput:(id)a0 error:(id)a1;
- (id)_outputForCreditCardReaderObjects:(id)a0;
- (id)_outputForIDCardReaderObjects:(id)a0;
- (id)_outputForGiftCardReaderObjects:(id)a0;
- (void)_setRedeemButton;
- (void)codeRedeemerControllerDidCancel:(id)a0;
- (void)codeRedeemerController:(id)a0 didEndWithInfo:(id)a1;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
