@protocol SFB332UIProtocol;

@interface SFB332SetupObserver : SFXPCClient

@property (weak, nonatomic) id<SFB332UIProtocol> delegate;

- (id)remoteObjectInterface;
- (void)setDeviceType:(unsigned long long)a0;
- (id)exportedInterface;
- (void)dismissUIAnimated:(BOOL)a0;
- (void)dismissUnlockPrompt;
- (void)enableBluetoothTapped;
- (void)setShouldShowWhatsNew:(BOOL)a0;
- (void)showEnableBluetoothPill;
- (void)showPairConsentPrompt;
- (void)showPairingStarted;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)showPairingSuccess;
- (void)showSubsequentPairSuccess;
- (void)showUnlockPrompt;
- (id)machServiceName;
- (void)activate;
- (void)acquireHUDTransaction;
- (void)dismissBTPrompt;
- (void)invalidate;
- (void)dismissChargingStatus;
- (void)pairTapped;
- (void)releaseHUDTransaction;
- (void)showChargingStatus;
- (void)showPairingFailure;
- (void).cxx_destruct;
- (void)updateDeviceInfoWithName:(id)a0 batteryLevel:(double)a1 batteryLevelKnown:(BOOL)a2 edge:(unsigned long long)a3 orientation:(unsigned long long)a4;

@end
