@class UIImageView, WFVariable;

@interface WFVariableCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) WFVariable *variable;

+ (id)titleFont;
+ (double)widthWithVariable:(id)a0 height:(double)a1;

- (BOOL)isAccessibilityElement;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)updateVariableImage;

@end
