@class NSString, PKPayLaterAvailableFundingSourcesFilter, PKAccountService, NSMutableDictionary, PKPaymentWebService, PKPeerPaymentAccount, PKPeerPaymentWebService, PKPaymentRequest, PKAccount, PKPassLibrary, PKPaymentAuthorizationCoordinator;

@interface PKPayLaterPaymentIntentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKAccountServiceObserver, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    id /* block */ _paymentAuthorizationCompletion;
    PKPassLibrary *_passLibrary;
    PKPaymentWebService *_paymentWebService;
    PKPeerPaymentWebService *_peerPaymentWebService;
    NSString *_defaultPassUniqueIdentifier;
    PKAccountService *_accountService;
    NSMutableDictionary *_cacheByIntentType;
    NSMutableDictionary *_requests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _didAuthorizePayment;
    PKPaymentRequest *_currentPaymentRequest;
    NSString *_presentationSceneIdentifier;
}

@property (readonly, nonatomic) PKAccount *payLaterAccount;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKPayLaterAvailableFundingSourcesFilter *availableFundingSourcesFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountChanged:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_executeNextRequest:(id)a0;
- (void)_peerPaymentAccountChanged;
- (void)_presentPaymentAuthorizationWithPaymentRequest:(id)a0 presentationSceneIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)availableFundingSourcesForPaymentIntentDetails:(id)a0 currencyAmount:(id)a1 planIdentifier:(id)a2 primaryPaymentSource:(id)a3;
- (id)initWithPayLaterAccount:(id)a0 paymentWebService:(id)a1 passLibrary:(id)a2 peerPaymentWebService:(id)a3 accountService:(id)a4 defaultPassUniqueIdentifier:(id)a5;
- (void)intentDetailsForFinancingPlan:(id)a0 intent:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)payLaterPaymentRequestWithIntentDetails:(id)a0 financingPlan:(id)a1 primaryPaymentSource:(id)a2 intent:(unsigned long long)a3 currencyAmount:(id)a4;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didUpdateAccountServicePaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)presentPaymentAuthorizationForFinancingPlan:(id)a0 primaryPaymentSource:(id)a1 intentDetails:(id)a2 intent:(unsigned long long)a3 currencyAmount:(id)a4 presentationSceneIdentifier:(id)a5 completion:(id /* block */)a6;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)a0;

@end
