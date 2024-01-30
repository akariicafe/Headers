@class NSString, PKPassLibrary, NSData;
@protocol PKIssuerBindingViewControllerDelegate;

@interface PKIssuerBindingViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate> {
    NSString *_issuerName;
    NSString *_accountName;
    PKPassLibrary *_passLibrary;
    NSData *_issuerData;
}

@property (weak, nonatomic) id<PKIssuerBindingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_enableControls;
- (id)_alertViewControllerForError:(id)a0;
- (void)_confirmSecurityCapabilitiesWithCompletion:(id /* block */)a0;
- (void)_presentFailureWithError:(id)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithIssuerData:(id)a0 signature:(id)a1;

@end
