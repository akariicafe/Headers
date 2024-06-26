@class NSOrderedSet, NSMutableArray, NSString, PKPassGroupView, PKTransactionSource, PKSpendingSummaryFetcher, PKPaymentPass, PKDashboardTransactionFetcher, PKPaymentVerificationController, NSArray, NSDateFormatter, PKPaymentDefaultDataProvider, PKPeerPaymentWebService, PKTransitBalanceModel, PKPassPresentationContext, NSObject, PKPhysicalCardController, PKSpendingSummary, PKPeerPaymentAccount, NSError, NSMutableSet, NSMutableDictionary, PKCreditAccountStatement, PKAccount, PKAccountServiceAccountResolutionController, PKGroup, PKAMPEnrollmentManager, PKLinkedApplication, PKPeerPaymentContactResolver, PKSecureElement, NSDate, PKPeerPaymentAccountResolutionController;
@protocol OS_dispatch_source, PKDashboardDataSourceDelegate;

@interface PKDashboardPaymentPassDataSource : NSObject <PKSecureElementObserver, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, PKForegroundActiveArbiterObserver, PKSpendingSummaryFetcherObserver, PKAccountServiceAccountResolutionControllerDelegate, PKDiscoveryObserver, PKPaymentSetupViewControllerDelegate, PKAccountServiceObserver, PKLinkedApplicationObserver, PKDashboardPassDataSource, PKDashboardTransactionFetcherDelegate> {
    PKPassGroupView *_groupView;
    PKGroup *_group;
    id<PKDashboardDataSourceDelegate> _delegate;
    PKPaymentPass *_pass;
    PKTransactionSource *_transactionSource;
    BOOL _isTransitPass;
    BOOL _isAccessPass;
    NSArray *_transactions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockTransactions;
    NSArray *_previousTransactions;
    BOOL _transactionsPerPeriodLoaded;
    NSArray *_transactionGroups;
    BOOL _forceTransactionsReload;
    BOOL _forceTransactionsUpdate;
    NSObject<OS_dispatch_source> *_timerTransactions;
    NSDate *_lastTransactionReload;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccountResolutionController *_peerPaymentAccountResolutionController;
    BOOL _performingPeerPaymentResolution;
    BOOL _performingAMPEnrollment;
    PKTransitBalanceModel *_transitBalanceModel;
    BOOL _canDisplayProducts;
    BOOL _productsLoaded;
    BOOL _canDisplayBalance;
    BOOL _balanceLoaded;
    BOOL _balanceSectionNeedsUpdate;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentVerificationController *_paymentVerificationController;
    BOOL _performingVerification;
    PKSecureElement *_secureElement;
    BOOL _isInRestrictedMode;
    int _sessionActiveToken;
    BOOL _sessionActive;
    NSOrderedSet *_messages;
    BOOL _messagesLoaded;
    NSDateFormatter *_formatterYear;
    BOOL _allContentIsLoaded;
    struct { BOOL foreground; BOOL foregroundActive; } _activeState;
    NSMutableArray *_executionBlocksContentIsLoaded;
    PKPassPresentationContext *_context;
    BOOL _isCreditPass;
    PKPhysicalCardController *_physicalCardController;
    PKCreditAccountStatement *_currentStatement;
    NSArray *_upcomingScheduledPayments;
    BOOL _scheduledPaymentsLoaded;
    NSDate *_startCurrentPeriod;
    PKSpendingSummary *_currentSummary;
    BOOL _pendingSummaryUpdate;
    BOOL _hasMoreSummaryUpdates;
    NSError *_accountUpdateError;
    BOOL _performingAccountUpdate;
    PKAccountServiceAccountResolutionController *_accountResolutionController;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockIcons;
    NSMutableSet *_iconDownloads;
    NSMutableSet *_iconFailedDownloads;
    NSMutableDictionary *_icons;
    BOOL _hasSuccessfulIconDownloads;
    NSString *_scaleKey;
    BOOL _showAMPEnrollmentMessage;
    PKAMPEnrollmentManager *_AMPEnrollmentManager;
    NSMutableDictionary *_messageImagesCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockImages;
    NSMutableDictionary *_sourcesPerFundingSourceIdentifier;
    PKLinkedApplication *_linkedApplication;
}

