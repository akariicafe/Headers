@class CMAttitude;

@interface AXMCameraFrameContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic) float videoZoomFactor;
@property (readonly, nonatomic) long long videoSourceWidth;
@property (readonly, nonatomic) long long videoSourceHeight;
@property (readonly, nonatomic) double presentationTimestamp;
@property (readonly, nonatomic) CMAttitude *deviceAttitude;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithVideoFieldOfView:(float)a0 zoomFactor:(float)a1 sourceWidth:(long long)a2 sourceHeight:(long long)a3 presentationTimestamp:(double)a4 attitude:(id)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })motionCorrectedNormalizedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 targetAttitude:(id)a1 targetZoomFactor:(float)a2 interfaceOrientation:(long long)a3 mirrored:(BOOL)a4;
- (void)encodeWithCoder:(id)a0;

@end
