@class CALayer;

@interface CAMZoomDialDotsView : UIView

@property (readonly, nonatomic) CALayer *_dotLayer;
@property (nonatomic) long long dotCount;
@property (nonatomic) struct CGPoint { double x0; double x1; } dotCenter;
@property (nonatomic) double dotSpacingAngle;

+ (Class)layerClass;

- (id)_replicatorLayer;
- (id)initWithDotImage:(id)a0;
- (void).cxx_destruct;

@end
