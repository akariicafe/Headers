@class NSString, VTNovDetector;

@interface VTKeywordAnalyzerNDAPI : NSObject <VTKeywordAnalyzer> {
    VTNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    BOOL _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0;
- (void)_setStartAnalyzeTime:(unsigned long long)a0;
- (void)endAudio;
- (void).cxx_destruct;
- (void)_resetStartAnalyzeTime;
- (void)setStartSampleCount:(unsigned long long)a0;
- (void)resetWithLanguage:(id)a0 withSamplingRate:(long long)a1 withAudioSource:(id)a2;
- (void)processFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (void)processAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getDetailedResults;
- (id)getAnalyzerType;
- (id)_populateScoreForPhraseId:(unsigned int)a0 withNovDetectorResult:(id)a1;

@end
