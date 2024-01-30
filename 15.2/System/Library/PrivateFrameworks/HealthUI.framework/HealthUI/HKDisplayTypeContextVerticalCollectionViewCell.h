@class UIStackView, NSLayoutConstraint, HKUIMetricColors, UILabel, HKDisplayTypeContextItem, UIButton;
@protocol HKDisplayTypeContextVerticalCollectionViewCellDelegate;

@interface HKDisplayTypeContextVerticalCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) HKDisplayTypeContextItem *contextItem;
@property (nonatomic) long long mode;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UIButton *infoButton;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) HKUIMetricColors *currentMetricColors;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *maxTitleWidthConstraint;
@property (nonatomic) BOOL valueStringIsVeryLong;
@property (weak, nonatomic) id<HKDisplayTypeContextVerticalCollectionViewCellDelegate> delegate;

+ (id)reuseIdentifier;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)infoButtonTapped:(id)a0;
- (id)_labelWithFont:(id)a0 allowsMultiline:(BOOL)a1 supportsDyanmicType:(BOOL)a2;
- (id)_valueAndUnitFont;
- (id)_generateInfoButton;
- (id)_stackViewWithArrangedSubviews:(id)a0;
- (void)_configureForTraitCollection:(id)a0;
- (void)_updateUI:(BOOL)a0;
- (void)_configureForContextItem:(id)a0;
- (id)_backgroundViewWithColor:(id)a0 userInteractive:(BOOL)a1;
- (void)_setLabel:(id)a0 allowsMultiline:(BOOL)a1 textAlignment:(long long)a2;
- (void)updateWithContextItem:(id)a0 mode:(long long)a1;

@end
