@class NSString;
@protocol PDCApplicationIdentity, PDCApplicationRecord, PDUWelcomeViewControllerDelegate;

@interface PDUWelcomeViewController_iOS : OBWelcomeController <PDUDisclosureReviewViewControllerDelegate> {
    id<PDCApplicationIdentity> _applicationIdentity;
    id<PDCApplicationRecord> _applicationRecord;
}

@property (weak, nonatomic) id<PDUWelcomeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (void)cancelPressed;
- (void)learnMorePressed;
- (void)continuePressed;
- (id)_requestIconForApplication:(id)a0;
- (void)disclosureReviewViewControllerDidDismiss:(id)a0;
- (id)initWithApplicationIdentity:(id)a0;

@end
