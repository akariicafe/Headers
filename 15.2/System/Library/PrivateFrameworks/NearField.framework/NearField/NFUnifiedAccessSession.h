@class NFApplet, NSSet, NSDictionary;
@protocol NFUnifiedAccessSessionDelegate;

@interface NFUnifiedAccessSession : NFSession {
    id<NFUnifiedAccessSessionDelegate> _delegate;
    BOOL _emulationActive;
    NSDictionary *_appletsById;
    unsigned long long _numActiveSEs;
    BOOL _fieldNotificationSent;
}

@property id<NFUnifiedAccessSessionDelegate> delegate;
@property (readonly, retain) NFApplet *activeApplet;
@property (readonly, retain) NSSet *activeKeys;

- (void)endSession;
- (id)appletWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)setActivePaymentApplet:(id)a0 keys:(id)a1 error:(id *)a2;
- (id)allApplets;
- (BOOL)stopCardEmulation:(id *)a0;
- (void)didEndUnexpectedly;
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
- (BOOL)startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (unsigned long long)numberOfActiveSecureElements;
- (BOOL)_startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)_startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)startExpressMode:(id *)a0;

@end
