@interface CAMExposureTargetBiasCommand : CAMCaptureCommand

@property (readonly, nonatomic) float _exposureTargetBias;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExposureTargetBias:(float)a0;
- (void)encodeWithCoder:(id)a0;

@end
