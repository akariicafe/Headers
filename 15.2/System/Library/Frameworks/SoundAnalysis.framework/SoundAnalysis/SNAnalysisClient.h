@class NSObject, NSMutableArray, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SNAnalysisClient : NSObject {
    id /* block */ _connectionToServerGenerator;
    NSXPCConnection *_xpcConnectionToServer;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingInvalidationHandlers;
}

+ (id)defaultClient;
+ (id)newConnectionToMachServiceWithName:(id)a0 lostConnectionHandler:(id /* block */)a1 queue:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (id)initToConnectToMachServiceWithName:(id)a0 queue:(id)a1;
- (id)initWithConnectionGenerator:(id /* block */)a0 queue:(id)a1;
- (void)_handleLostConnection;
- (id)_connectionToServerWithInvalidationHandler:(id /* block */)a0 queue:(id)a1;
- (id)_remoteResourceCoordinatorWithInvalidationHandler:(id /* block */)a0 queue:(id)a1;
- (id)_createRemoteSystemAudioAnalyzerWithInvalidationHandler:(id /* block */)a0 queue:(id)a1;
- (id)createRemoteSystemAudioAnalyzerWithInvalidationHandler:(id /* block */)a0 queue:(id)a1;

@end
