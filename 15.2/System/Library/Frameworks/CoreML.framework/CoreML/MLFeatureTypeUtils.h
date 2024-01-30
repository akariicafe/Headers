@interface MLFeatureTypeUtils : NSObject

+ (BOOL)canShapeArrayBePromotedFrom:(id)a0 to:(id)a1;
+ (id)descriptionForType:(long long)a0;
+ (id)featureDescriptionWithName:(id)a0 consistentWithFeatureValues:(id)a1 error:(id *)a2;
+ (long long)featureTypeForObject:(id)a0;
+ (id)featureValuesWithConsistentTypeFromArray:(id)a0 error:(id *)a1;
+ (long long)featureTypeForValuesInArray:(id)a0 error:(id *)a1;

@end
