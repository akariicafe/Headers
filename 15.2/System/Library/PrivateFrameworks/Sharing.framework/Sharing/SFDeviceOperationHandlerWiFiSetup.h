@class NSError, NSString, CUBonjourAdvertiser, NSData, NSDictionary, SFSession, CUReachabilityMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceOperationHandlerWiFiSetup : NSObject {
    CUBonjourAdvertiser *_bonjourAdvertiser;
    BOOL _invalidateCalled;
    CUReachabilityMonitor *_reachabilityMonitor;
    id /* block */ _responseHandler;
    NSDictionary *_scanResult;
    int _state;
    BOOL _stepDone;
    NSError *_stepError;
    BOOL _reachabilityEnabled;
    unsigned int _repairFlags;
    unsigned int _setupFlags;
    int _wifiChannel;
    BOOL _wifiDirected;
    id _wifiEAPConfig;
    id _wifiEAPTrustExceptions;
    BOOL _wifiHomeNetwork;
    NSString *_wifiPassword;
    NSData *_wifiPSK;
    NSString *_wifiSSID;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFSession *sfSession;

- (void).cxx_destruct;
- (void)activate;
- (void)_handleRequestBonjourTestStart:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleRequestBonjourTestDone:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleWiFiSetupRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_runScanStart:(int)a0;
- (void)_runJoinStart:(int)a0;
- (void)_runReachabilityStart;
- (void)_completeError:(id)a0;
- (void)_runScanResults:(id)a0 error:(id)a1 channel:(int)a2;
- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)_run;

@end
