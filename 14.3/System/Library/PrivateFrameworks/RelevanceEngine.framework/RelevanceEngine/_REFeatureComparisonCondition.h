@class REFeature;

@interface _REFeatureComparisonCondition : REComparisonCondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) REFeature *leftFeature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) REFeature *rightFeature;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_notCondition;
- (id)_inflectionFeatureValuePairs;
- (id)_dependentFeatures;
- (BOOL)_requiresTwoFeatures;
- (BOOL)_validForRanking;
- (BOOL)_acceptsLeftFeatureMap:(id)a0 rightFeatureMap:(id)a1;
- (id)initWithLeftFeature:(id)a0 relation:(long long)a1 rightFeature:(id)a2;

@end
