@class PKPaymentTransactionIconGenerator, UITableView, PKISO18013DataReleaseRequest, NSObject, UIViewController, PKAuthenticator, UIView, PKTransactionReleasedData, NSString, PKDataReleaseEntityResolver, PKIdleTimerAssertion, PKPaymentAuthorizationFooterView, NSArray, PKDataReleaseHeader, PKMerchant, UIImage;
@protocol OS_dispatch_source, PKDataReleaseContentViewControllerDelegate;

@interface PKDataReleaseContentViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, PKDataReleaseHeaderDelegate, PKPaymentAuthorizationFooterViewDelegate, PKAuthenticatorDelegate> {
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
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithRequest:(id)a0 delegate:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableViewDidFinishReload:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)setIdleTimerDisabled:(BOOL)a0;
- (void)_updateSeparators;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)authenticator:(id)a0 didTransitionToEvaluationStateWithEvent:(struct { long long x0; long long x1; })a1;
- (void)presentPasscodeViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)dismissPasscodeViewController;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)a0;
- (BOOL)shouldShowPhysicalButton;
- (void)dataReleaseCompletedWithError:(id)a0;
- (void)dataReleaseHeaderDidTapDismiss;
- (void)_updatePhysicalButtonState;
- (id)_compactNavigationController;
- (void)_reloadMerchantHeader;
- (void)_startEvaluation;
- (void)presentPasscodeToExitLockout;
- (void)_updateMerchantHeaderView:(id)a0 animated:(BOOL)a1;

@end
