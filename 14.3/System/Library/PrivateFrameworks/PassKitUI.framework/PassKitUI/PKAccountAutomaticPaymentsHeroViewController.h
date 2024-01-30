@class NSString, PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsHeroViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, UITextViewDelegate> {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)_continueButton;
- (id)initWithController:(id)a0;
- (void)_continuePressed;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
