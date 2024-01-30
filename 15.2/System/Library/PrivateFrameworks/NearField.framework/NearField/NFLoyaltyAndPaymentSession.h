@class NFApplet, NSSet, NSDictionary;
@protocol NFLoyaltyAndPaymentSessionDelegate;

@interface NFLoyaltyAndPaymentSession : NFSession {
    BOOL _pendingServerRequest;
    BOOL _vasTransactionInProgress;
    id<NFLoyaltyAndPaymentSessionDelegate> _delegate;
    BOOL _emulationActive;
    NSDictionary *_appletsById;
    unsigned long long _numActiveSEs;
    BOOL _fieldNotificationSent;
}

@property id<NFLoyaltyAndPaymentSessionDelegate> delegate;
@property (readonly, retain) NFApplet *activeApplet;
@property (readonly, retain) NSSet *activeKeys;
@property (readonly, retain) NFApplet *defaultApplet;
@property (readonly) unsigned long long numberOfActiveSecureElements;

- (void)endSession;
- (id)appletWithIdentifier:(id)a0;
- (id)felicaAppletState:(id)a0 error:(id *)a1;
- (id)transitAppletState:(id)a0 error:(id *)a1;
- (id)felicaAppletState:(id)a0;
- (void).cxx_destruct;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)setActivePaymentApplet:(id)a0 keys:(id)a1 error:(id *)a2;
- (BOOL)setHostCards:(id)a0;
- (id)allApplets;
- (BOOL)setActivePaymentApplet:(id)a0 error:(id *)a1;
- (BOOL)startDeferredCardEmulation:(unsigned char)a0 authorization:(id)a1 error:(id *)a2;
- (BOOL)startCardEmulation:(unsigned char)a0 authorization:(id)a1 error:(id *)a2;
- (BOOL)stopCardEmulation:(id *)a0;
- (BOOL)enablePlasticCardMode:(BOOL)a0 error:(id *)a1;
- (void)didEndUnexpectedly;
- (BOOL)stopCardEmulation;
- (void)didStartSession:(id)a0;
- (void)didDetectField:(BOOL)a0;
- (void)didDetectFieldNotification:(id)a0;
- (void)didSelectApplet:(id)a0;
- (void)didFelicaStateChange:(id)a0;
- (void)didExpireTransactionForApplet:(id)a0;
- (void)didStartTransaction:(id)a0;
- (void)didEndTransaction:(id)a0;
- (void)didFailDeferredAuthorization;
- (void)didSelectValueAddedService:(BOOL)a0;
- (void)didPerformValueAddedServiceTransactions:(id)a0;
- (void)didReceivePendingServerRequest;
- (void)didExpressModeStateChange:(unsigned int)a0 withObject:(id)a1;
- (void)didReceiveActivityTimeout:(id)a0;
- (BOOL)setActivePaymentApplet:(id)a0;
- (BOOL)_startHostCardEmulation:(id *)a0;
- (BOOL)_startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)_startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)setActivePaymentApplet:(id)a0 makeDefault:(BOOL)a1;
- (BOOL)startCardEmulation:(unsigned char)a0 authorization:(id)a1;
- (BOOL)startDeferredCardEmulation:(unsigned char)a0 authorization:(id)a1;
- (BOOL)enablePlasticCardMode:(BOOL)a0;
- (BOOL)startExpressMode:(id *)a0;

@end
