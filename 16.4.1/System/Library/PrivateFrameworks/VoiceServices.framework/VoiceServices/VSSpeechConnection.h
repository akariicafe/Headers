@class NSString, NSXPCConnection, VSSpeechConnectionDelegateWrapper, NSObject;
@protocol OS_dispatch_queue, VSSpeechConnectionDelegate;

@interface VSSpeechConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL keepActive;
@property (weak, nonatomic) id<VSSpeechConnectionDelegate> delegate;

- (void)invokeDaemon:(id /* block */)a0;
- (oneway void)cleanUnusedAssets:(id /* block */)a0;
- (void)killDaemon;
- (id)_remoteObjectWithErrorHandler:(id /* block */)a0;
- (void)startPresynthesizedAudioRequest:(id)a0;
- (id)currentRequest;
- (id)_remoteObject;
- (void)continueSpeechRequest:(id)a0;
- (void)getVoiceResourceForLanguage:(id)a0 reply:(id /* block */)a1;
- (id)availableVoicesForLanguageCode:(id)a0;
- (void)prewarmIfNeededWithRequest:(id)a0 reply:(id /* block */)a1;
- (id)currentAudioRequest;
- (id)_remoteObjectSync;
- (void)stopPresynthesizedAudioRequest:(id)a0;
- (void)forwardStreamObject:(id)a0;
- (BOOL)isSystemSpeaking;
- (void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (void)dealloc;
- (void)getAllVoiceSubscriptionsWithReply:(id /* block */)a0;
- (void)setSubscribedVoiceAssets:(id)a0 withClientID:(id)a1 forAccessoryID:(id)a2;
- (void)startSynthesisRequest:(id)a0;
- (void)beginAudioPowerUpdateWithReply:(id /* block */)a0;
- (void)triggerCellularDownloadedVoiceAssets:(id)a0 withClientID:(id)a1;
- (id)availableFootprintsForVoice:(id)a0 languageCode:(id)a1;
- (void)cachePresynthesizedAudioRequest:(id)a0;
- (void)endAudioPowerUpdate;
- (void)getLocalVoiceAssetsForLanguage:(id)a0 reply:(id /* block */)a1;
- (void)estimateDurationWithRequest:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)stopVoicePreview;
- (void)getVoiceInfoForLanguageCode:(id)a0 name:(id)a1 footprint:(long long)a2 gender:(long long)a3 type:(long long)a4 reply:(id /* block */)a5;
- (void)getSubscribedVoiceAssetsWithClientID:(id)a0 forAccessoryID:(id)a1 reply:(id /* block */)a2;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)_connectionInvalidated;
- (void)startSpeechRequest:(id)a0;
- (void)startPhonemesRequest:(id)a0 phonemeSystem:(long long)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)getLocalVoiceResources:(id /* block */)a0;
- (void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (BOOL)queryPhaticCapabilityWithRequest:(id)a0;
- (void)startVoicePreviewRequest:(id)a0 reply:(id /* block */)a1;
- (void)updateWithConnectionIdentifier:(id)a0 keepActive:(BOOL)a1;

@end
