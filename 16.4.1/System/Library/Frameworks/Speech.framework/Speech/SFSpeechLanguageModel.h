@class NSArray, NSDictionary, NSLocale, SFLocalSpeechRecognitionClient;

@interface SFSpeechLanguageModel : NSObject {
    SFLocalSpeechRecognitionClient *_lsrClient;
}

@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSArray *outOfVocabularyWords;
@property (readonly, copy, nonatomic) NSDictionary *outOfVocabularyWordsAndFrequencies;

+ (void)initialize;
+ (id)supportedLocales;
+ (void)trainAppLmFromNgramCountsArtifact:(id)a0 language:(id)a1 writeToDirectory:(id)a2 modelOverride:(id)a3 completion:(id /* block */)a4;
+ (void)trainAppLmFromNgramsSerializedDataFile:(id)a0 customPronsFile:(id)a1 language:(id)a2 writeToDirectory:(id)a3 modelOverride:(id)a4 completion:(id /* block */)a5;

- (void)addSentence:(id)a0;
- (id)metrics;
- (void)dealloc;
- (id)init;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)deserializeModelData:(id)a0;
- (long long)lmeThreshold;
- (id)addOovsFromSentence:(id)a0;
- (BOOL)addProns:(id)a0 forWord:(id)a1;
- (void)addPronsFromFile:(id)a0;
- (void)addSentences:(id)a0;
- (id)createNgramCountsArtifactFromPhraseCountArtifact:(id)a0 writeDirectory:(id)a1;
- (id)createNgramCountsArtifactWithIdentifier:(id)a0 rawPhraseCountsPath:(id)a1 customPronunciationsPath:(id)a2 writeDirectory:(id)a3;
- (id)createPhraseCountsArtifactWithIdentifier:(id)a0 rawPhraseCountsPath:(id)a1 customPronunciationsPath:(id)a2 writeDirectory:(id)a3;
- (void)generateNgramsSerializeDataAndWriteToFile:(id)a0;
- (id)initWithAssetPath:(id)a0;
- (BOOL)trainFromPlainTextAndWriteToDirectory:(id)a0;
- (void)trainFromPlainTextAndWriteToDirectory:(id)a0 completion:(id /* block */)a1;

@end
