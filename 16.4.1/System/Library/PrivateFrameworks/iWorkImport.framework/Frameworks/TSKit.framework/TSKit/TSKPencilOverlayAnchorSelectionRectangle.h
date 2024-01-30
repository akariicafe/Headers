@interface TSKPencilOverlayAnchorSelectionRectangle : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangle;
@property (nonatomic) struct CGColor { } *strokeColor;
@property (nonatomic) struct CGColor { } *fillColor;

- (void)dealloc;
- (id)anchorOverlayLayerForElapsedAnimationTime:(double)a0;
- (id)initWithRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 strokeColor:(struct CGColor { } *)a1 fillColor:(struct CGColor { } *)a2;
- (id)pencilAnchorBloopAnimationStartingAtElapsedTime:(double)a0;

@end
