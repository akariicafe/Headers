@class CSSyncKeywordAnalyzerQuasar, NSMutableArray, CSKeywordAnalyzerNDAPI;

@interface CSPhraseDetector : NSObject

@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *syncKeywordAnalyzerNDAPI;
@property (retain, nonatomic) CSSyncKeywordAnalyzerQuasar *syncKeywordAnalyzerQuasar;
@property (retain, nonatomic) NSMutableArray *phraseDetectorInfos;
@property (nonatomic) unsigned long long nearMissDelayTimeout;
@property (nonatomic) unsigned long long nearMissCandidateDetectedSamples;
@property (nonatomic) BOOL isSecondChance;
@property (retain, nonatomic) NSMutableArray *phraseResult;

- (void)setActiveChannel:(unsigned long long)a0;
- (void)setConfig:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)_getResultWithPhId:(unsigned long long)a0 phraseDetectorInfo:(id)a1 ndapiResult:(id)a2 quasarResult:(id)a3 forceMaximized:(BOOL)a4;
- (BOOL)_isSecondChanceCandidateWithScore:(float)a0 effectiveThreshold:(float)a1 secondChanceThreshold:(float)a2;
- (id)_phraseDetectorResultFromNDAPIResults:(id)a0 quasarResult:(id)a1 forceMaximized:(BOOL)a2;
- (id)_resultCopyWithKeywordDetectorDecision:(unsigned long long)a0 bestPhId:(unsigned long long)a1 phraseResult:(id)a2;
- (id)getAnalyzedResultFromAudioChunk:(id)a0;
- (id)getAnalyzedResultFromFlushedAudio;
- (id)getLosingPhraseResultsWithDetectedPhId:(unsigned long long)a0;
- (id)phraseDetectorInfoFromPhId:(unsigned long long)a0;
- (void)setRunAsSecondChance:(BOOL)a0;

@end
