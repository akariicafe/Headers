@class CUReachabilityMonitor, SFSession, SKSetupCaptiveNetworkJoinServer, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceOperationHandlerCNJSetup : NSObject {
    SKSetupCaptiveNetworkJoinServer *_cnjServer;
    BOOL _invalidateCalled;
    CUReachabilityMonitor *_reachabilityMonitor;
    int _cnsNotifyToken;
    BOOL _reachabilityDone;
    id /* block */ _responseHandler;
}

@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_handleCaptiveJoinRequestWithResponseHandler:(id /* block */)a0;
- (void)_runReachability:(id)a0 responseHandler:(id /* block */)a1;
- (void)_updateCaptiveState;

@end
