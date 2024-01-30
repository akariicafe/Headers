@class NSString, SFDeviceOperationHandlerWiFiSetup, SFService, TVLAudioLatencyEstimator, SFDeviceOperationHandlerCDPSetup, SFSession, NSObject, HMDeviceSetupOperationHandler, SFClient, SFDeviceOperationHandlerCNJSetup;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupAppleTVService : NSObject {
    BOOL _activateCalled;
    BOOL _advertiseFast;
    BOOL _invalidateCalled;
    SFClient *_preventExitForLocaleClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    TVLAudioLatencyEstimator *_tvLatencyEstimator;
    BOOL _tvLatencyFinalReported;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    SFDeviceOperationHandlerCNJSetup *_captiveNetworkHandler;
    BOOL _prefCDPEnabled;
    BOOL _prefTVLatency;
    BOOL _prefHH2Enabled;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) BOOL isCLIMode;
@property (nonatomic) NSString *forcedPasscode;

- (void)_cleanup;
- (void)_sfServiceStart;
- (void)_activate;
- (void)dealloc;
- (void)_handleSessionStarted:(id)a0;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_handleBasicConfigRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleFinishRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handlePreAuthRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleTVLatencyProgressEvent:(unsigned long long)a0 info:(id)a1;
- (void)_handleTVLatencyRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_reportProgress:(unsigned int)a0 info:(id)a1;

@end
