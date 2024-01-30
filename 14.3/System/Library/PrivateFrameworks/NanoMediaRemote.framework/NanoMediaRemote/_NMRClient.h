@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _NMRClient : NSObject {
    NSXPCConnection *_serverConnection;
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
}

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (id)_proxyWithErrorHandler:(id /* block */)a0;
- (id)_synchronousProxyWithErrorHandler:(id /* block */)a0;
- (void)refreshMediaRemoteStateIfNecessary;
- (void)sendMediaRemoteCommand:(unsigned int)a0 withCommandOptions:(id)a1 toOriginWithUniqueIdentifier:(int)a2 commandResultHandler:(id /* block */)a3;
- (void)prewarmCompanionSystemMusicApp;
- (void)discoverAndConnectEndpoints;

@end
