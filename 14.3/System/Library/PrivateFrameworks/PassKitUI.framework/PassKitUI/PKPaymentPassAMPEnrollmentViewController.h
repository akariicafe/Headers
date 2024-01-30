@class PKPaymentPass, NSString, PKPaymentProvisioningController, RemoteUIController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentPassAMPEnrollmentViewController : PKExplanationViewController <RemoteUIControllerDelegate, UITextViewDelegate> {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentPass *_pass;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    RemoteUIController *_termsController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)shouldOfferAMPEnrollmentForPass:(id)a0 provisioningController:(id)a1 withCompletion:(id /* block */)a2;

- (void)_done;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)loadView;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)proceedToNextScreen;
- (void)_performAddToWatchFlowWithCompletionHandler:(id /* block */)a0;
- (void)_showAddToWatchOfferWithCompletionHandler:(id /* block */)a0;
- (id)initWithProvisioningController:(id)a0 paymentPass:(id)a1 context:(long long)a2 delegate:(id)a3;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (id)_createBodyImage;
- (void)_performAMPEnrollmentWithPass:(id)a0 asDefault:(BOOL)a1 completion:(id /* block */)a2;
- (void)_displayTermsWithCompletion:(id /* block */)a0;
- (void)_performTerms;

@end
