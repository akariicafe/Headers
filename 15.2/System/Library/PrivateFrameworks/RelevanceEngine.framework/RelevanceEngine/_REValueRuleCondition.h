@class REFeature;

@interface _REValueRuleCondition : RECondition <REAutomaticExportedInterface> {
    BOOL _allowsEmptyValueForFeature;
}

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) unsigned long long value;

- (id)_dependentFeatures;
- (id)_notCondition;
- (id)_inflectionFeatureValuePairs;
- (id)initWithFeature:(id)a0 relation:(long long)a1 value:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (unsigned long long)hash;
- (void)dealloc;

@end
