@class NSString, NSXPCConnection;
@protocol DADiagnosticsRemoteRunnerDelegate, DARemoteRunnerServerProtocol;

@interface DADiagnosticsRemoteRunner : NSObject <DARemoteRunnerServerProtocol, DARemoteRunnerClientProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property (retain) id<DARemoteRunnerServerProtocol> remoteRunnerServer;
@property (weak) id<DADiagnosticsRemoteRunnerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)_establishConnection;
- (void)requestUploadAssets:(id)a0 completion:(id /* block */)a1;
- (void)cancelTestWithID:(id)a0 completion:(id /* block */)a1;
- (void)createRemoteRunnerDeviceWithSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)destroyRemoteRunnerDeviceWithCompletion:(id /* block */)a0;
- (void)remoteRunnerDeviceEnded;
- (void)requestAsset:(id)a0 completion:(id /* block */)a1;
- (void)runTestWithID:(id)a0 name:(id)a1 description:(id)a2 parameters:(id)a3 completion:(id /* block */)a4;

@end
