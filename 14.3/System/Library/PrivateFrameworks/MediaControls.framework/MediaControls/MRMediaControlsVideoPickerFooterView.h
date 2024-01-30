@class UILabel, MTVisualStylingProvider;

@interface MRMediaControlsVideoPickerFooterView : MPButton

@property (retain, nonatomic) UILabel *customTitleLabel;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;

- (void)_updateStyle;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleLabelText;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
