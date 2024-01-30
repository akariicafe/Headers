@class SFBluetoothPairingSession, NSString, SFService, CUBluetoothClient, SFSession, NSObject, SFProxCardSessionClient, SDStatusMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFShareAudioService : NSObject <SFProxCardXPCClientInterface> {
    NSString *_guestDeviceAddress;
    NSString *_headphonesAddress;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFBluetoothPairingSession *_pairingSession;
    SFProxCardSessionClient *_proxCardSessionClient;
    id /* block */ _responseHandler;
    SFService *_sfService;
    SFSession *_sfSession;
    CUBluetoothClient *_searchBTClient;
    NSObject<OS_dispatch_source> *_searchTimer;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SDStatusMonitor *statusMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_handleShareAudioFoundDevice:(id)a0;
- (void)_sfServiceStart;
- (void)activate;
- (void)_handleShareAudioPairingCompleted:(id)a0 error:(id)a1;
- (void)_invalidate;
- (void)_handleShareAudioRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)xpcPerformAction:(int)a0 completion:(id /* block */)a1;
- (void)_handleSessionEnded:(id)a0 error:(id)a1;
- (void)_handleSessionStarted:(id)a0;
- (void)_handleShareAudioRequest2:(id)a0 contact:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleShareAudioSearchTimeout;
- (void)invalidate;
- (void)_handleShareAudioResponse:(int)a0 error:(id)a1;

@end
