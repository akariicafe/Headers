@class NSMutableDictionary, MLModel, MLPredictionOptions, NSDictionary, NSString;

@interface SLUresMitigator : NSObject {
    MLModel *_uresModel;
    MLPredictionOptions *_options;
    NSDictionary *_inputOpsMap;
    NSDictionary *_outputMap;
    NSMutableDictionary *_thresholdMap;
    NSString *_version;
}

+ (id)getTranscriptionForSpeechPackage:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_createInputOriginThresholdMap:(id)a0;
- (id)_convertMultiArrayToNSArray:(id)a0 withShape:(id)a1;
- (id)_convertNSArrayToMultiArray:(id)a0 withShape:(id)a1;
- (id)_processInputFeats:(id)a0;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (void)processInputFeats:(id)a0 completion:(id /* block */)a1;

@end
