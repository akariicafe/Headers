@interface ADPrerollButton : UIButton

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitRectInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;

+ (id)buttonWithType:(long long)a0;

- (void)dealloc;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;

@end
