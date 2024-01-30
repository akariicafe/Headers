@class NSString, NSArray;

@interface PPFeaturizerModel : NSObject <MLCustomModel> {
    NSString *_inputName;
    NSString *_outputName;
    NSString *_operation;
    NSArray *_param;
}

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
