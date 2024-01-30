@class UIStackView, NSArray, UIImageView, UILabel, NSLayoutConstraint, UIView;

@interface _UIContextMenuActionView : UIView

@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *leadingImageView;
@property (retain, nonatomic) UIImageView *trailingImageView;
@property (retain, nonatomic) NSArray *managedConstraints;
@property (retain, nonatomic) NSLayoutConstraint *topToFirstBaseline;
@property (retain, nonatomic) NSLayoutConstraint *lastBaselineToBottom;
@property (retain, nonatomic) NSLayoutConstraint *leadingToLabelStackViewLeading;
@property (retain, nonatomic) NSLayoutConstraint *leadingViewCenterX;
@property (retain, nonatomic) NSLayoutConstraint *trailingViewCenterXToTrailing;
@property (retain, nonatomic) NSLayoutConstraint *labelStackViewTrailingToTrailingViewCenterX;
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageWidth;
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageHeight;
@property (retain, nonatomic) NSLayoutConstraint *minHeightConstraint;
@property (nonatomic) BOOL needsConstraintRebuild;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)_imageTintColor;
- (void)updateConstraints;
- (void)setSubtitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (id)_subtitleTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTrailingImage:(id)a0;
- (void)_installLabelStackViewIfNeeded;
- (void)_installTitleLabelIfNeeded;
- (void)_updateTitleLabelNumberOfLines;
- (void)_installSubtitleLabelIfNeeded;
- (id)_contentImageViewForImage:(id)a0;
- (id)_selectionImage;
- (id)_symbolConfigurationForCurrentTraits;
- (void)_setNeedsConstraintRebuild;
- (void)_updateAttachedConstraintsForViewHierarchyChange;
- (struct CGSize { double x0; double x1; })_maxImageSize;
- (void)_updateForOptionsChangeFromPreviousOptions:(unsigned long long)a0;
- (void)_updateSubtitleLabelNumberOfLines;
- (void)_updateAppearanceForStateChange;
- (id)_primaryContentColorForCurrentState;
- (double)_primaryContentAlphaForCurrentState;
- (id)_subtitleLabelFilterForCurrentTraits;
- (void)traitCollectionDidChange:(id)a0;

@end
