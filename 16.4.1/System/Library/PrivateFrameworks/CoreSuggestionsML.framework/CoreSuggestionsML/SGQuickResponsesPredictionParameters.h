@class NSString;

@interface SGQuickResponsesPredictionParameters : NSObject

@property (readonly, nonatomic) BOOL isPersonalizationDisabled;
@property (readonly, nonatomic) BOOL isReplyTextRandomized;
@property (readonly, nonatomic) BOOL isPerCategory;
@property (readonly, nonatomic) double weightForCategoryAverage;
@property (readonly, nonatomic) double weightForCategoryMax;
@property (readonly, nonatomic) double weightForIndividualModel;
@property (readonly, nonatomic) double classDiscount;
@property (readonly, nonatomic) double responsesBonus;
@property (readonly, nonatomic) double minToShowThreshold;
@property (readonly, nonatomic) unsigned long long defaultResponsesToReturn;
@property (readonly, nonatomic) unsigned long long responsesToShowAtTopForDiversity;
@property (readonly, nonatomic) double personalizationExplorationFactor;
@property (readonly, nonatomic) double personalizationDisplayedPseudocount;
@property (readonly, nonatomic) double personalizationSelectedPseudocountPerSemanticClass;
@property (readonly, nonatomic) unsigned long long maxPromptLength;
@property (readonly, nonatomic) double maxPromptWindowSeconds;
@property (readonly, nonatomic) NSString *promptJoiningString;
@property (readonly, nonatomic) NSString *modelTypeName;
@property (readonly, nonatomic) NSString *subModelKeyString;
@property (readonly, nonatomic) BOOL modelFeaturizationFormatOptionIsDense;
@property (readonly, nonatomic) BOOL dynamicLabelsEnabled;
@property (readonly, nonatomic) BOOL hasNegativeClass;
@property (readonly, nonatomic) double negativeClassMaximumToPredict;
@property (readonly, nonatomic) BOOL filterNonConfident;

+ (id)_modelTypeNameForDictionary:(id)a0;
+ (id)_subModelKeyStringForDictionary:(id)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
