@class PKPaymentPass, NSArray, PKTransitAppletHistory, NSString, PKPaymentApplication, NSObject, PKFieldProperties;
@protocol OS_dispatch_queue, PKContactlessInterfaceSessionDelegate;

@interface PKContactlessInterfaceSession : PKPaymentSession <NFLoyaltyAndPaymentSessionDelegate> {
    PKPaymentApplication *_activatedPaymentApplication;
    PKPaymentPass *_activatedPaymentPass;
    NSArray *_activatedHostCards;
    NSArray *_valueAddedServiceTransactions;
    PKFieldProperties *_fieldPropertiesToLookup;
    BOOL _restoreActiveApplets;
    unsigned long long _transactionStartTime;
    _Atomic BOOL _fieldPresent;
    BOOL _handlingExpress;
    unsigned long long _expressActivity;
    BOOL _felicaStateChanged;
    unsigned long long _state;
    id<PKContactlessInterfaceSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _prioritySessionExists;
    _Atomic BOOL _persistentCardEmulation;
    unsigned char _cardEmulationMode;
}

@property (readonly, nonatomic) BOOL persistentCardEmulationQueued;
@property (readonly, nonatomic) PKPaymentApplication *activatedPaymentApplication;
@property (readonly, nonatomic) PKPaymentPass *activatedPaymentPass;
@property (readonly, nonatomic) NSArray *activatedValueAddedServicePasses;
@property (readonly, nonatomic) BOOL fieldPresent;
@property (readonly, nonatomic) PKFieldProperties *fieldProperties;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) PKTransitAppletHistory *transitAppletState;
@property (weak, nonatomic) id<PKContactlessInterfaceSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transitAppletStateFromPaymentSession:(id)a0 withPaymentApplication:(id)a1;

- (void)_endLookupAndNotify;
- (void)_endLookup;
- (void).cxx_destruct;
- (void)_startLookup;
- (void)loyaltyAndPaymentSession:(id)a0 didEndTransaction:(id)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didPerformValueAddedServiceTransactions:(id)a1;
- (void)setState:(unsigned long long)a0;
- (id)initWithInternalSession:(id)a0 targetQueue:(id)a1;
- (void)_sendPersistentCardEmulationForPaymentPass:(id)a0 paymentApplication:(id)a1;
- (void)invalidateSessionWithCompletion:(id /* block */)a0;
- (BOOL)activatePaymentApplication:(id)a0 forPaymentPass:(id)a1;
- (id)_appletForPaymentApplication:(id)a0;
- (BOOL)activateValueAddedServicePasses:(id)a0;
- (BOOL)authorizeAndStartCardEmulationWithCredential:(id)a0 deferAuthorization:(BOOL)a1;
- (id)_appletWithIdentifier:(id)a0;
- (id)_filteredLoyaltyPassesFromVASTransactions:(id)a0 activatedPasses:(id)a1;
- (void)_processEndEvent:(id)a0 withPartialContext:(id)a1 groupHeadIdentifier:(id)a2 groupAppletIdentifiers:(id)a3;
- (void)resetExpressState;
- (void)loyaltyAndPaymentSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)loyaltyAndPaymentSessionDidExitField:(id)a0;
- (void)loyaltyAndPaymentSession:(id)a0 didSelectApplet:(id)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didExpireTransactionForApplet:(id)a1;
- (BOOL)stopCardEmulation;
- (void)loyaltyAndPaymentSession:(id)a0 didStartTransaction:(id)a1;
- (void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)a0;
- (void)loyaltyAndPaymentSession:(id)a0 didSelectValueAddedService:(BOOL)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didFelicaStateChange:(id)a1;
- (void)loyaltyAndPaymentSession:(id)a0 didExpressModeStateChange:(unsigned int)a1 withObject:(id)a2;
- (void)loyaltyAndPaymentSession:(id)a0 didFailDeferredAuthorization:(BOOL)a1;
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)a0 result:(id)a1;
- (BOOL)activatePaymentApplication:(id)a0 forPaymentPass:(id)a1 markAsDefault:(BOOL)a2;
- (BOOL)activateValueAddedServicePassWhitelist:(id)a0 greylist:(id)a1;
- (BOOL)authorizeAndStartCardEmulationWithCredential:(id)a0;
- (BOOL)queuePersistentCardEmulation;
- (BOOL)resetPersistentCardEmulation;
- (BOOL)paymentApplicationSupportsAutomaticAuthorization:(id)a0;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)a0;

@end
