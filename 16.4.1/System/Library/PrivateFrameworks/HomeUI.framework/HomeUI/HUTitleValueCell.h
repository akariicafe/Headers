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

- (void)_updateTitle;
- (void)setDisabled:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutMarginsDidChange;
- (void)tintColorDidChange;
- (BOOL)canBecomeFirstResponder;
- (void)updateConstraints;
- (void)copy:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_updateValue;
- (void)_addTitleLabel;
- (void)_addValueLabel;
- (void)_ensureCorrectHeaderViewOrientation;
- (double)labelSpacing;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
