@class NSObject, NSString, _LTTranslationContext, CSLanguageDetector, NSMutableDictionary, _LTLanguageDetectionResult, _LTLanguageDetectorFeatureCombinationModel;
@protocol OS_dispatch_queue, _LTSpeechTranslationDelegate;

@interface _LTLanguageDetector : NSObject <CSLanguageDetectorDelegate> {
    _LTTranslationContext *_context;
    CSLanguageDetector *_csLanguageDetector;
    float _sourceLocaleConfidenceThreshold;
    float _targetLocaleConfidenceThreshold;
    BOOL _endAudioCalled;
    NSMutableDictionary *_finalSpeechResults;
    unsigned long long _lidSignpostID;
    NSObject<OS_dispatch_queue> *_resultQueue;
    id<_LTSpeechTranslationDelegate> _delegate;
}

@property (retain, nonatomic) _LTLanguageDetectionResult *lastResult;
@property (nonatomic) BOOL featureCombinationModelSupported;
@property (retain, nonatomic) _LTLanguageDetectorFeatureCombinationModel *featureCombinationModel;
@property (readonly, nonatomic) double samplingRate;
@property (readonly, nonatomic) long long audioBitDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)endAudio;
- (void)sendFinalLanguageDetectionResult;
- (void)languageDetectorDidDetectLanguageWithConfidence:(id)a0 confidence:(id)a1 isConfident:(BOOL)a2;
- (void)startLanguageDetectionWithContext:(id)a0 delegate:(id)a1;
- (void)addSpeechRecognitionResult:(id)a0;
- (void)addSpeechAudioData:(id)a0;
- (void)cancelLanguageDetection;

@end
