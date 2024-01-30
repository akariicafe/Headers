@class CSNovDetector;

@interface CSKeywordAnalyzerNDAPI : NSObject {
    CSNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) unsigned int activePhId;

- (float)getRejectLoggingThreshold;
- (id)getBestAnalyzedResultsFromAudioChunk:(id)a0;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void)_resetStartAnalyzeTime;
- (void)resetBest;
- (void)_processAudioChunk:(id)a0;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (id)_keywordAnalyzerNDAPIResultFromNovDetectorResult:(id)a0 phId:(unsigned long long)a1;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (float)getLoggingThreshold;
- (id)getAnalyzedResultsFromAudioChunk:(id)a0;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (float)getThreshold;
- (id)getBestAnalyzedResults;
- (void).cxx_destruct;
- (void)reset;
- (void)processAudioChunk:(id)a0;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedResults;

@end
