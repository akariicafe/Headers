@interface UITextFieldLabel : UILabel

@property (nonatomic) BOOL shouldRenderWithoutTextField;

+ (id)_defaultAttributes;
+ (id)defaultFont;

- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_defaultDrawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldDrawUnderlinesLikeWebKit;

@end
