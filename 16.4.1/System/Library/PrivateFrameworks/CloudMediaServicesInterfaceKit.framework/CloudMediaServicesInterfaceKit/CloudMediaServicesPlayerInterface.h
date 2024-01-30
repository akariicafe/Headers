@class NSXPCConnection;
@protocol CloudMediaServicesInterfaceProtocol;

@interface CloudMediaServicesPlayerInterface : NSObject {
    NSXPCConnection *_connection;
    id<CloudMediaServicesInterfaceProtocol> _AgoraInterfaceProxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)setOverrideURL:(id)a0;
- (void)setServerEnvironment:(id)a0;
- (void)getCloudExtensionConfigurationFor:(id)a0 homeUserID:(id)a1 endpointID:(id)a2 withCompletion:(id /* block */)a3;
- (void)pauseSample;
- (void)playSample:(id)a0;
- (void)sendPlaybackQueueToRemoteDestination:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendPlaybackQueueWithUserActivityDictionary:(id)a0 forIntentID:(id)a1 toDestination:(id)a2 withIntentData:(id)a3 prepareQueue:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)stopAnalyticsWithIdentifier:(id)a0;
- (void)submitAnalyticsForType:(id)a0 andIdentifier:(id)a1 eventType:(id)a2 atTime:(id)a3 withMetadata:(id)a4;

@end
