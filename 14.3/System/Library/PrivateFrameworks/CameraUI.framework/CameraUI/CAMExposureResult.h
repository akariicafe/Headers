@interface CAMExposureResult : NSObject

@property (readonly, nonatomic, getter=isAdjustingExposure) BOOL adjustingExposure;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } pointOfInterest;
@property (readonly, nonatomic) long long exposureMode;
@property (readonly, nonatomic) float exposureTargetBias;
@property (readonly, nonatomic) BOOL exposureDidStart;
@property (readonly, nonatomic) BOOL exposureDidEnd;
@property (readonly, nonatomic) BOOL deviceSupportsFocus;

- (id)description;
- (id)initWithMode:(long long)a0 pointOfInterest:(struct CGPoint { double x0; double x1; })a1 exposureTargetBias:(float)a2 adjusting:(BOOL)a3 exposureDidStart:(BOOL)a4 exposureDidEnd:(BOOL)a5 deviceSupportsFocus:(BOOL)a6;

@end
