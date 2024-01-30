@class NSSet;

@interface _REFeatureSet : REFeatureSet {
    NSSet *_features;
}

- (id)initWithFeature:(id)a0;
- (id)initWithFeatures:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)featureWithName:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (BOOL)containsFeature:(id)a0;

@end
