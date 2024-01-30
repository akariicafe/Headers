@class UIColor, NSArray, HUGridStatusCellLayoutOptions, NSAttributedString;

@interface HUGridStatusCellTextView : UIView

@property (retain, nonatomic) NSArray *textLines;
@property (readonly, nonatomic) NSAttributedString *title;
@property (readonly, nonatomic) NSAttributedString *shortTitle;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) HUGridStatusCellLayoutOptions *layoutOptions;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)font;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_commonTextAttributesWithLineBreakMode:(long long)a0;
- (id)_effectiveTextColor;
- (void)setTitle:(id)a0 shortTitle:(id)a1;
- (void)_parseTitleLines;

@end
