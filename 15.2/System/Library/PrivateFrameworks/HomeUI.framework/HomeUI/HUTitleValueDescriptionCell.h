@class UIFont, NSString, UILabel, NSLayoutConstraint;

@interface HUTitleValueDescriptionCell : HUTitleDescriptionCell

@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSLayoutConstraint *valueLabelWidthConstraint;
@property (retain, nonatomic) NSString *valueText;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) BOOL hideValue;
@property (nonatomic) BOOL valueColorFollowsTintColor;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_updateValueHidden;
- (void)_updateValueWidthConstraintConstant;
- (void)_updateValue;

@end
