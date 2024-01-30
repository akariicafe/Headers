@class MTStylingProvidingSolidColorView, UIView;

@interface SBHAddWidgetButton : UIButton

@property (retain, nonatomic) MTStylingProvidingSolidColorView *backgroundView;
@property (retain, nonatomic) UIView *highlightView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)mt_applyVisualStyling:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)_titleLabelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (double)_buttonCornerRadius;
- (id)_addSymbolImage;
- (void)mt_removeAllVisualStyling;

@end
