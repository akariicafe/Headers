@class NSString, MLModel, NSMutableArray, NSNumber;

@interface _LTLanguageDetectorFeatureCombinationModel : NSObject {
    MLModel *_mlModel;
    NSString *_modelInput;
    NSString *_modelOutput;
    NSMutableArray *_features;
    NSNumber *_missingLanguageDetectorDefault;
}

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)getModelFeatures:(id)a0 canonicalPair:(id)a1 sourceSpeechResult:(id)a2 targetSpeechResult:(id)a3;
- (id)estimateLanguage:(id)a0 languageDetectionResult:(id)a1 finalSpeechResults:(id)a2;

@end
