@class CUBonjourAdvertiser, NSString, CBAdvertiser, NRDeviceManager, FLFollowUpController, NRDeviceIdentifier, NRDeviceMonitor, CBServer;

@interface SKSetupCaptiveNetworkJoinServer : SKSetupBase <NRDeviceMonitorDelegate> {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    unsigned int _captiveNetworkCookie;
    NSString *_captiveNetworkInterfaceName;
    BOOL _captiveNetworkWebSheetActive;
    BOOL _captiveNetworkWebSheetCompleted;
    BOOL _cfuCleared;
    FLFollowUpController *_cfuController;
    CUBonjourAdvertiser *_awdlAdvertiser;
    NRDeviceIdentifier *_nrDeviceIdentifier;
    NRDeviceManager *_nrDeviceManager;
    NRDeviceMonitor *_nrDeviceMonitor;
}

@property (nonatomic) int mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resetWithCompletionHandler:(id /* block */)a0;

- (void)_run;
- (void)_activate;
- (id)descriptionWithLevel:(int)a0;
- (id)init;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)deviceIsConnectedDidChange:(id)a0 isConnected:(BOOL)a1;
- (void)deviceLinkTypeDidChange:(id)a0 linkType:(unsigned char)a1 linkSubtype:(unsigned char)a2;
- (void)deviceProxyServiceInterfaceNameDidChange:(id)a0 interfaceName:(id)a1;
- (void)_connectionEnded:(id)a0;
- (void)_runUserRequest;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleServerAcceptConnecton:(id)a0;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_captiveNetworkLoginInfo:(id)a0 cookie:(unsigned int)a1 responseHandler:(id /* block */)a2;
- (void)_captiveNetworkLoginRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_captiveNetworkProbeEnsureStopped;
- (void)_captiveNetworkProbeRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_captiveNetworkProbeResult:(int)a0 responseHandler:(id /* block */)a1;
- (void)_cfuEnsuredStarted;
- (void)_cfuEnsuredStopped;
- (void)_networkRelayAWDLStartRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_networkRelayDeviceEnsureStopped;
- (void)_networkRelaySetupRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_oobEnsureStarted;
- (void)_runDefault;
- (void)_runDetected;

@end
