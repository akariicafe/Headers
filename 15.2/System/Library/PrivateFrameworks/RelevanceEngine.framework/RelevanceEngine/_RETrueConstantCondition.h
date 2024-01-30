@interface _RETrueConstantCondition : RECondition

+ (id)sharedInstance;

- (id)_notCondition;
- (id)_inflectionFeatureValuePairs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptsFeatureMap:(id)a0 predictionSet:(id)a1 explanation:(id *)a2;

@end
