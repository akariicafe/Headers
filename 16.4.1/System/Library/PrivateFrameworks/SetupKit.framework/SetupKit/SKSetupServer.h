@class CUNANPublisher, NSString, CWFInterface, CWFActivity, CBAdvertiser, NSObject, CBServer;
@protocol OS_dispatch_queue;

@interface SKSetupServer : SKSetupBase <CUActivatable, CUAuthenticatableServer> {
    unsigned short _bleAdvertisePSM;
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _completed;
    NSString *_nanEndpointID;
    CUNANPublisher *_nanPublisher;
    CWFActivity *_wifiKeepAliveActivity;
    CWFInterface *_wifiKeepAliveInterface;
    struct __WiFiManagerClient { } *_wifiManager;
}

@property (copy, nonatomic) id /* block */ overallCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ authHidePasswordHandler;
@property (copy, nonatomic) id /* block */ authShowPasswordHandler;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_update;
- (id)init;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)reset;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_handleAcceptBLEConnection:(id)a0;
- (void)_handleAcceptCommon:(id)a0;
- (void)_handleAcceptNANData:(id)a0 endpoint:(id)a1;
- (void)_nanPublisherEnsureStarted;
- (void)_nanPublisherEnsureStopped;
- (void)_prepareSteps;
- (void)_prepareStepsOSRecovery;
- (void)_wifiKeepAliveEnsureStarted;
- (void)_wifiKeepAliveEnsureStopped;

@end
