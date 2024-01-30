@class SGQuickResponsesReplies, NSArray, SGQuickResponsesClassificationParameters, NSString, SGQuickResponsesPredictionParameters, PMLSessionDescriptor, SGModelHyperparameters, SGCustomResponsesParameters;

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

+ (id)_sharedCache;
+ (id)configWithLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2;
+ (void)_addModelAssetUpdateHandler;
+ (id)_cacheKeyForLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2;

- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2;
- (id)initWithLanguage:(id)a0 mode:(unsigned long long)a1 dictionary:(id)a2;

@end
