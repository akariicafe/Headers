@class NSString, UIFontMetrics;

@interface AXDynamicTypeImageView : UIImageView

@property (retain, nonatomic) UIFontMetrics *fontMetrics;
@property (copy, nonatomic) NSString *minimumContentSizeCategory;
@property (copy, nonatomic) NSString *maximumContentSizeCategory;

- (id)initWithImage:(id)a0;
- (void)_commonInit;
- (struct CGSize { double x0; double x1; })_scaledSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImage:(id)a0 highlightedImage:(id)a1;

@end
