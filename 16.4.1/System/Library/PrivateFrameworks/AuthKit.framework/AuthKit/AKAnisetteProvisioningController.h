@class NSXPCListenerEndpoint, AKDevice, NSXPCConnection, NSLock;
@protocol AKAnisetteServiceProtocol;

@interface AKAnisetteProvisioningController : NSObject {
    NSXPCConnection *_anisetteServiceConnection;
    NSLock *_connectionLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
}

@property (retain, nonatomic) AKDevice *targetDevice;
@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;

- (void)syncWithSIMData:(id)a0 completion:(id /* block */)a1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)anisetteDataWithError:(id *)a0;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 error:(id *)a1;
- (id)anisetteDataForURLRequest:(id)a0 error:(id *)a1;
- (void)anisetteDataWithCompletion:(id /* block */)a0;
- (id)initForDevice:(id)a0 provider:(id)a1;
- (void)dealloc;
- (void)fetchPeerAttestationDataForRequest:(id)a0 completion:(id /* block */)a1;
- (id)_anisetteServiceConnection;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (id)init;
- (void)eraseWithCompletion:(id /* block */)a0;
- (void)provisionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)anisetteDataForURLRequest:(id)a0 completion:(id /* block */)a1;

@end
