@class NSArray;

@interface BKSMutableHIDEventHitTestLayerInformation : BKSHIDEventHitTestLayerInformation

@property (nonatomic) unsigned long long validMask;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } cumulativeLayerTransform;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } cumulativeContentsTransform;
@property (nonatomic) float cumulativeOpacity;
@property (nonatomic) BOOL hasInsecureFilter;
@property (nonatomic) BOOL detectedOcclusion;
@property (nonatomic) BOOL backgroundStatisticsValid;
@property (nonatomic) float backgroundAverage;
@property (nonatomic) float backgroundStandardDeviation;
@property (nonatomic) float backgroundAverageContrastThreshold;
@property (copy, nonatomic) NSArray *minimumBackgroundColor;
@property (copy, nonatomic) NSArray *maximumBackgroundColor;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } cumulativeTransform;

- (void)setCumulativeContentsTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setBackgroundStandardDeviation:(float)a0;
- (void)setBackgroundAverage:(float)a0;
- (void)setBackgroundAverageContrastThreshold:(float)a0;
- (void)setCumulativeLayerTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setCumulativeOpacity:(float)a0;
- (void)setCumulativeTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setDetectedOcclusion:(BOOL)a0;
- (void)setHasInsecureFilter:(BOOL)a0;
- (void)setMaximumBackgroundColor:(id)a0;
- (void)setMinimumBackgroundColor:(id)a0;
- (void)setValidMask:(unsigned long long)a0;

@end
