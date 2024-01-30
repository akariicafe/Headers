@class PKOneTimeCodeView, NSString, PKApplyVerificationPage, UIBarButtonItem;

@interface PKApplyVerificationSMSOTPViewController : PKApplyExplanationViewController <PKOneTimeCodeViewDelegate> {
    PKApplyVerificationPage *_verificationPage;
    PKOneTimeCodeView *_otpView;
    UIBarButtonItem *_activityButton;
    UIBarButtonItem *_nextButton;
    BOOL _isBodyButtonSkipToDocUpload;
    BOOL _showingSpinner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)analyticsPageTag;
- (unsigned long long)_smsOTPViewEntryErrorFromError:(id)a0;
- (void)_requestNewCode;
- (void)_cancelApplication;
- (void)_nextButtonPressed;
- (BOOL)_shouldDisplayErrorForEntryError:(unsigned long long)a0;
- (void)_submitCode:(id)a0 skippedVerification:(BOOL)a1;
- (void)_terminateFlow;
- (void)_updateViewWithEntryError:(unsigned long long)a0;
- (void)_withdrawApplication;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 verificationPage:(id)a3;
- (void)oneTimeCodeView:(id)a0 didEnterCode:(id)a1;
- (void)showNavigationBarSpinner:(BOOL)a0;

@end
