@class NSString, PKEducationPhone, PKWatchDeviceImageOverlayView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKBarcodePaymentOnboardingViewController : PKExplanationViewController <UITextViewDelegate, PKExplanationViewControllerDelegate> {
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    NSString *_issuerName;
    PKEducationPhone *_educationPhone;
    PKWatchDeviceImageOverlayView *_watchView;
}

@property (copy, nonatomic) id /* block */ continueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)_imageForWatchView;
- (void)_terminateSetupFlow;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewControllerDidSelectDone:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithIssuerName:(id)a0 context:(long long)a1 setupDelegate:(id)a2;

@end
