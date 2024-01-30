@interface CRTextFeatureOrderV1 : NSObject <CRTextFeatureOrdering>

@property double angleThresholdForRotatedCrops;

- (id)orderAndGroupFeatures:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithAngleThresholdForRotatedCrops:(double)a0;

@end
