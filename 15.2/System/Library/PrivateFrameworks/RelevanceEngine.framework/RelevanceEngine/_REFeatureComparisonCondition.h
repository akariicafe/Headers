@class REFeature;

@interface _REFeatureComparisonCondition : REComparisonCondition <REAutomaticExportedInterface>

@property (readonly, nonatomic) REFeature *leftFeature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) REFeature *rightFeature;

- (id)_dependentFeatures;
- (id)_notCondition;
- (BOOL)_validForRanking;
- (id)_inflectionFeatureValuePairs;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithLeftFeature:(id)a0 relation:(long long)a1 rightFeature:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_requiresTwoFeatures;
- (BOOL)_acceptsLeftFeatureMap:(id)a0 rightFeatureMap:(id)a1;

@end
