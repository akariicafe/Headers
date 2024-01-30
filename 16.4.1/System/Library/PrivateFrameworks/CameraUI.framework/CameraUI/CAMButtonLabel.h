@class UILabel, NSString, UIColor;

@interface CAMButtonLabel : UIView

@property (readonly, retain, nonatomic) UILabel *_label;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) BOOL wantsLegibilityShadow;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;

- (id)highlightedTextColor;
- (void)setHighlightedTextColor:(id)a0;
- (void)_updateInternalContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateAttributedText;

@end
