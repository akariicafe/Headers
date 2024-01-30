@interface SwiftUI.RenderBoxView : SwiftUI._UIGraphicsView <RBLayerDelegate>

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic) BOOL opaque;

- (BOOL)isOpaque;
- (void)dealloc;
- (void)setNeedsDisplay;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)RBLayer:(id)a0 draw:(id)a1;

@end
