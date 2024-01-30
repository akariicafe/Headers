@class VSCachingService, VSDeviceTTSCore, VSSpeechRequest, VSOspreyTTSCore, VSSiriServerConfiguration, VSSiriInstrumentation, NSString, VSAudioPlaybackService, VSAudioData, VSInstrumentMetrics, NSArray, VSSpeechInternalSettings, NSError;
@protocol VSSpeechServiceDelegate;

@interface VSSpeechServerTask : NSOperation <VSDeviceTTSCoreDelegate, VSOspreyTTSCoreDelegate, VSSpeechSpeakableProtocol, VSSpeechEagerProtocol>

@property (nonatomic) BOOL shouldSpeak;
@property (nonatomic) BOOL isNeuralFallbackCondition;
@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSAudioPlaybackService *playbackService;
@property (retain, nonatomic) NSArray *wordTimingInfo;
@property (nonatomic) struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } timeoutCondition;
@property (nonatomic) BOOL readyForEagerTask;
@property (retain, nonatomic) VSSpeechServerTask *speakTask;
@property (retain, nonatomic) VSDeviceTTSCore *synthesisCore;
@property (nonatomic) BOOL useServerResponse;
@property (nonatomic) BOOL useDeviceSynthesis;
@property (nonatomic) BOOL speechStartReported;
@property (nonatomic) BOOL isEagerCache;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } racingMutex;
@property (retain, nonatomic) VSAudioData *serverAudio;
@property (retain, nonatomic) NSArray *deferredTTSTimingInfo;
@property (retain, nonatomic) VSSiriInstrumentation *siriInstrumentation;
@property (retain, nonatomic) VSSpeechInternalSettings *internalSettings;
@property (retain, nonatomic) VSOspreyTTSCore *ospreyCore;
@property (retain, nonatomic) VSCachingService *cachingService;
@property (retain, nonatomic) VSSiriServerConfiguration *serverTTSConfig;
@property (weak, nonatomic) id<VSSpeechServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSpeaking;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (id)voiceKey;
- (void)dealloc;
- (void)cancel;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;
- (id)taskHash;
- (id)audioPowerProvider;
- (id)enqueueAudioData:(id)a0;
- (BOOL)shouldRelyOnServerTTS;
- (BOOL)shouldDeferDeviceTTS;
- (void)proceedWithSpeechCache:(id)a0;
- (id)eagerTaskHashForRequest:(id)a0;
- (void)proceedWithServerTTS;
- (void)writeAudioIfNeeded:(id)a0;
- (void)speakRetryPhrase;
- (void)fallbackToDeviceSynthesis;
- (id)handleDeviceSynthesis:(id)a0 timingInfo:(id)a1;
- (id)handleServerResponse:(id)a0 timingInfo:(id)a1;
- (void)synthesisCore:(id)a0 didReceiveAudio:(id)a1;
- (void)synthesisCore:(id)a0 didReceiveWordTimingInfo:(id)a1;
- (void)ospreyCore:(id)a0 didReceiveAudio:(id)a1 wordTimingInfo:(id)a2;
- (void)ospreyCore:(id)a0 didFinishWithError:(id)a1;
- (id)initWithRequest:(id)a0 shouldSpeak:(BOOL)a1;
- (void)broadcastTimeoutCondition;

@end
