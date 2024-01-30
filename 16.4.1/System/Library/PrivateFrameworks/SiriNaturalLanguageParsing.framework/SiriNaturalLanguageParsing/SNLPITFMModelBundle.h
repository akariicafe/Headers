@class NSURL;

@interface SNLPITFMModelBundle : NSObject

@property (readonly, nonatomic) NSURL *espressoModelURL;
@property (readonly, nonatomic) NSURL *configURL;
@property (readonly, nonatomic) NSURL *contextVocabularyURL;
@property (readonly, nonatomic) NSURL *spanVocabularyURL;
@property (readonly, nonatomic) NSURL *targetVocabularyURL;
@property (readonly, nonatomic) NSURL *versionURL;

+ (id)_errorForMissingResourceURL:(id)a0 errorDomain:(id)a1;
+ (id)_existErrorForEspressoModelURL:(id)a0 configURL:(id)a1 contextVocabularyURL:(id)a2 spanVocabularyURL:(id)a3 targetVocabularyURL:(id)a4 versionURL:(id)a5 errorDomain:(id)a6;
+ (id)bundleWithEspressoModelURL:(id)a0 configURL:(id)a1 contextVocabularyURL:(id)a2 spanVocabularyURL:(id)a3 targetVocabularyURL:(id)a4 versionURL:(id)a5 errorDomain:(id)a6 error:(id *)a7;

- (void).cxx_destruct;
- (id)_initWithEspressoModelURL:(id)a0 configURL:(id)a1 contextVocabularyURL:(id)a2 spanVocabularyURL:(id)a3 targetVocabularyURL:(id)a4 versionURL:(id)a5;

@end
