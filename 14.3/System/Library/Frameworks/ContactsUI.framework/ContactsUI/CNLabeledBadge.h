@class UIFont, NSString, UIColor, UILabel;

@interface CNLabeledBadge : UIView {
    UILabel *_label;
    double _height;
    struct CGSize { double width; double height; } _cachedTextSize;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIColor *textColor;

+ (id)labeledBadgeWithText:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)invalidateCachedTextSize;
- (void)cacheTextSizeIfNeeded;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
