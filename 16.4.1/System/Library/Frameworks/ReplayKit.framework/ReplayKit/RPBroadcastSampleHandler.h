@class NSString;
@protocol RPBroadcastDaemonProtocol;

@interface RPBroadcastSampleHandler : RPBroadcastHandler <RPExtensionContextDelegate>

@property (retain, nonatomic) id<RPBroadcastDaemonProtocol> daemonProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)group;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (id)audioQueue;
- (id)videoQueue;
- (void)_processPayloadWithVideoSample:(id)a0;
- (void)broadcastPaused;
- (void)_processPayload:(id)a0;
- (void)_processPayloadWithAudioSample:(id)a0 type:(long long)a1;
- (void)_setupListenerWithEndpoint:(id)a0;
- (void)broadcastAnnotatedWithApplicationInfo:(id)a0;
- (void)broadcastFinished;
- (void)broadcastResumed;
- (void)broadcastStartedWithSetupInfo:(id)a0;
- (void)extensionContext:(id)a0 setEndpoint:(id)a1;
- (void)finishBroadcastWithError:(id)a0;
- (void)processPayload:(id)a0 completion:(id /* block */)a1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 withType:(long long)a1;
- (void)updateBroadcastURL:(id)a0;
- (void)updateServiceInfo:(id)a0;

@end
