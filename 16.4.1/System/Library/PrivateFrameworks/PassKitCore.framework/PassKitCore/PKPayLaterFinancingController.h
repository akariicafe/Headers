@class NSDictionary, PKAccountService, PKPayLaterPaymentSource, PKCurrencyAmount, NSError, NSString, PKPaymentPass, PKPaymentService, NSArray, PKPayLaterFinancingControllerConfiguration, PKPeerPaymentService, PKPayLaterDynamicContent, PKPayLaterAvailableFundingSourcesFilter, NSObject, PKPeerPaymentAccount, PKPayLaterFinancingControllerRequest, PKAccount, PKPayLaterFinancingPlansFetcher, PKPaymentWebService, NSMutableOrderedSet, PKPassLibrary, PKPayLaterProductAssessmentCollection, NSHashTable;
@protocol OS_dispatch_queue;

@interface PKPayLaterFinancingController : NSObject <PKAccountServiceObserver> {
    PKPaymentService *_paymentService;
    PKPeerPaymentService *_peerPaymentService;
    BOOL _fetchedPayLaterAccount;
    PKCurrencyAmount *_dueNext30Days;
    NSMutableOrderedSet *_queuedRequests;
    PKPayLaterFinancingControllerRequest *_currentRequest;
    NSString *_defaultPassUniqueIdentifier;
    NSDictionary *_bankFundingSources;
    NSArray *_lastUsedFundingSources;
    PKPayLaterAvailableFundingSourcesFilter *_availableFundingSourcesFilter;
    NSString *_sessionIdentifier;
    PKPayLaterFinancingPlansFetcher *_plansFetcher;
    BOOL _didBeginAnalyticsReporter;
    BOOL _hasEndedSignPost;
    PKPayLaterFinancingControllerRequest *_pendingCancellationRequest;
    NSObject<OS_dispatch_queue> *_replyQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockObservers;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) PKPayLaterFinancingControllerConfiguration *configuration;
@property (readonly, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection;
@property (readonly, nonatomic) PKPayLaterDynamicContent *dynamicContent;
@property (readonly, nonatomic) PKAccount *payLaterAccount;
@property (retain, nonatomic) PKPaymentPass *payLaterPass;
@property (readonly, nonatomic) PKAccountService *accountService;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKPaymentWebService *paymentWebService;
@property (readonly, nonatomic) PKPassLibrary *passLibrary;
@property (retain, nonatomic) PKPayLaterPaymentSource *selectedFundingSource;
@property (readonly, nonatomic) PKCurrencyAmount *transactionCurrencyAmount;
@property (nonatomic) BOOL autoPaymentOn;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (readonly, nonatomic) unsigned long long loadingState;
@property (readonly, copy, nonatomic) NSError *loadingError;
@property (readonly, nonatomic) BOOL canShowPayLaterTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountRemoved:(id)a0;
- (void)accountAdded:(id)a0;
- (void)accountChanged:(id)a0;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)unregisterObserver:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_payLaterAccountWithCompletion:(id /* block */)a0;
- (void)_reportEventSignpostIfNecessary;
- (id)dynamicContentSectionsForPageType:(unsigned long long)a0 productType:(unsigned long long)a1 optionIdentifier:(id)a2;
- (id)dynamicContentPageItemForPageType:(unsigned long long)a0 productType:(unsigned long long)a1 optionIdentifier:(id)a2;
- (void)_accessObserversWithHandler:(id /* block */)a0;
- (void)_addFinancingOptionRequest:(id)a0;
- (void)_executeNextRequestIfPossible;
- (void)_informObserversAssessmentCollectionChanged;
- (void)_informObserversFinancingOptionCancelled:(id)a0;
- (void)_reportEndSignpostIfNecessary;
- (void)_updateLoadingState:(unsigned long long)a0;
- (BOOL)_updateStateWithResponse:(id)a0;
- (id)availableFundingSourcesForFinancingOption:(id)a0;
- (id)dynamicContentPageForPageType:(unsigned long long)a0 productType:(unsigned long long)a1 optionIdentifier:(id)a2;
- (void)fetchPayLaterDynamicContentForType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithAccountService:(id)a0 paymentService:(id)a1 peerPaymentService:(id)a2 paymentWebService:(id)a3 passLibrary:(id)a4 payLaterAccount:(id)a5 configuration:(id)a6;
- (void)refreshAvailableFundingSources;
- (void)stateMachineUpdatedAuthenticationState:(unsigned long long)a0 selectedOptionIdentifier:(id)a1 error:(id)a2 cancelReason:(long long)a3;
- (void)updateFinancingOptionsWithCompletion:(id /* block */)a0;

@end
