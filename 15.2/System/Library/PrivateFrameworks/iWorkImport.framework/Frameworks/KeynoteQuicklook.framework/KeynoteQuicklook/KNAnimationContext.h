@class TSDCapabilities, CALayer;

@interface KNAnimationContext : NSObject

@property (readonly, nonatomic) TSDCapabilities *capabilities;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) double fieldOfViewInRadians;
@property (nonatomic) double pixelAspectRatio;
@property (readonly, nonatomic) CALayer *showLayer;
@property (readonly, nonatomic) double showScale;
@property (readonly, nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } slideProjectionMatrix;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } slideRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unscaledSlideRect;
@property (readonly, nonatomic) double viewScale;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithShowSize:(struct CGSize { double x0; double x1; })a0 viewScale:(double)a1 showLayer:(id)a2;
- (void)updateGeometryToFitShowLayerAtViewScale:(double)a0;

@end
