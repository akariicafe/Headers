@class UIStackView, NSArray, NSString, UIFont, UILabel;

@interface HUTitleValueCell : HUIconCell

@property (retain, nonatomic) NSArray *stackViewConstraints;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *valueLabel;
@property (readonly, nonatomic) UIStackView *labelsStackView;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) UIFont *titleFont;
@property (nonatomic) BOOL hideTitle;
@property (retain, nonatomic) NSString *valueText;
@property (retain, nonatomic) UIFont *valueFont;
@property (nonatomic) BOOL hideValue;
@property (nonatomic) BOOL titleColorFollowsTintColor;
@property (nonatomic) BOOL valueColorFollowsTintColor;
@property (nonatomic) BOOL allowCopyValueToPasteboard;
@property (nonatomic) BOOL useVerticalLayoutOnly;

+ (BOOL)requiresConstraintBasedLayout;

- (void)layoutMarginsDidChange;
- (void)_updateTitle;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setDisabled:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)copy:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (BOOL)canBecomeFirstResponder;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_addTitleLabel;
- (double)labelSpacing;
- (void)_addValueLabel;
- (void)_updateValue;
- (void)_ensureCorrectHeaderViewOrientation;

@end
