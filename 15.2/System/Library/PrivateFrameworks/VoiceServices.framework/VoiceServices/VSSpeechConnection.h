@class NSString, NSXPCConnection, VSSpeechConnectionDelegateWrapper, NSObject;
@protocol OS_dispatch_queue, VSSpeechConnectionDelegate;

@interface VSSpeechConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<VSSpeechConnectionDelegate> delegate;

- (void)invokeDaemon:(id /* block */)a0;
- (void)beginAudioPowerUpdateWithReply:(id /* block */)a0;
- (id)availableVoicesForLanguageCode:(id)a0;
- (id)currentAudioRequest;
- (BOOL)isSystemSpeaking;
- (void)cachePresynthesizedAudioRequest:(id)a0;
- (void)cancelDownloads:(id /* block */)a0;
- (void)getAllVoiceSubscriptionsWithReply:(id /* block */)a0;
- (void)estimateDurationWithRequest:(id)a0 reply:(id /* block */)a1;
- (id)currentRequest;
- (void)triggerCellularDownloadedVoiceAssets:(id)a0 withClientID:(id)a1;
- (id)_remoteObject;
- (void)killDaemon;
- (void)endAudioPowerUpdate;
- (id)_remoteObjectWithErrorHandler:(id /* block */)a0;
- (void)getLocalVoiceAssetsForLanguage:(id)a0 reply:(id /* block */)a1;
- (void)continueSpeechRequest:(id)a0;
- (void)stopVoicePreview;
- (id)_remoteObjectSync;
- (void)setSubscribedVoiceAssets:(id)a0 withClientID:(id)a1 forAccessoryID:(id)a2;
- (void)updateWithConnectionIdentifier:(id)a0;
- (void)forwardStreamObject:(id)a0;
- (void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (void)startVoicePreviewForLanguageCode:(id)a0 voiceName:(id)a1 previewType:(long long)a2 reply:(id /* block */)a3;
- (id)availableFootprintsForVoice:(id)a0 languageCode:(id)a1;
- (void)getVoiceInfoForLanguageCode:(id)a0 name:(id)a1 footprint:(long long)a2 gender:(long long)a3 type:(long long)a4 reply:(id /* block */)a5;
- (void)startSpeechRequest:(id)a0;
- (BOOL)queryPhaticCapabilityWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)startSynthesisRequest:(id)a0;
- (void)_connectionInvalidated;
- (id)init;
- (void)getVoiceResourceForLanguage:(id)a0 reply:(id /* block */)a1;
- (void)getSubscribedVoiceAssetsWithClientID:(id)a0 forAccessoryID:(id)a1 reply:(id /* block */)a2;
- (void)startPresynthesizedAudioRequest:(id)a0;
- (void)prewarmIfNeededWithRequest:(id)a0 reply:(id /* block */)a1;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)dealloc;
- (void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (void)getLocalVoiceResources:(id /* block */)a0;
- (oneway void)cleanUnusedAssets:(id /* block */)a0;
- (void)stopPresynthesizedAudioRequest:(id)a0;

@end
