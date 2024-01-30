@class NSString;

@interface UPModelConfiguration : NSObject

@property (readonly, copy) NSString *bioLabelsVocabPath;
@property (readonly, copy) NSString *configPath;
@property (readonly, copy) NSString *grammarPath;
@property (readonly, copy) NSString *intentVocabPath;
@property (readonly, copy) NSString *spanVocabPath;
@property (readonly, copy) NSString *parserEspressoModelPath;
@property (readonly, copy) NSString *calibrationEspressoModelPath;
@property (readonly, copy) NSString *espressoModelPath;

+ (id)_configurationWithBioLabelsVocabPath:(id)a0 configPath:(id)a1 grammarPath:(id)a2 intentVocabPath:(id)a3 spanVocabPath:(id)a4 parserEspressoModelPath:(id)a5 calibrationEspressoModelPath:(id)a6 error:(id *)a7;
+ (id)configurationFromDirectoryUrl:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)_initWithBioLabelsVocabPath:(id)a0 configPath:(id)a1 grammarPath:(id)a2 intentVocabPath:(id)a3 spanVocabPath:(id)a4 parserEspressoModelPath:(id)a5 calibrationEspressoModelPath:(id)a6;

@end
