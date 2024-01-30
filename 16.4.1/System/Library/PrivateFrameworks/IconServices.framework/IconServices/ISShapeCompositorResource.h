@class IFColor, NSString;

@interface ISShapeCompositorResource : NSObject <ISScalableCompositorResource>

@property (retain) IFColor *fillColor;
@property (retain) IFColor *lineColor;
@property double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)continuousCornerRadiusForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)circleShape;
+ (id)continuousRoundedRectShape;

- (id)_init;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;

@end
