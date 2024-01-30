@class UIImageView, UILabel, MTVisualStylingProvider;

@interface MRMediaControlsVideoPickerHeaderView : UIView

@property (retain, nonatomic) UIImageView *airPlayIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;

- (void)_updateStyle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
