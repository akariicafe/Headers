@interface NIDeviceCapabilities : NSObject <NIInternalDeviceCapability>

@property (readonly) BOOL supportsFineRanging;
@property (readonly) BOOL supportsCoarseRanging;
@property (readonly) BOOL supportsAoA;
@property (readonly) BOOL supportsSyntheticAperture;
@property (readonly, nonatomic) BOOL supportsCoarseDistanceMeasurement;
@property (readonly, nonatomic) BOOL supportsPreciseDistanceMeasurement;
@property (readonly, nonatomic) BOOL supportsDirectionMeasurement;
@property (readonly, nonatomic) BOOL supportsCameraAssistance;

+ (id)new;

- (id)initWithFineRangingSupport:(BOOL)a0 aoaSupport:(BOOL)a1 syntheticApertureSupport:(BOOL)a2;
- (id)init;
- (id)initWithFineRangingSupport:(BOOL)a0 coarseRangingSupport:(BOOL)a1 aoaSupport:(BOOL)a2 syntheticApertureSupport:(BOOL)a3;

@end