@property (retain, nonatomic) NSArray *weeks;
@property (retain, nonatomic) NSArray *months;
@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKDashboardTransactionFetcher *transactionFetcher;
@property (readonly, nonatomic) PKSpendingSummaryFetcher *summaryFetcher;
@property (readonly, nonatomic) NSArray *years;
@property (readonly, nonatomic) NSArray *currentMonthTransactions;
@property (readonly, nonatomic) NSArray *upcomingScheduledPayments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (void)invalidatedSummariesAvailable;
- (void)invalidatedSpendingSummaryOfType:(unsigned long long)a0 startingWithDate:(id)a1;
- (void)invalidatedSpendingSummariesOfType:(unsigned long long)a0;
- (void)executeAfterContentIsLoaded:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithGroupView:(id)a0 context:(id)a1;
- (void)dealloc;
- (void)_peerPaymentResolutionTappedWithResolution:(unsigned long long)a0;
- (void)_verificationButtonTapped;
- (void)_lostModeButtonTapped;
- (void)_deleteButtonTapped;
- (BOOL)_shouldPaymentMessageAppear:(id)a0;
- (void)_presentAccountResolution:(unsigned long long)a0 forBusinessChatContext:(id)a1;
- (void)_presentPassDetailsWithAction:(unsigned long long)a0;
- (void)_presentPassWithPassUniqueIdentifier:(id)a0;
- (void)_presentPhysicalCardActivation;
- (id)_downloadMessageIconURLAndReloadIfNecessary:(id)a0;
- (void)_addToAMPButtonTappedForPass:(id)a0;
- (void)reloadTransitSection;
- (void)_updateTransitBalanceProperties:(id)a0 dynamicBalances:(id)a1;
- (void)transactionsChanged:(id)a0;
- (id)titleForSection:(unsigned long long)a0;
- (void)discoveryServiceDidReceiveUpdatedDiscoveryEngagementMessages:(id)a0;
- (void)presentVerificationViewController:(id)a0 animated:(BOOL)a1;
- (void)didChangeVerificationPresentation;
- (void)accountServiceAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)summaryTypeDidChange;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (void)_localeDidChangeNotification:(id)a0;
- (id)_contactResolver;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveMessage:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didEnableMessageService:(BOOL)a1;
- (id)itemAtIndexPath:(id)a0;
- (void)_messagesForAccountStatusWithCompletion:(id /* block */)a0;
- (id)_messageForPaymentApplicationStatus;
- (id)_messageForSessionActive;
- (void)_messageFromPaymentServiceSuppressingPassStateChanges:(BOOL)a0 completion:(id /* block */)a1;
- (id)_messageForPhysicalCard;
- (id)_messagesForInstallmentPlans;
- (void)_messageForRewardsRedemptionWithCompletion:(id /* block */)a0;
- (void)_educationMessagesWithCompletion:(id /* block */)a0;
- (void)_messageForPaymentFailedWithCompletion:(id /* block */)a0;
- (void)_messageForEnableNotificationsWithCompletion:(id /* block */)a0;
- (void)_messageForPeerPaymentIdentityVerificationForRewardsWithCompletion:(id /* block */)a0;
- (id)_messageFromEngagementMessage:(id)a0;
- (void)linkedApplicationDidChangeState:(id)a0;
- (id)footerTextItemForSection:(unsigned long long)a0;
- (void)setDataSourceDelegate:(id)a0;
- (void)groupViewDidUpdatePassView:(id)a0;
- (void)reloadMessages;
- (BOOL)_passAvailableForAMPEnrollment;
- (void)_fetchAMPEnrollmentEligibility;
- (void)reloadAccount;
- (void)reloadAllContent;
- (void)_updateBalance;
- (void)secureElementDidEnterRestrictedMode:(id)a0;
- (void)_updateTransactionsTimer;
- (unsigned long long)transitItemForItemIndex:(long long)a0;
- (BOOL)transitItemIsEnabled:(unsigned long long)a0;
- (long long)numberOfTransitItemsEnabled;
- (void)reloadTransactions;
- (void)reloadTransactionGroups;
- (void)reloadScheduledPayments;
- (void)updateContentIsLoaded;
- (BOOL)_canDisplayBalance;
- (void)loadSummariesWithForceReload:(BOOL)a0;
- (BOOL)_canShowTransactions;
- (void)updateWithTransactions:(id)a0;
- (void)_updateWithTransactionGroups:(id)a0;
- (void)_messageForPeerPaymentFamilySharingWithCompletion:(id /* block */)a0;
- (id)_messageForPeerPaymentLockedAccountByAssociatedAccount;
- (void)_messageForPeerPaymentAssociatedAccountStateChangedForSecurityReasonsWithCompletion:(id /* block */)a0;
- (void)_messageForPeerPaymentAssociatedAccountLockedAccountWithCompletion:(id /* block */)a0;
- (void)_messageForPeerPaymentAssociatedAccountPendingWithCompletion:(id /* block */)a0;
- (id)_messageForAMPEnrollment;
- (id)_messageForPaymentInformationEventExtensionInstallation;
- (struct { BOOL x0; BOOL x1; unsigned long long x2; })_peerPaymentDashboardCondition;
- (id)_messageImageWithName:(id)a0 extension:(id)a1;
- (id)revokingAccessMessage;
- (void)_peerPaymentAccountChanged:(id)a0;
- (void)secureElementDidLeaveRestrictedMode:(id)a0;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)a0;

@end
