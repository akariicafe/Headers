@class PKPinCodeField, NSString, PKExplanationView, PKSubcredentialPairingFlowControllerContext, UILabel, UIBarButtonItem;
@protocol PKSubcredentialPairingFlowControllerProtocol;

@interface PKSubcredentialPairingPinCodeViewController : UIViewController <PKPinCodeFieldDelegate, PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation> {
    PKExplanationView *explanationView;
    PKPinCodeField *_pinCodeView;
    UILabel *_helpLabel;
    struct CGSize { double width; double height; } _keyboardSize;
    UIBarButtonItem *_nextButton;
    BOOL _isAdvancing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext;
@property (readonly, nonatomic) id<PKSubcredentialPairingFlowControllerProtocol> flowController;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

- (void)cancelButtonPressed;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)explanationViewDidUpdateLayout:(id)a0;
- (id)initWithFlowController:(id)a0 context:(id)a1;
- (id)localizedIssuerName;
- (void)nextButtonPressed;
- (void)pinCodeTextFieldWasUpdated:(id)a0 isComplete:(BOOL)a1;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)resetPinCode;

@end
