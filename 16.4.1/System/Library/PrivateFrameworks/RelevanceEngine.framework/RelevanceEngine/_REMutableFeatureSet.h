@class NSMutableSet;

@interface _REMutableFeatureSet : REMutableFeatureSet {
    NSMutableSet *_names;
    NSMutableSet *_features;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithFeatures:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addFeature:(id)a0;
- (id)initWithFeature:(id)a0;
- (id)featureWithName:(id)a0;
- (void)removeFeature:(id)a0;
- (BOOL)containsFeature:(id)a0;
- (void)removeAllFeatures;

@end
