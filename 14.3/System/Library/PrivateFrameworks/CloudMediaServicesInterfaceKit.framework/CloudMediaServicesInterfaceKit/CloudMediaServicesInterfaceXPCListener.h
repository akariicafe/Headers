@class NSString, NSXPCListener;
@protocol CloudMediaServicesInterfaceProtocol;

@interface CloudMediaServicesInterfaceXPCListener : NSObject <NSXPCListenerDelegate, CloudMediaServicesInterfaceProtocol> {
    NSXPCListener *_xpcListener;
}

@property (weak, nonatomic) id<CloudMediaServicesInterfaceProtocol> playbackCommandDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithDelegate:(id)a0;
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
