@class NSRegularExpression, NSString;

@interface PPRegexModel : NSObject <MLCustomModel> {
    NSRegularExpression *_regex;
    NSString *_inputName;
    NSString *_outputName;
}

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
