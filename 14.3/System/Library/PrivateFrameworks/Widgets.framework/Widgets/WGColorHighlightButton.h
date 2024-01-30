@class UIColor;

@interface WGColorHighlightButton : UIButton

@property (retain, nonatomic) UIColor *savedBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateRealBackgroundColor;

@end
