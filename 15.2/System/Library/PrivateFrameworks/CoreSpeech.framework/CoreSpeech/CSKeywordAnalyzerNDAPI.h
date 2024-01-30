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

- (void)processAudioChunk:(id)a0;
- (id)getSuperVectorWithEndPoint:(unsigned long long)a0;
- (id)_keywordAnalyzerNDAPIResultForPhraseId:(unsigned int)a0 withNovDetectorResult:(id)a1;
- (void)resetBest;
- (id)initWithConfigPath:(id)a0 resourcePath:(id)a1;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (id)getAnalyzedResult;
- (float)getThreshold;
- (void).cxx_destruct;
- (id)getAnalyzedMpVtResults;
- (float)getLoggingThreshold;
- (void)analyzeWavFloatData:(id)a0 numSamples:(unsigned long long)a1;
- (void)analyzeWavData:(id)a0 numSamples:(unsigned long long)a1;
- (void)_resetStartAnalyzeTime;
- (float)getRejectLoggingThreshold;
- (void)reset;

@end
