@class _EARSyncSpeechRecognizer, NSDictionary;

@interface VTSyncKeywordAnalyzerQuasar : NSObject {
    _EARSyncSpeechRecognizer *_syncRecognizer;
    BOOL _requireReset;
    BOOL _preventDuplicatedReset;
    NSDictionary *_phToPhIdMap;
    unsigned long long _numPhrases;
}

+ (id)_phToPhIdMapFromTriggerTokensArray:(id)a0;
+ (void)dumpEARSpeechRecognitionResults:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (id)_getAnalyzedResults:(id)a0;
- (void)flushAudio;
- (id)getResultsFromFlushedAudio;
- (id)initWithConfigPath:(id)a0 triggerTokensArray:(id)a1 preventDuplicatedReset:(BOOL)a2 memoryLock:(BOOL)a3;
- (id)getAnalyzedResultsFromFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResultsFromInt16AudioBuffer:(id)a0 numSamples:(unsigned long long)a1;

@end
