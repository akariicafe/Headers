@protocol SFB332UIProtocol;

@interface SFB332SetupObserver : SFXPCClient

@property (weak, nonatomic) id<SFB332UIProtocol> delegate;

- (id)remoteObjectInterface;
- (void)showPairingSuccess;
- (void)setShouldShowWhatsNew:(BOOL)a0;
- (void)showPairingStarted;
- (void)setDeviceType:(unsigned long long)a0;
- (void)enableBluetoothTapped;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)dismissBTPrompt;
- (void)showChargingStatus;
- (void)releaseHUDTransaction;
- (void)dismissUnlockPrompt;
- (void)updateDeviceInfoWithName:(id)a0 batteryLevel:(double)a1 batteryLevelKnown:(BOOL)a2 edge:(unsigned long long)a3 orientation:(unsigned long long)a4;
- (void)pairTapped;
- (void).cxx_destruct;
- (void)activate;
- (void)invalidate;
- (id)exportedInterface;
- (void)showPairConsentPrompt;
- (void)showPairingFailure;
- (void)dismissChargingStatus;
- (void)showSubsequentPairSuccess;
- (void)dismissUIAnimated:(BOOL)a0;
- (void)showUnlockPrompt;
- (void)acquireHUDTransaction;
- (void)showEnableBluetoothPill;

@end
