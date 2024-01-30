@class UIFont, NSString, UILabel, NSLayoutConstraint;

@interface HUTitleValueDescriptionCell : HUTitleDescriptionCell

@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSLayoutConstraint *valueLabelWidthConstraint;
@property (retain, nonatomic) NSString *valueText;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) BOOL hideValue;
@property (nonatomic) BOOL valueColorFollowsTintColor;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_updateValue;
- (void)_updateValueHidden;
- (void)_updateValueWidthConstraintConstant;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
