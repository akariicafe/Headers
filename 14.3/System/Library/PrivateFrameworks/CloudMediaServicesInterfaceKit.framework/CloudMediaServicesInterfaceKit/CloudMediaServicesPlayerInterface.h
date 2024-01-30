@class NSXPCConnection;
@protocol CloudMediaServicesInterfaceProtocol;

@interface CloudMediaServicesPlayerInterface : NSObject {
    NSXPCConnection *_connection;
    id<CloudMediaServicesInterfaceProtocol> _AgoraInterfaceProxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)setServerEnvironment:(id)a0;
- (void)playSample:(id)a0;
- (void)sendPlaybackQueueToRemoteDestination:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendPlaybackQueueWithUserActivityDictionary:(id)a0 forIntentID:(id)a1 toDestination:(id)a2 withIntentData:(id)a3 prepareQueue:(BOOL)a4;
- (void)pauseSample;
- (void)setOverrideURL:(id)a0;
- (void)getCloudExtensionConfigurationFor:(id)a0 homeUserID:(id)a1 withCompletion:(id /* block */)a2;
- (void)submitAnalyticsForType:(id)a0 andIdentifier:(id)a1 eventType:(id)a2 atTime:(id)a3 withMetadata:(id)a4;
- (void)stopAnalyticsWithIdentifier:(id)a0;

@end
