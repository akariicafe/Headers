@class IOSurface;
@protocol MTLDevice;

@interface TSDBrushStrokeDirectSurfaceRenderingContext : NSObject

@property (readonly, nonatomic) IOSurface *surface;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly, nonatomic) double contentsScale;
@property (readonly, nonatomic) struct CGColorSpace { } *destinationColorSpaceOverride;
@property (readonly, nonatomic) id<MTLDevice> metalDeviceOverride;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSurface:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 contentsScale:(double)a3 destinationColorSpaceOverride:(struct CGColorSpace { } *)a4 metalDeviceOverride:(id)a5;

@end
