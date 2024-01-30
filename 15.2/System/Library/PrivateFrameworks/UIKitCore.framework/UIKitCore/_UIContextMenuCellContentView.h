@class UIStackView, UIView, NSArray, _UISlotView, UISPasteVariant, UIImageView, NSLayoutConstraint, UILabel;

@interface _UIContextMenuCellContentView : UIView

@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *leadingImageView;
@property (retain, nonatomic) UIImageView *trailingImageView;
@property (retain, nonatomic) UILabel *emphasizedTitleLabel;
@property (retain, nonatomic) UIImageView *emphasizedTrailingImageView;
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
@property (nonatomic) BOOL isEmphasized;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) _UISlotView *securePasteButtonSlotView;
@property (retain, nonatomic) UISPasteVariant *pasteVariant;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long preferredLineLimit;
@property (nonatomic) unsigned long long overrideNumberOfTitleLines;
@property (readonly, nonatomic) unsigned long long measuredNumberOfTitleLines;

- (void)layoutSubviews;
- (void)setTrailingImage:(id)a0;
- (void)_hideContents;
- (id)_contentImageViewForImage:(id)a0;
- (void)_setNeedsConstraintRebuild;
- (void)setSubtitle:(id)a0;
- (void)_updateTitleLabelNumberOfLines;
- (void)setLeadingImage:(id)a0;
- (id)_symbolConfigurationForCurrentTraitsUsingBoldFont:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateAppearanceForStateChange;
- (void)_installLabelStackViewIfNeeded;
- (void)_installSubtitleLabelIfNeeded;
- (void)_setupSecureView;
- (id)_subtitleTextColor;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)_primaryContentColorForCurrentState;
- (id)_childIndicatorImage;
- (id)_subtitleLabelFilterForCurrentTraits;
- (id)_primaryTitleLabel;
- (void)prepareForReuse;
- (void)_updateSubtitleLabelNumberOfLines;
- (void)_updateAttachedConstraintsForViewHierarchyChange;
- (void)setTitle:(id)a0;
- (void)_updateForOptionsChangeFromPreviousOptions:(unsigned long long)a0;
- (id)_leadingSymbolImageConfiguration;
- (void)_installTitleLabelIfNeeded;
- (struct CGSize { double x0; double x1; })_maxImageSize;
- (id)_selectionImage;

@end
