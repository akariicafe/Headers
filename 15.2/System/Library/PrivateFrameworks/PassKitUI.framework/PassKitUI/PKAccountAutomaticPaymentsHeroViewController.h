@class NSString, PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsHeroViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, UITextViewDelegate> {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)_continueButton;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithController:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)_continuePressed;

@end
