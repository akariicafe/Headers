@class NSString, AFAudioPowerUpdater, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface VSSpeechXPCHandler : NSObject <VSSpeechXPCServiceProtocol, VSSpeechServiceDelegate> {
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSString *connectionIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioPowerUpdateQueue;
@property (retain, nonatomic) AFAudioPowerUpdater *audioPowerUpdater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)getLogToFile:(id /* block */)a0;
- (oneway void)endAudioPowerUpdate;
- (oneway void)speechRequestDidPause;
- (oneway void)updateWithConnectionIdentifier:(id)a0;
- (void).cxx_destruct;
- (oneway void)getLocalVoiceResourcesReply:(id /* block */)a0;
- (oneway void)estimateDurationWithRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)synthesisRequest:(id)a0 didReceiveTimingInfo:(id)a1;
- (oneway void)startSpeechRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)prewarmIfNeededWithRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)speechRequestDidStopWithSuccess:(BOOL)a0 phonemesSpoken:(id)a1 error:(id)a2;
- (void)dealloc;
- (oneway void)triggerCellularDownloadedVoiceAssets:(id)a0 withClientID:(id)a1;
- (oneway void)cleanUnusedAssets:(id /* block */)a0;
- (oneway void)getSpeechIsActiveReply:(id /* block */)a0;
- (oneway void)getTTSServerVoicesWithFilter:(id)a0 reply:(id /* block */)a1;
- (oneway void)speechRequestMark:(long long)a0 didStartForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (oneway void)pauseSpeechRequestAtMark:(long long)a0;
- (oneway void)beginAudioPowerUpdateWithReply:(id /* block */)a0;
- (id)initWithConnection:(id)a0;
- (oneway void)speechRequestDidStart;
- (id)_delegate;
- (oneway void)getVoiceNamesForLanguage:(id)a0 reply:(id /* block */)a1;
- (oneway void)cachePresynthesizedAudioRequest:(id)a0;
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)a0 error:(id)a1;
- (oneway void)continueSpeechRequest;
- (oneway void)getAutoDownloadedVoiceAssetsWithClientID:(id)a0 reply:(id /* block */)a1;
- (void)preprocessRequestBeforeSynthesis:(id)a0;
- (oneway void)killDaemon;
- (oneway void)forwardStreamObject:(id)a0;
- (oneway void)setAutoDownloadedVoiceAssets:(id)a0 withClientID:(id)a1;
- (oneway void)getLocalVoicesForLanguage:(id)a0 reply:(id /* block */)a1;
- (oneway void)stopSpeechRequestAtMark:(long long)a0;
- (oneway void)getFootprintsForVoiceName:(id)a0 languageCode:(id)a1 reply:(id /* block */)a2;
- (oneway void)getSpeechIsActiveForConnectionReply:(id /* block */)a0;
- (oneway void)cancelDownloads:(id /* block */)a0;
- (oneway void)startSynthesisRequest:(id)a0;
- (oneway void)setLogToFile:(BOOL)a0;
- (oneway void)speechRequestDidReceiveTimingInfo:(id)a0;
- (oneway void)speechRequestDidContinue;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(BOOL)a0 error:(id)a1;
- (BOOL)isSpeaking;
- (oneway void)getVoiceResourceForLanguage:(id)a0 reply:(id /* block */)a1;
- (oneway void)stopPresynthesizedAudioRequest;
- (oneway void)synthesisRequest:(id)a0 didFinishWithInstrumentMetrics:(id)a1 error:(id)a2;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(id)a0;
- (oneway void)startPresynthesizedAudioRequest:(id)a0;
- (oneway void)invokeDaemon:(id /* block */)a0;
- (oneway void)presynthesizedAudioRequestDidStart;
- (void)performLanguageFallBackIfNeededWithRequest:(id)a0;
- (oneway void)queryPhaticCapabilityWithRequest:(id)a0 reply:(id /* block */)a1;
- (oneway void)getVoiceInfoForLanguageCode:(id)a0 footprint:(long long)a1 gender:(long long)a2 type:(long long)a3 reply:(id /* block */)a4;

@end
