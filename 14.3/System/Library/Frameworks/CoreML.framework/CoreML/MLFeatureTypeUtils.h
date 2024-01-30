@interface MLFeatureTypeUtils : NSObject

+ (long long)featureTypeForObject:(id)a0;
+ (long long)featureTypeForValuesInArray:(id)a0 error:(id *)a1;
+ (id)featureValuesWithConsistentTypeFromArray:(id)a0 error:(id *)a1;
+ (id)descriptionForType:(long long)a0;
+ (id)featureDescriptionWithName:(id)a0 consistentWithFeatureValues:(id)a1 error:(id *)a2;
+ (BOOL)canShapeArrayBePromotedFrom:(id)a0 to:(id)a1;

@end
