@class PKPaymentTransactionIconGenerator, UITableView, PKISO18013DataReleaseRequest, NSObject, UIViewController, PKAuthenticator, UIView, PKTransactionReleasedData, NSString, PKDataReleaseEntityResolver, PKIdleTimerAssertion, LAContext, PKPaymentAuthorizationFooterView, NSArray, PKDataReleaseHeader, PKMerchant, UIImage;
@protocol OS_dispatch_source, PKDataReleaseContentViewControllerDelegate;

@interface PKDataReleaseContentViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PKDataReleaseHeaderDelegate, PKPaymentAuthorizationFooterViewDelegate, LAUIDelegate, PKAuthenticatorDelegate> {
    PKISO18013DataReleaseRequest *_request;
    id<PKDataReleaseContentViewControllerDelegate> _delegate;
    UITableView *_tableViewReleaseData;
    PKDataReleaseHeader *_header;
    PKPaymentAuthorizationFooterView *_footerView;
    BOOL _lastFailureWasUnboundBiometric;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    BOOL _isTemplateLayout;
    long long _layoutRecursionCounter;
    PKAuthenticator *_authenticator;
    UIViewController *_passcodeViewController;
    NSArray *_intentRetainElements;
    NSArray *_intentDoNotRetainElements;
    PKTransactionReleasedData *_dataToRelease;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    PKDataReleaseEntityResolver *_entityResolver;
    UIImage *_merchantIcon;
    PKMerchant *_merchant;
    BOOL _authenticating;
    BOOL _hasFailedBiometrics;
    BOOL _isInBioLockout;
    PKIdleTimerAssertion *_idleTimerAssertion;
    NSObject<OS_dispatch_source> *_idleTimer;
    BOOL _hasPlayedHaptics;
    LAContext *_localAuthenticationContext;
    struct __SecAccessControl { } *_accessControl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)_updatePreferredContentSize;
- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)tableViewDidFinishReload:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)setIdleTimerDisabled:(BOOL)a0;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)_compactNavigationController;
- (void)_configureFooterViewConfirmationTitle;
- (void)_finishedRemovingDoublePressCredentialWithError:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reloadMerchantHeader;
- (void)_startEvaluationWithExternalizedContext:(id)a0;
- (void)_startInitialEvaluation;
- (void)_updateMerchantHeaderView:(id)a0 animated:(BOOL)a1;
- (void)_updatePhysicalButtonState;
- (void)_updateSeparators;
- (void)authenticator:(id)a0 didTransitionToEvaluationStateWithEvent:(struct { long long x0; long long x1; })a1;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)a0;
- (void)dataReleaseCompletedWithError:(id)a0;
- (void)dataReleaseHeaderDidTapDismiss;
- (void)dismissPasscodeViewController;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)presentPasscodeToExitLockout;
- (void)presentPasscodeViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (BOOL)shouldShowPhysicalButton;

@end
