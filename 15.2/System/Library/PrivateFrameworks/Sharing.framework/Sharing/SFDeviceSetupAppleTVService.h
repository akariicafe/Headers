@class SFDeviceOperationHandlerWiFiSetup, TVLAudioLatencyEstimator, SFService, SFDeviceOperationHandlerCDPSetup, SFSession, NSObject, HMDeviceSetupOperationHandler, SFClient;
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
    BOOL _prefCDPEnabled;
    BOOL _prefTVLatency;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)_cleanup;
- (void)_reportProgress:(unsigned int)a0 info:(id)a1;
- (void)_handleTVLatencyRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleFinishRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSessionStarted:(id)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)activate;
- (void)_handlePreAuthRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleBasicConfigRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleTVLatencyProgressEvent:(unsigned long long)a0 info:(id)a1;
- (id)init;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)a0;
- (void)_activate;
- (void)invalidate;
- (void)dealloc;

@end
