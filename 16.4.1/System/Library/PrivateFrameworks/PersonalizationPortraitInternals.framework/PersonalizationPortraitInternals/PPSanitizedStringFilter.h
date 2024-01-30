@class NSString;

@interface PPSanitizedStringFilter : NSObject <MLCustomModel> {
    NSString *_inputName;
    NSString *_outputName;
}

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
