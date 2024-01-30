@class NSString, NSDictionary, NSArray, _EARSyncSpeechRecognizer, NSObject;
@protocol OS_dispatch_queue;

@interface VTKeywordAnalyzerQuasar : NSObject <VTKeywordAnalyzer> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_lastReportedRecogResults;
    NSArray *_triggerTokenList;
    _EARSyncSpeechRecognizer *_syncRecognizer;
    BOOL _useKeywordSpotting;
}

@property (retain, nonatomic) NSDictionary *ctcKwdToPhraseIdMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0;
- (void)endAudio;
- (void)setStartSampleCount:(unsigned long long)a0;
- (void)resetWithLanguage:(id)a0 withSamplingRate:(long long)a1 withAudioSource:(id)a2;
- (void)processFloatAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (void)processAudioBuffer:(id)a0 numSamples:(unsigned long long)a1;
- (id)getDetailedResults;
- (id)getAnalyzerType;

@end
