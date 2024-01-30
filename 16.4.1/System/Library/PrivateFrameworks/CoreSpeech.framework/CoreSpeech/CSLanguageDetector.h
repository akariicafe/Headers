@class CSStartOfSpeechDetector, NSString, _EARLanguageDetectorAudioBuffer, CSAudioCircularBuffer, NSMutableArray, CSAsset, NSObject, _EARLanguageDetector;
@protocol OS_dispatch_queue, CSLanguageDetectorDelegate;

@interface CSLanguageDetector : NSObject <_EARLanguageDetectorDelegate, CSStartOfSpeechDetectorDelegate>

@property (retain, nonatomic) _EARLanguageDetector *languageDetector;
@property (retain, nonatomic) _EARLanguageDetectorAudioBuffer *audioBuffer;
@property (retain, nonatomic) CSStartOfSpeechDetector *startOfSpeechDetector;
@property (retain, nonatomic) CSAudioCircularBuffer *circBuffer;
@property (nonatomic) BOOL startOfSpeechDetected;
@property (nonatomic) BOOL needsToUpdateModel;
@property (nonatomic) long long currentState;
@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSMutableArray *latestDetectedLanguages;
@property (nonatomic) unsigned long long numLatestLanguages;
@property (copy, nonatomic) NSString *languageDetectorAssetHash;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (copy, nonatomic) NSString *interactionID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSLanguageDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)endAudio;
- (id)init;
- (void).cxx_destruct;
- (void)cancelCurrentRequest;
- (id)initWithModelURL:(id)a0;
- (void)languageDetector:(id)a0 result:(id)a1;
- (void)languageDetectorDidCompleteProcessing:(id)a0 loggingInfo:(id)a1;
- (void)addSamples:(id)a0 numSamples:(unsigned long long)a1;
- (id)_constructLangPriors;
- (id)_getDefaultValues;
- (void)_initializeStartOfSpeechDetector:(id)a0 samplingRate:(float)a1;
- (void)_logLanguageDetectorMetricsForLoggingInfo:(id)a0;
- (void)_logSoSResult:(id)a0 toPath:(id)a1;
- (id)_readJsonDictionaryAt:(id)a0;
- (void)_recordRecognitionLanguage:(id)a0;
- (void)_resetStartOfSpeechDetector;
- (void)_setNumLatestLangFromConfigFile:(id)a0;
- (void)_setupLanguageDetectorWithOption:(id)a0;
- (void)_startMonitorLanguageDetectorAssetDownload;
- (void)recordRecognitionLanguage:(id)a0;
- (void)resetForNewRequest:(id)a0;
- (void)setInteractionIDforCurrentRequest:(id)a0;
- (void)setMostRecentRecognitionLanguage:(id)a0;
- (void)startOfSpeechDetector:(id)a0 foundStartSampleAt:(unsigned long long)a1;

@end
