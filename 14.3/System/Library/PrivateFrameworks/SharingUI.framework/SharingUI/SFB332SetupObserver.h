@protocol SFB332UIProtocol;

@interface SFB332SetupObserver : SFXPCClient

@property (weak, nonatomic) id<SFB332UIProtocol> delegate;

- (void)updateDeviceInfoWithName:(id)a0 batteryLevel:(double)a1 batteryLevelKnown:(BOOL)a2 edge:(unsigned long long)a3 orientation:(unsigned long long)a4;
- (void)showPairingStarted;
- (void)setShouldShowWhatsNew:(BOOL)a0;
- (void)showPairingFailure;
- (void).cxx_destruct;
- (void)dismissChargingStatus;
- (void)showPairingSuccess;
- (void)showUnlockPrompt;
- (void)setDeviceType:(unsigned long long)a0;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)showSubsequentPairSuccess;
- (void)acquireHUDTransaction;
- (void)activate;
- (id)exportedInterface;
- (void)dismissBTPrompt;
- (id)machServiceName;
- (void)dismissUnlockPrompt;
- (void)pairTapped;
- (id)remoteObjectInterface;
- (void)dismissUIAnimated:(BOOL)a0;
- (void)enableBluetoothTapped;
- (void)releaseHUDTransaction;
- (void)showChargingStatus;
- (void)showPairConsentPrompt;
- (void)invalidate;
- (void)showEnableBluetoothPill;

@end
