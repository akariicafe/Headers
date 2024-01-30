@interface PUParallaxLayerLayoutInfo : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (readonly, nonatomic) BOOL canApplyParallax;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } parallaxVector;
@property (readonly, nonatomic) double parallaxAmount;
@property (readonly, nonatomic) double visibilityAmount;
@property (readonly, nonatomic) unsigned long long visibilityEdge;

- (BOOL)isEqual:(id)a0;
- (id)initWithVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 canApplyParallax:(BOOL)a2 parallaxVector:(struct CGPoint { double x0; double x1; })a3 parallaxAmount:(double)a4 visibilityAmount:(double)a5 visibilityEdge:(unsigned long long)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameForLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
