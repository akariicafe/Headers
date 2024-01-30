@class AXKonaMarker, NSMutableArray, NSArray, AVAudioConverter, NSCondition, NSDictionary, NLTokenizer, AXKonaVoice, NSObject, AVAudioFormat, AXKonaParameters, NSRegularExpression;
@protocol OS_dispatch_queue;

@interface AXKonaSpeechEngine : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferLock;
    short _pSampleBuffer[512];
}

@property (nonatomic) void *wrappedInstance;
@property (nonatomic) void *currentDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synthesizerSyncQueue;
@property (retain, nonatomic) AXKonaVoice *currentVoice;
@property (retain, nonatomic) NLTokenizer *tokenizer;
@property (retain, nonatomic) AXKonaParameters *currentParameters;
@property (retain, nonatomic) NSDictionary *configurationMap;
@property (retain, nonatomic) NSArray *currentSpeechSegments;
@property (retain, nonatomic) AXKonaMarker *currentMarker;
@property (nonatomic) unsigned int currentFrameCount;
@property (retain, nonatomic) AVAudioConverter *bufferConverter;
@property (nonatomic) float lastSampVal;
@property (retain, nonatomic) AVAudioFormat *engineFormat;
@property (retain, nonatomic) AVAudioFormat *outputFormat;
@property (retain, nonatomic) NSRegularExpression *commandRegex;
@property (nonatomic) unsigned long long synthState;
@property (retain, nonatomic) NSMutableArray *queuedBuffers;
@property (retain, nonatomic) NSCondition *producedBuffers;
@property (retain, nonatomic) NSCondition *consumedBuffers;
@property (retain, nonatomic) AXKonaParameters *parameters;

+ (id)allVoices;

- (void)setVoice:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)synthesizeText:(id)a0;
- (void)_enqueueBuffer:(id)a0;
- (void)cancelSynthesis;
- (void)_cancelSynthesis;
- (void)_initializeConfigurationMap;
- (BOOL)_initializeWrappedEngineForVoice:(id)a0;
- (id)_konaCrashPatterns;
- (BOOL)_loadDictionaryAtPath:(id)a0 type:(long long)a1 handle:(void *)a2;
- (void)_loadDictionaryForVoice:(id)a0;
- (id)_preprocessTextForIrregularities:(id)a0;
- (id)_segmentsForText:(id)a0;
- (long long)eciCallback:(long long)a0 iParam:(long long)a1 instanceData:(void *)a2;
- (id)initWithVoice:(id)a0;
- (id)nextBuffer;

@end
