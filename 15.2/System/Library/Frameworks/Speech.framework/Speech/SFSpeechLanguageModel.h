@class _EARAppLmData, NSArray, NSDictionary, NSString, NSLocale, _EARLmModel, NSMutableDictionary;

@interface SFSpeechLanguageModel : NSObject {
    _EARAppLmData *_appLmData;
    NSString *_recognizerConfigFilePath;
    _EARLmModel *_model;
    NSMutableDictionary *_oovDict;
}

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSArray *outOfVocabularyWords;
@property (readonly, copy, nonatomic) NSDictionary *outOfVocabularyWordsAndFrequencies;

+ (void)initialize;
+ (id)supportedLocales;
+ (void)trainAppLmFromNgramsSerializedDataFile:(id)a0 customPronsFile:(id)a1 language:(id)a2 writeToDirectory:(id)a3 modelOverride:(id)a4 completion:(id /* block */)a5;

- (id)initWithLocale:(id)a0;
- (void)addSentence:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (id)init;
- (id)deserializeModelData:(id)a0;
- (long long)lmeThreshold;
- (id)initWithAssetPath:(id)a0;
- (BOOL)addProns:(id)a0 forWord:(id)a1;
- (void)addSentences:(id)a0;
- (id)addOovsFromSentence:(id)a0;
- (void)trainFromPlainTextAndWriteToDirectory:(id)a0 completion:(id /* block */)a1;
- (BOOL)trainFromPlainTextAndWriteToDirectory:(id)a0;
- (void)generateNgramsSerializeDataAndWriteToFile:(id)a0;
- (void)addPronsFromFile:(id)a0;

@end
