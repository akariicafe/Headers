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
- (id)allApplets;
- (void)didEndUnexpectedly;
- (void).cxx_destruct;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)setActivePaymentApplet:(id)a0 keys:(id)a1 error:(id *)a2;
- (BOOL)stopCardEmulation:(id *)a0;
- (void)didDetectField:(BOOL)a0;
- (BOOL)_startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)_startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (void)didDetectFieldNotification:(id)a0;
- (void)didEndTransaction:(id)a0;
- (void)didExpireTransactionForApplet:(id)a0;
- (void)didExpressModeStateChange:(unsigned int)a0 withObject:(id)a1;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)a0;
- (void)didPerformValueAddedServiceTransactions:(id)a0;
- (void)didReceiveActivityTimeout:(id)a0;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)a0;
- (void)didSelectValueAddedService:(BOOL)a0;
- (void)didStartSession:(id)a0;
- (void)didStartTransaction:(id)a0;
- (unsigned long long)numberOfActiveSecureElements;
- (BOOL)startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)startExpressMode:(id *)a0;

@end
