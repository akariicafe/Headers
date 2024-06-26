@class VSCachingService, VSDeviceTTSCore, VSSpeechRequest, VSOspreyTTSCore, VSSiriServerConfiguration, NSString, VSAudioPlaybackService, VSAudioData, VSInstrumentMetrics, NSArray, VSSpeechInternalSettings, NSError;
@protocol VSSpeechServiceDelegate;

@interface VSSpeechServerTask : NSOperation <VSDeviceTTSCoreDelegate, VSOspreyTTSCoreDelegate, VSSpeechSpeakableProtocol, VSSpeechEagerProtocol>

@property (nonatomic) BOOL shouldSpeak;
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
@property (nonatomic) BOOL disableOsprey;
@property (nonatomic) long long aceChannelRetryTimes;
@property (nonatomic) long long serverTTSRetryTimes;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } racingMutex;
@property (retain, nonatomic) VSAudioData *serverAudio;
@property (retain, nonatomic) NSArray *deferredTTSTimingInfo;
@property (retain, nonatomic) VSSpeechInternalSettings *internalSettings;
@property (retain, nonatomic) VSOspreyTTSCore *ospreyCore;
@property (retain, nonatomic) VSCachingService *cachingService;
@property (retain, nonatomic) VSSiriServerConfiguration *serverTTSConfig;
@property (weak, nonatomic) id<VSSpeechServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)main;
- (id)voiceKey;
- (void)resume;
- (BOOL)isSpeaking;
- (void)suspend;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;
- (id)taskHash;
- (id)audioPowerProvider;
- (id)playAudioData:(id)a0;
- (BOOL)shouldDeferDeviceTTS;
- (void)proceedWithSpeechCache:(id)a0;
- (id)eagerTaskHashForRequest:(id)a0;
- (void)proceedWithServerTTS;
- (void)writeAudioIfNeeded:(id)a0;
- (id)handleServerResponse:(id)a0 timingInfo:(id)a1;
- (void)broadcastTimeoutCondition;
- (void)startSiriRoundTrip;
- (void)waitSiriRoundTripToFinish;
- (void)speakRetryPhrase;
- (void)fallbackToDeviceSynthesis;
- (id)stringOfSourceOfTTS:(long long)a0;
- (id)handleDeviceSynthesis:(id)a0 timingInfo:(id)a1;
- (void)synthesisCore:(id)a0 didReceiveAudio:(id)a1;
- (void)synthesisCore:(id)a0 didReceiveWordTimingInfo:(id)a1;
- (void)ospreyCore:(id)a0 didReceiveAudio:(id)a1 wordTimingInfo:(id)a2;
- (void)ospreyCore:(id)a0 didFinishWithError:(id)a1;
- (id)initWithRequest:(id)a0 shouldSpeak:(BOOL)a1;

@end
