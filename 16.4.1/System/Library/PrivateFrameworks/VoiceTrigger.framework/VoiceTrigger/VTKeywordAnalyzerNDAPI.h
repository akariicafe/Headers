@class VTNovDetector;

@interface VTKeywordAnalyzerNDAPI : NSObject {
    VTNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
}

@property (nonatomic) unsigned int activePhId;

- (float)getRejectLoggingThreshold;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void)_resetStartAnalyzeTime;
- (void)resetBest;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)a0 phId:(unsigned long long)a1;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (float)getLoggingThreshold;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (float)getThreshold;
- (id)getBestAnalyzedResults;
- (void).cxx_destruct;
- (void)reset;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResults;
- (void)_processAudioFloatBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (void)_processAudioInt16Buffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResultsFromFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResultsFromInt16AudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getBestAnalyzedResultsFromFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getBestAnalyzedResultsFromInt16AudioBuffer:(id)a0 numSamples:(unsigned long long)a1;

@end
