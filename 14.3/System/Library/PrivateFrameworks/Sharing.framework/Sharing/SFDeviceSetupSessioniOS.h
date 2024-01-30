@class NSData, NSString, BYDeviceSetupSourceSession, CoreTelephonyClient, CDPStateController, SFDevice, SFSession, NSObject, RPFileTransferSession, CDPContext, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupSessioniOS : NSObject {
    BOOL _activateCalled;
    unsigned int _appNextID;
    BOOL _buddyComplete;
    BYDeviceSetupSourceSession *_buddySession;
    BOOL _buddyConfigured;
    BOOL _configRequestSent;
    BOOL _configResponseReceived;
    BOOL _invalidateCalled;
    BOOL _pairSetupDone;
    BOOL _pairSetupReset;
    BOOL _pairSetupRunning;
    int _preAuthPairSetupState;
    BOOL _preAuthRequestSent;
    BOOL _preAuthResponseReceived;
    NSData *_resumeAuthTag;
    SFDeviceDiscovery *_resumeDiscovery;
    NSString *_resumePassword;
    int _resumeState;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    CoreTelephonyClient *_eSIMClient;
    BOOL _eSIMSetupEnabled;
    int _eSIMSetupState;
    int _cdpState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) RPFileTransferSession *fileTransferSessionTemplate;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) unsigned int pairFlags;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (copy, nonatomic) id /* block */ receivedObjectHandler;

- (void)_run;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (void)tryPIN:(id)a0;
- (void)activate;
- (void)_handleSetupActionRequest:(id)a0 responseHandler:(id /* block */)a1;
- (int)_runPreAuthPairSetup;
- (void)_sendPreAuthInfo;
- (int)_runESIMSetup;
- (int)_runCoreCDPSetup;
- (void)_sendConfigInfo;
- (int)_runResume;
- (void)_startBuddySession;
- (void)_runSFSessionActivated;
- (void)_handleBuddyProgress:(id)a0;
- (void)_handleSetupActionSoftwareUpdate;
- (void)_handleSetupPeerSuspended;
- (void)_handleSetupResumeFoundDevice:(id)a0;
- (void)_receivedConfigResponse:(id)a0;
- (void)sendAppEvent:(id)a0;
- (void)_completedWithError:(id)a0;
- (void)_runSFSessionStart;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;
- (void)invalidate;

@end
