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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setDisabled:(BOOL)a0;
- (void)layoutMarginsDidChange;
- (void)_updateTitle;
- (void)copy:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)_addTitleLabel;
- (void)_updateValue;
- (void)_addValueLabel;
- (void)_ensureCorrectHeaderViewOrientation;
- (double)labelSpacing;

@end
