@class VTKeywordDetectorAssets, NSMutableArray, VTKeywordDetectorContext;
@protocol VTKeywordDetectorDelegate;

@interface VTKeywordDetector : NSObject

@property (retain, nonatomic) NSMutableArray *analyzers;
@property (retain, nonatomic) VTKeywordDetectorAssets *asset;
@property (retain, nonatomic) VTKeywordDetectorContext *context;
@property (weak, nonatomic) id<VTKeywordDetectorDelegate> delegate;

- (id)_fetchResults;
- (void)endAudio;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 withDelegate:(id)a1 error:(id *)a2;
- (void)setStartSampleCount:(unsigned long long)a0;
- (void)processAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getKeywordDetectorResults;
- (id)_analyzeAndConstructFinalResults:(id)a0;
- (float)_getScoreForPhraseId:(unsigned long long)a0 withScaleFactor:(float)a1 fromResults:(id)a2;
- (void)resetWithSamplingRate:(long long)a0 withAudioSource:(id)a1;
- (id)getKeywordDetectorDetailedResults;

@end
