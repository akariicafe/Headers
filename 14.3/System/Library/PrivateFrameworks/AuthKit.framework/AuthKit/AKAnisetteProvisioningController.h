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
- (id)init;
- (void).cxx_destruct;
- (id)anisetteDataForURLRequest:(id)a0 error:(id *)a1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (id)anisetteDataWithError:(id *)a0;
- (void)dealloc;
- (void)fetchAttestationForRequest:(id)a0 completion:(id /* block */)a1;
- (void)anisetteDataForURLRequest:(id)a0 completion:(id /* block */)a1;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (id)initForDevice:(id)a0 provider:(id)a1;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 error:(id *)a1;
- (id)_anisetteServiceConnection;
- (void)eraseWithCompletion:(id /* block */)a0;
- (void)anisetteDataWithCompletion:(id /* block */)a0;
- (void)provisionWithCompletion:(id /* block */)a0;

@end
