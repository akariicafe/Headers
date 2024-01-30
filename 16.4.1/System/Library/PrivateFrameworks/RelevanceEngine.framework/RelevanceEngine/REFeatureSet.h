@class NSArray;

@interface REFeatureSet : NSObject <REFeatureSetProperties, NSCopying, NSMutableCopying, NSFastEnumeration>

@property (readonly, nonatomic) NSArray *allFeatures;
@property (readonly, nonatomic) NSArray *allFeatures;
@property (readonly, nonatomic) unsigned long long count;

+ (id)featureSet;
+ (id)featureSetWithFeature:(id)a0;
+ (id)featureSetWithFeatures:(id)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithFeatures:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithFeature:(id)a0;
- (id)featureWithName:(id)a0;
- (BOOL)containsFeature:(id)a0;
- (void)enumerateFeaturesUsingBlock:(id /* block */)a0;
- (id)initWithFeatureSet:(id)a0;
- (BOOL)intersectsFeatureSet:(id)a0;
- (BOOL)isEqualToFeatureSet:(id)a0;
- (BOOL)isSubsetOfFeatureSet:(id)a0;

@end
