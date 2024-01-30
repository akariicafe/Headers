@class UIColor, HFImageIconDescriptor, HUIconView;

@interface HUIconPickerCell : UICollectionViewCell

@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) HFImageIconDescriptor *iconDescriptor;
@property (retain, nonatomic) UIColor *selectedTintColor;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_iconTintColor;
- (void)_updateIconDescriptor:(id)a0;
- (void)setIconDescriptor:(id)a0 andSelectedTintColor:(id)a1;

@end
