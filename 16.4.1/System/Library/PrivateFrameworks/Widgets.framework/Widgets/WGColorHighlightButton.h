@class UIColor;

@interface WGColorHighlightButton : UIButton

@property (retain, nonatomic) UIColor *savedBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;

- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateRealBackgroundColor;

@end
