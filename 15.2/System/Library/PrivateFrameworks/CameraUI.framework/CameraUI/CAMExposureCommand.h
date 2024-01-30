@interface CAMExposureCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _exposureMode;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } _exposurePointOfInterest;

- (void)encodeWithCoder:(id)a0;
- (id)initWithExposureMode:(long long)a0 atPointOfInterest:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithExposureMode:(long long)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
