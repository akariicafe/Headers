@class NSString;

@interface PPDictionaryModel : NSObject <MLCustomModel> {
    NSString *_outputName;
    NSString *_inputName;
}

+ (BOOL)wordIsDefined:(id)a0 locale:(id)a1;

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
