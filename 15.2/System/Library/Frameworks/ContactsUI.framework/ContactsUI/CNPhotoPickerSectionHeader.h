@class UILabel, UIButton, UIStackView;

@interface CNPhotoPickerSectionHeader : UICollectionReusableView

@property (retain, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *actionButton;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)titleLabelFont;
+ (id)reusableIdentifier;
+ (id)actionButtonFont;
+ (double)heightNeededForAccessibilityLayoutIncludingActionButton:(BOOL)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateStyle:(id)a0;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)actionButtonPressed:(id)a0;
- (void)updateDynamicStackViewProperties;

@end
