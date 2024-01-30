@class UIButton, UIAction;

@interface _HKDisplayTypeSectionedHeaderWithButtonView : _HKDisplayTypeSectionedHeaderView

@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) UIAction *accessoryButtonAction;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updatePreferredTitleFont;

@end
