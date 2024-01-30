@class CALayer;

@interface ASVDeviceController : NSObject {
    CALayer *_deviceLayer;
    CALayer *_deviceMaskLayer;
    CALayer *_holeLayer;
    CALayer *_shineInnerLayer;
    double _aspectRatio;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } transform;
@property (nonatomic) float opacity;
@property (readonly, nonatomic) CALayer *deviceLayer;
@property (readonly, nonatomic) CALayer *holeLayer;
@property (readonly, nonatomic) CALayer *shineLayer;

- (void).cxx_destruct;
- (id)initWithDeviceMaskImage:(id)a0;
- (void)update:(double)a0 visibility:(double)a1 layer:(id)a2;

@end
