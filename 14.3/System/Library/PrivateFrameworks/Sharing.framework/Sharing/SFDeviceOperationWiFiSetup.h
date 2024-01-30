@class NSString, CUBonjourBrowser, SFSession, NSObject, CUReachabilityMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationWiFiSetup : NSObject {
    CUBonjourBrowser *_bonjourBrowser;
    NSString *_bonjourTestID;
    NSObject<OS_dispatch_source> *_bonjourTimer;
    BOOL _invalidateCalled;
    BOOL _reachabilityEnabled;
    CUReachabilityMonitor *_reachabilityMonitor;
    unsigned long long _startTicks;
    unsigned long long _startBonjourTestTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property (readonly, nonatomic) int bonjourTestState;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) double metricBonjourTestSeconds;
@property (readonly, nonatomic) double metricTotalSeconds;
@property (readonly, nonatomic) double metricWiFiSetupSeconds;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned int setupFlags;
@property (retain, nonatomic) SFSession *sfSession;

- (id)init;
- (void).cxx_destruct;
- (void)_activate2;
- (void)_setupResponse:(id)a0;
- (void)_bonjourTestFoundDevice:(id)a0;
- (void)_bonjourTestTimeout;
- (void)_bonjourTestStart;
- (void)_activate;
- (void)activate;
- (void)_complete:(id)a0;
- (void)invalidate;

@end
