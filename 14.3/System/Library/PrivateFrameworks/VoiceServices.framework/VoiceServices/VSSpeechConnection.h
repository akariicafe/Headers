@class NSString, NSXPCConnection, VSSpeechRequest, VSSpeechConnectionDelegateWrapper, NSObject, VSPresynthesizedAudioRequest;
@protocol OS_dispatch_queue, VSSpeechConnectionDelegate;

@interface VSSpeechConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) VSSpeechConnectionDelegateWrapper *delegateWrapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *threadSafeQueue;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<VSSpeechConnectionDelegate> delegate;
@property (readonly, nonatomic) VSSpeechRequest *request;
@property (readonly, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;

- (void)getLogToFile:(id /* block */)a0;
- (void)endAudioPowerUpdate;
- (id)init;
- (void)updateWithConnectionIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)estimateDurationWithRequest:(id)a0 reply:(id /* block */)a1;
- (void)prewarmIfNeededWithRequest:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)triggerCellularDownloadedVoiceAssets:(id)a0 withClientID:(id)a1;
- (oneway void)cleanUnusedAssets:(id /* block */)a0;
- (void)getTTSServerVoicesWithFilter:(id)a0 reply:(id /* block */)a1;
- (void)beginAudioPowerUpdateWithReply:(id /* block */)a0;
- (BOOL)queryPhaticCapabilityWithRequest:(id)a0;
- (void)stopCurrentSpeechRequestAtMark:(long long)a0;
- (void)pauseCurrentSpeechRequestAtMark:(long long)a0;
- (void)startSpeechRequest:(id)a0;
- (BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
- (BOOL)isSystemSpeaking;
- (void)getLocalVoiceResources:(id /* block */)a0;
- (void)continueCurrentSpeechRequest;
- (id)availableVoicesForLanguageCode:(id)a0;
- (id)availableFootprintsForVoice:(id)a0 languageCode:(id)a1;
- (void)setRequest:(id)a0;
- (void)cachePresynthesizedAudioRequest:(id)a0;
- (void)getAutoDownloadedVoiceAssetsWithClientID:(id)a0 reply:(id /* block */)a1;
- (void)killDaemon;
- (id)concurrentSynthesisRequests;
- (void)setPresynthesizedAudioRequest:(id)a0;
- (void)forwardStreamObject:(id)a0;
- (void)setAutoDownloadedVoiceAssets:(id)a0 withClientID:(id)a1;
- (id)_remoteObjectSync;
- (void)cancelDownloads:(id /* block */)a0;
- (void)_connectionInvalidated;
- (void)startSynthesisRequest:(id)a0;
- (void)setLogToFile:(BOOL)a0;
- (id)_remoteObjectWithErrorHandler:(id /* block */)a0;
- (void)getVoiceResourceForLanguage:(id)a0 reply:(id /* block */)a1;
- (void)stopPresynthesizedAudioRequest;
- (void)startPresynthesizedAudioRequest:(id)a0;
- (id)_remoteObject;
- (void)invokeDaemon:(id /* block */)a0;
- (void)getLocalVoiceAssetsForLanguage:(id)a0 reply:(id /* block */)a1;
- (void)getVoiceInfoForLanguageCode:(id)a0 footprint:(long long)a1 gender:(long long)a2 type:(long long)a3 reply:(id /* block */)a4;

@end
