@interface REMutableFeatureSet : REFeatureSet

- (id)initWithFeature:(id)a0;
- (id)initWithFeatures:(id)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addFeature:(id)a0;
- (void)removeFeature:(id)a0;
- (void)minusFeatureSet:(id)a0;
- (void)unionFeatureSet:(id)a0;
- (void)intersetFeatureSet:(id)a0;
- (void)removeAllFeatures;

@end
