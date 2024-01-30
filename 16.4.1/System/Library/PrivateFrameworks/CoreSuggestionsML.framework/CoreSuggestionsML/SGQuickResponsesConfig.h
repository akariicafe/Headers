@class SGQuickResponsesReplies, NSArray, SGQuickResponsesClassificationParameters, NSString, SGQuickResponsesPredictionParameters, PMLSessionDescriptor, SGModelHyperparameters, SGCustomResponsesParameters;
@protocol PMLWordPieceVocabProtocol;

@interface SGQuickResponsesConfig : NSObject

@property (readonly, nonatomic) SGModelHyperparameters *modelHyperparameters;
@property (readonly, nonatomic) NSArray *preprocessingMethods;
@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) SGQuickResponsesReplies *replies;
@property (readonly, nonatomic) SGQuickResponsesClassificationParameters *classificationParams;
@property (readonly, nonatomic) SGQuickResponsesPredictionParameters *predictionParams;
@property (readonly, nonatomic) SGCustomResponsesParameters *customResponsesParameters;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor;
@property (readonly, nonatomic) id<PMLWordPieceVocabProtocol> vocab;

+ (id)_sharedCache;
+ (void)_addModelAssetUpdateHandler;
+ (id)_cacheKeyForLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2 vocabPath:(id)a3;
+ (id)_dictionaryForPlistPath:(id)a0 mode:(unsigned long long)a1;
+ (id)_vocabForVocabPath:(id)a0 mode:(unsigned long long)a1;
+ (id)configWithLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2 vocabPath:(id)a3;
+ (id)modelTypeAndSubModelKeyForLanguage:(id)a0 plistPath:(id)a1 vocabPath:(id)a2 warmupBlock:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0 mode:(unsigned long long)a1 dictionary:(id)a2 lazyVocab:(id)a3;
- (id)initWithLanguage:(id)a0 mode:(unsigned long long)a1 dictionary:(id)a2 vocab:(id)a3;
- (id)initWithLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2 vocabPath:(id)a3;
- (BOOL)isValidConfigForWordPieceWithLazyVocab:(id)a0;

@end
