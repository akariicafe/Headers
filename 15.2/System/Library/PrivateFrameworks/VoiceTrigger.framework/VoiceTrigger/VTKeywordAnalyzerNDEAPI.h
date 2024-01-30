@class NSString, NSMutableData, VTKeywordAnalyzerResults;

@interface VTKeywordAnalyzerNDEAPI : NSObject <VTKeywordAnalyzer> {
    void **_ndeObject;
    NSMutableData *_currentBlob;
    VTKeywordAnalyzerResults *_lastResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0;
- (void)endAudio;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlob:(id)a0;
- (void)setStartSampleCount:(unsigned long long)a0;
- (void)resetWithLanguage:(id)a0 withSamplingRate:(long long)a1 withAudioSource:(id)a2;
- (void)processFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (void)processAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getDetailedResults;
- (id)getAnalyzerType;
- (id)_checkForTriggerWithBytes:(const short *)a0 withNumberOfSamples:(long long)a1;

@end
