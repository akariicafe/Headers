@class NSError, NSString, NSDictionary, NSData, CUBonjourAdvertiser, NSObject, CUReachabilityMonitor;
@protocol OS_dispatch_queue, CUMessaging, OS_dispatch_source;

@interface SKStepWiFiSetupServer : NSObject <CULabelable, SKStepable> {
    BOOL _activateCalled;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    NSObject<OS_dispatch_source> *_bonjourTimeoutTimer;
    BOOL _internetReachabilityEnabled;
    CUReachabilityMonitor *_internetReachabilityMonitor;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    double _metricTotalSeconds;
    id /* block */ _responseHandler;
    int _runState;
    NSDictionary *_scanResult;
    unsigned long long _startTicks;
    BOOL _stepDone;
    NSError *_stepError;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    int _wifiChannel;
    BOOL _wifiDirected;
    id _wifiEAPConfig;
    id _wifiEAPTrustExceptions;
    BOOL _wifiHomeNetwork;
    NSString *_wifiPassword;
    NSData *_wifiPSK;
    NSString *_wifiSSID;
}

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ skCompletionHandler;
@property (retain, nonatomic) id<CUMessaging> skMessaging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_completeWithError:(id)a0;
- (void)activate;
- (void)_handleRequestBonjourTestStart:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleRequestBonjourTestDone:(id)a0 responseHandler:(id /* block */)a1;
- (void)_runScanStart:(int)a0;
- (void)_runJoinStart:(int)a0;
- (void)_runScanResults:(id)a0 error:(id)a1 channel:(int)a2;
- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)_run;
- (void)_invalidated;
- (void)dealloc;
- (void)_runInternetReachabilityStart;
- (void)_handleRequestWiFiSetup:(id)a0 responseHandler:(id /* block */)a1;

@end
