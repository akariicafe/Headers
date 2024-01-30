@class VSCachingService, VSStreamAudioData, NSObject, VSSpeechRequest, VSPrewarmService, VSSiriInstrumentation, VSVoiceAssetSelection, NSString, VSAudioPlaybackService, VSAudioData, VSVoiceBooster, NSArray, VSInstrumentMetrics, VSSpeechEngine, VSVoiceResourceAsset, NSError;
@protocol VSSpeechServiceDelegate, VSSpeechCacheItem, OS_dispatch_semaphore, OS_dispatch_queue;

@interface VSSpeechSpeakTask : NSOperation <VSSpeechSpeakableProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *neuralPlaybackSemaphore;
@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) NSArray *timingInfos;
@property (weak, nonatomic) id<VSSpeechServiceDelegate> delegate;
@property (retain, nonatomic) VSSpeechEngine *engine;
@property (retain, nonatomic) VSVoiceBooster *voiceBooster;
@property (retain, nonatomic) VSAudioPlaybackService *playbackService;
@property (retain, nonatomic) VSVoiceAssetSelection *voiceSelection;
@property (retain, nonatomic) VSVoiceResourceAsset *voiceResource;
@property (retain, nonatomic) VSCachingService *cachingService;
@property (retain, nonatomic) VSPrewarmService *prewarmService;
@property (nonatomic) BOOL synthesisHasIssue;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) VSSiriInstrumentation *siriInstrumentation;
@property (retain, nonatomic) id<VSSpeechCacheItem> speechCache;
@property (retain, nonatomic) NSArray *phonemes;
@property (retain, nonatomic) VSAudioData *compressedAudio;
@property (retain, nonatomic) VSStreamAudioData *streamAudio;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskAuxiliaryQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSpeaking;
- (id)initWithRequest:(id)a0;
- (void)main;
- (void)suspend;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)resumePlayback;
- (void)pausePlayback;
- (void)fetchVoiceAsset;
- (id)_fetchVoiceAsset_NoRetry;
- (id)audioPowerProvider;
- (void)enqueueCache;
- (void)fetchVoiceResource;
- (void)logFinish;
- (void)prepareForSynthesis;
- (void)reportFinish;
- (void)reportInstrumentMetrics;
- (void)reportSpeechStart;
- (void)reportTimingInfo;
- (void)setObserverForWordTimings:(id)a0;
- (void)speakCachedAudio;
- (void)startPlaybackServiceWithAudioSessionID:(unsigned int)a0;
- (void)synthesizeAndSpeak;
- (id)taskHash;
- (void)waitUntilAudioFinished;

@end
