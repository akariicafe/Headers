@interface REMutableFeatureSet : REFeatureSet

- (id)initWithFeatures:(id)a0;
- (id)init;
- (void)addFeature:(id)a0;
- (id)initWithFeature:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeFeature:(id)a0;
- (void)minusFeatureSet:(id)a0;
- (void)unionFeatureSet:(id)a0;
- (void)intersetFeatureSet:(id)a0;
- (void)removeAllFeatures;

@end
