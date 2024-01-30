@class NSArray, NSDictionary, _EARSyncSpeechRecognizer, NSMutableArray;

@interface CSSyncKeywordAnalyzerQuasar : NSObject {
    NSMutableArray *_previousUtteranceTokens;
    NSArray *_lastReportedRecogResults;
    NSArray *_triggerTokenList;
    _EARSyncSpeechRecognizer *_syncRecognizer;
    BOOL _useKeywordSpotting;
    BOOL _requireReset;
    BOOL _preventDuplicatedReset;
}

@property (nonatomic) double triggerConfidence;
@property (nonatomic) unsigned long long activeChannel;
@property (retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap;
@property (readonly, nonatomic) NSDictionary *phraseIdScores;

+ (void)dumpEARSpeechRecognitionResults:(id)a0;

- (void)processAudioChunk:(id)a0;
- (void).cxx_destruct;
- (void)_calculateTriggerConfidence:(id)a0;
- (double)_getConfidence:(id)a0;
- (id)initWithConfigPath:(id)a0 triggerTokens:(id)a1 useKeywordSpotting:(BOOL)a2 preventDuplicatedReset:(BOOL)a3;
- (void)resetWithLanguage:(id)a0 withFarField:(unsigned char)a1 withAudioSource:(id)a2;
- (void)flushAudio;

@end
