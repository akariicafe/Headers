@class REFeature;

@interface _REValueRuleCondition : RECondition <REAutomaticExportedInterface> {
    BOOL _allowsEmptyValueForFeature;
}

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) long long relation;
@property (readonly, nonatomic) unsigned long long value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithFeature:(id)a0 relation:(long long)a1 value:(unsigned long long)a2;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;
- (id)_dependentFeatures;
- (id)_inflectionFeatureValuePairs;
- (id)_notCondition;

@end
