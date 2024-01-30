@interface UIKeyboardCandidatePocketShadow : UICollectionReusableView

@property (nonatomic) BOOL shadowFadesToBottom;
@property (nonatomic) BOOL drawsShadow;
@property (nonatomic) BOOL showsInDarkBackground;

+ (id)leftShadowImage;
+ (double)widthWithShadow:(BOOL)a0;

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
