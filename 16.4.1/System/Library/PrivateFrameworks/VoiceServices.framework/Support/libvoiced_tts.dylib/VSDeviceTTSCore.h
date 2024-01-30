@class VSPrewarmService, NSError, VSStreamAudioData, VSSpeechEngine, VSVoiceAssetSelection, VSSpeechRequest, VSCachingService, VSVoiceBooster, VSInstrumentMetrics, VSAudioData, VSVoiceResourceAsset;
@protocol VSDeviceTTSCoreDelegate;

@interface VSDeviceTTSCore : NSOperation

@property (retain, nonatomic) VSCachingService *cachingService;
@property (retain, nonatomic) VSPrewarmService *prewarmService;
@property (retain, nonatomic) VSVoiceAssetSelection *selectedVoice;
@property (retain, nonatomic) VSVoiceResourceAsset *selectedVoiceResource;
@property (retain, nonatomic) VSVoiceBooster *voiceBooster;
@property (readonly, nonatomic) VSSpeechRequest *request;
@property (weak, nonatomic) id<VSDeviceTTSCoreDelegate> delegate;
@property (weak, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) VSAudioData *compressedAudio;
@property (readonly, nonatomic) VSStreamAudioData *streamAudio;
@property (retain, nonatomic) VSSpeechEngine *engine;

- (id)initWithRequest:(id)a0;
- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (void)reportProcessingWordTimingInfo:(id)a0;
- (id)getCacheForHash:(id)a0;
- (id)prepareForSynthesis;
- (void)reportAudio:(id)a0;
- (void)reportWordTimingInfo:(id)a0;
- (id)taskHash;
- (id)voiceSelectionWithRequest:(id)a0 error:(id *)a1;
- (id)voiceSelection_noRetry_WithRequest:(id)a0 error:(id *)a1;

@end
