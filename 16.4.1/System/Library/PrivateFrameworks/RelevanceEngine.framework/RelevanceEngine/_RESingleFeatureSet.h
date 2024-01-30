@class REFeature;

@interface _RESingleFeatureSet : REFeatureSet {
    REFeature *_feature;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithFeatures:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;
- (id)allFeatures;
- (void).cxx_destruct;
- (id)initWithFeature:(id)a0;
- (id)featureWithName:(id)a0;
- (BOOL)containsFeature:(id)a0;

@end
