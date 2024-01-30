@interface ContactlessReaderUI.MerchantdProxy : _TtCs12_SwiftObject <ProximityReader.TransactionUIDelegate, ProximityReader.TransactionUI> {
    void /* unknown type, empty encoding */ tapUI;
    void /* unknown type, empty encoding */ pinUI;
    void /* unknown type, empty encoding */ remoteProxy;
}

- (void)closeUI;
- (void)closePINUI;
- (void)closePINUIImmediate;
- (void)closeUIImmediate;
- (void)errorInDaemonWithError:(long long)a0;
- (void)notifyIncomingCall;
- (void)pinAuthNeeded;
- (void)pinAuthResultWithError:(id)a0 cancelsFlow:(BOOL)a1;
- (void)pinDataReceivedWithPinData:(id)a0 isCardRequest:(BOOL)a1 isAccessibilityEnabled:(BOOL)a2;
- (void)pinUIDidLoad;
- (void)pinValidateSession;
- (void)reportGuidanceUpdateWithVisible:(BOOL)a0 trigger:(id)a1;
- (void)reportPINErrorWithError:(long long)a0 isCardRequest:(BOOL)a1 isAccessibilityEnabled:(BOOL)a2;
- (void)requiresCardPIN:(id)a0;
- (void)setVoiceOverWithEnabled:(BOOL)a0;
- (void)tapUIDidLoad;
- (void)tapUIFinishedWithExpected:(BOOL)a0;
- (void)tapUIRequestingCancel;
- (void)tapUIRequestingRetry;
- (void)updateSessionEventWithSessionEvent:(long long)a0;
- (void)updateWithTransactionEvent:(long long)a0;
- (void)vasReadSuccessWithMerchantNames:(id)a0;

@end
