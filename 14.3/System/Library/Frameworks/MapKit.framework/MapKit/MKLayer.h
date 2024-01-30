@interface MKLayer : CALayer

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } hitBounds;
@property (nonatomic) struct CGPoint { double x; double y; } hitOffset;
@property (nonatomic) struct CGPoint { double x; double y; } hitOutset;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;

@end
