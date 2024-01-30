@class CSNovDetector;
@protocol CSKeywordAnalyzerNDAPIScoreDelegate;

@interface CSKeywordAnalyzerNDAPI : NSObject {
    CSNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
}

@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) unsigned int activePhraseId;
@property (weak, nonatomic) id<CSKeywordAnalyzerNDAPIScoreDelegate> delegate;

- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)reset;
- (id)getAnalyzedResult;
- (void)processAudioChunk:(id)a0;
- (float)getThreshold;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (id)_keywordAnalyzerNDAPIResultForPhraseId:(unsigned int)a0 withNovDetectorResult:(id)a1;
- (void)resetBest;
- (float)getLoggingThreshold;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (id)getAnalyzedMpVtResults;
- (float)getRejectLoggingThreshold;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (void)_resetStartAnalyzeTime;

@end
