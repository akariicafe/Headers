@class VSStreamAudioData, VSCachingService, NSObject, VSSpeechRequest, VSPrewarmService, VSSiriInstrumentation, VSVoiceAssetSelection, NSString, VSAudioPlaybackService, VSAudioData, VSVoiceBooster, NSArray, VSInstrumentMetrics, VSSpeechEngine, VSVoiceResourceAsset, NSError;
@protocol VSSpeechServiceDelegate, VSSpeechCacheItem, OS_dispatch_queue;

@interface VSSpeechSpeakTask : NSOperation <VSSpeechSpeakableProtocol>

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

- (id)initWithRequest:(id)a0;
- (void)resumePlayback;
- (BOOL)isSpeaking;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (void)pausePlayback;
- (void)cancel;
- (void)fetchVoiceResource;
- (void)fetchVoiceAsset;
- (void)reportTimingInfo;
- (void)speakCachedAudio;
- (void)reportInstrumentMetrics;
- (void)enqueueCache;
- (void)reportFinish;
- (void)logFinish;
- (void)prepareForSynthesis;
- (void)startPlaybackServiceWithAudioSessionID:(unsigned int)a0;
- (void)reportSpeechStart;
- (void)adjustWordTimingInfo;
- (void)waitUntilAudioFinished;
- (id)taskHash;
- (id)audioPowerProvider;
- (void)synthesizeAndSpeak;
- (id)_fetchVoiceAsset_NoRetry;

@end
