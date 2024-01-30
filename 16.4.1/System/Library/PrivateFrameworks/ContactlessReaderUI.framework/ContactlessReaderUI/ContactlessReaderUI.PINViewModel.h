@interface ContactlessReaderUI.PINViewModel : _TtCs12_SwiftObject <ProximityReader.PINUI> {
    void /* unknown type, empty encoding */ remoteProxy;
    void /* unknown type, empty encoding */ tapDigitCounter;
    void /* unknown type, empty encoding */ removeDigitsCounter;
    void /* unknown type, empty encoding */ pinContext;
    void /* unknown type, empty encoding */ pinData;
    void /* unknown type, empty encoding */ audioManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceOverObserver;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fineRotationManager;
    void /* unknown type, empty encoding */ voiceOverWasEnabled;
    void /* unknown type, empty encoding */ initialInstructions;
    void /* unknown type, empty encoding */ shortInstructions;
    void /* unknown type, empty encoding */ audioMode;
    void /* unknown type, empty encoding */ inhibitsVocalMessages;
    void /* unknown type, empty encoding */ _voiceOverEnabled;
    void /* unknown type, empty encoding */ _incomingCall;
    void /* unknown type, empty encoding */ _showProgress;
    void /* unknown type, empty encoding */ pinEntryTimer;
    void /* unknown type, empty encoding */ tapCounterTimer;
    void /* unknown type, empty encoding */ removeDigitTimer;
    void /* unknown type, empty encoding */ _pinUIIsPresented;
    void /* unknown type, empty encoding */ _pinEntryMode;
    void /* unknown type, empty encoding */ _disableAXButton;
    void /* unknown type, empty encoding */ _readingVOInstructions;
    void /* unknown type, empty encoding */ _pinLength;
    void /* unknown type, empty encoding */ _pinUIError;
    void /* unknown type, empty encoding */ _presentAuth;
    void /* unknown type, empty encoding */ _showLockOnStatusBar;
    void /* unknown type, empty encoding */ _cancelUnlockInstruction;
    void /* unknown type, empty encoding */ _topBarModel;
    void /* unknown type, empty encoding */ samSession;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ evaluating;
    void /* unknown type, empty encoding */ pinCardRequest;
    void /* unknown type, empty encoding */ subscribers;
    void /* unknown type, empty encoding */ isPINPrivacyLockEnabled;
    void /* unknown type, empty encoding */ didMerchantAuthorize;
    void /* unknown type, empty encoding */ incomingCallAccepted;
    void /* unknown type, empty encoding */ pinController;
    void /* unknown type, empty encoding */ pinCaptureState;
    void /* unknown type, empty encoding */ _pinState;
}

- (void)closePINUI;
- (void)closePINUIImmediate;
- (void)errorInDaemonWithError:(long long)a0;
- (void)notifyIncomingCall;
- (void)updateSessionEventWithSessionEvent:(long long)a0;

@end
