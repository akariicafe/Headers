@class NSString, UILayoutGuide, UILabel, NSLayoutConstraint;

@interface CKPinningOnboardingTitleCell : UICollectionViewCell

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILayoutGuide *labelMarginGuide;
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleSpacingConstraint;
@property (nonatomic) long long pinnedConversationViewLayoutStyle;
@property (nonatomic) BOOL isInCollapsedState;

- (void)setPinnedConversationViewLayoutStyle:(long long)a0 collapsedState:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pinningOnboardingTitleLabelFontForPinnedConversationViewLayoutStyle:(long long)a0 inCollapsedState:(BOOL)a1;
- (void).cxx_destruct;
- (double)pinningOnboardingMarginForPinnedConversationViewLayoutStyle:(long long)a0;
- (void)updateConstraints;
- (double)pinningOnboardingSubtitleSpacingForPinnedConversationViewLayoutStyle:(long long)a0;

@end
