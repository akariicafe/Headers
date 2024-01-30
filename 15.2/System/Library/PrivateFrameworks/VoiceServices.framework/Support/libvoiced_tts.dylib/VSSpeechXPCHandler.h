@class NSString, AFAudioPowerUpdater, NSXPCConnection, VSHHManagementClient, NSObject, VSHMHomeManager;
@protocol OS_dispatch_queue;

@interface VSSpeechXPCHandler : NSObject <VSSpeechXPCServiceProtocol, VSSpeechServiceDelegate> {
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSString *connectionIdentifier;
@property (retain, nonatomic) VSHHManagementClient *hubManagementClient;
@property (retain, nonatomic) VSHMHomeManager *homeManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioPowerUpdateQueue;
@property (retain, nonatomic) AFAudioPowerUpdater *audioPowerUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSiriClientBundleIdentifier:(id)a0;

- (oneway void)speechRequestDidContinue:(id)a0;
- (oneway void)invokeDaemon:(id /* block */)a0;
- (oneway void)beginAudioPowerUpdateWithReply:(id /* block */)a0;
- (oneway void)cachePresynthesizedAudioRequest:(id)a0;
- (oneway void)cancelDownloads:(id /* block */)a0;
- (oneway void)getAllVoiceSubscriptionsWithReply:(id /* block */)a0;
- (oneway void)synthesisRequest:(id)a0 didGenerateAudioChunk:(id)a1;
- (oneway void)estimateDurationWithRequest:(id)a0 reply:(id /* block */)a1;
- (void)performLanguageFallBackIfNeededWithRequest:(id)a0;
- (oneway void)speechRequest:(id)a0 didStartWithMark:(long long)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (oneway void)audioRequestDidStart:(id)a0;
- (oneway void)audioRequest:(id)a0 didStopAtEnd:(BOOL)a1 error:(id)a2;
- (oneway void)speechRequestDidPause:(id)a0;
- (oneway void)queryPhaticCapabilityWithRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)getLocalVoicesForLanguage:(id)a0 reply:(id /* block */)a1;
- (oneway void)triggerCellularDownloadedVoiceAssets:(id)a0 withClientID:(id)a1;
- (oneway void)killDaemon;
- (oneway void)endAudioPowerUpdate;
- (oneway void)getLocalVoiceResourcesReply:(id /* block */)a0;
- (BOOL)isSpeaking;
- (oneway void)synthesisRequest:(id)a0 didReceiveTimingInfo:(id)a1;
- (void)preprocessRequestBeforeSynthesis:(id)a0;
- (oneway void)speechRequest:(id)a0 didReceiveTimingInfo:(id)a1;
- (oneway void)continueSpeechRequest:(id)a0;
- (oneway void)stopVoicePreview;
- (oneway void)setSubscribedVoiceAssets:(id)a0 withClientID:(id)a1 forAccessoryID:(id)a2;
- (oneway void)updateWithConnectionIdentifier:(id)a0;
- (oneway void)forwardStreamObject:(id)a0;
- (id)initWithConnection:(id)a0;
- (oneway void)speechRequestDidStart:(id)a0;
- (oneway void)stopSpeechRequest:(id)a0 atMark:(long long)a1;
- (oneway void)startVoicePreviewForLanguageCode:(id)a0 voiceName:(id)a1 previewType:(long long)a2 reply:(id /* block */)a3;
- (oneway void)audioRequest:(id)a0 didReportInstrumentMetrics:(id)a1 error:(id)a2;
- (oneway void)getVoiceInfoForLanguageCode:(id)a0 name:(id)a1 footprint:(long long)a2 gender:(long long)a3 type:(long long)a4 reply:(id /* block */)a5;
- (void).cxx_destruct;
- (oneway void)startSynthesisRequest:(id)a0;
- (oneway void)getVoiceNamesForLanguage:(id)a0 reply:(id /* block */)a1;
- (oneway void)getVoiceResourceForLanguage:(id)a0 reply:(id /* block */)a1;
- (oneway void)speechRequest:(id)a0 didStopWithSuccess:(BOOL)a1 phonemesSpoken:(id)a2 error:(id)a3;
- (oneway void)getSubscribedVoiceAssetsWithClientID:(id)a0 forAccessoryID:(id)a1 reply:(id /* block */)a2;
- (oneway void)startPresynthesizedAudioRequest:(id)a0;
- (void)invalidate;
- (oneway void)prewarmIfNeededWithRequest:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (oneway void)synthesisRequest:(id)a0 didFinishWithInstrumentMetrics:(id)a1 error:(id)a2;
- (oneway void)pauseSpeechRequest:(id)a0 atMark:(long long)a1;
- (oneway void)getFootprintsForVoiceName:(id)a0 languageCode:(id)a1 reply:(id /* block */)a2;
- (id)_delegate;
- (oneway void)getSpeechIsActiveForConnectionReply:(id /* block */)a0;
- (oneway void)startSpeechRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)speechRequest:(id)a0 didReportInstrumentMetrics:(id)a1;
- (oneway void)cleanUnusedAssets:(id /* block */)a0;
- (oneway void)stopPresynthesizedAudioRequest:(id)a0;
- (oneway void)getSpeechIsActiveReply:(id /* block */)a0;

@end
