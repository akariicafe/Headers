@class UILabel, UIButton;

@interface MFComposeActionCardTitleView : _UINavigationBarTitleView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *closeButton;

+ (double)heightForTraitCollection:(id)a0;

- (void)_updateHeightForCurrentTraits;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
