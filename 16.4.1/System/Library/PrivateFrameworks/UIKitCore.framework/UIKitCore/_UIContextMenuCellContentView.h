@class UIStackView, UIView, _UISlotView, UISPasteVariant, UIImageView, UIButton, NSLayoutConstraint, UILabel;
@protocol _UIContextMenuCellLayout;

@interface _UIContextMenuCellContentView : UIView

@property (readonly, nonatomic) id<_UIContextMenuCellLayout> layout;
@property (retain, nonatomic) UIImageView *decorationImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) UILabel *emphasizedTitleLabel;
@property (retain, nonatomic) UIImageView *emphasizediconImageView;
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageWidth;
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageHeight;
@property (nonatomic) BOOL needsConstraintRebuild;
@property (nonatomic) BOOL isEmphasized;
@property (weak, nonatomic) _UISlotView *securePasteButtonSlotView;
@property (readonly, nonatomic) UIStackView *labelStackView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UIView *decorationView;
@property (readonly, nonatomic) UIView *iconView;
@property (retain, nonatomic) UISPasteVariant *pasteVariant;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long preferredLineLimit;
@property (nonatomic) unsigned long long overrideNumberOfTitleLines;
@property (readonly, nonatomic) unsigned long long measuredNumberOfTitleLines;

- (void)setAttributedTitle:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setSubtitle:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (id)_selectionImage;
- (void)_updateAppearanceForStateChange;
- (void)setLayoutClass:(Class)a0;
- (id)_childIndicatorImage;
- (id)_contentImageViewForImage:(id)a0;
- (void)_createLabelStackViewIfNeeded;
- (id)_decorationSymbolImageConfiguration;
- (BOOL)_hasTrailingAccessory;
- (void)_hideContents;
- (id)_iconSymbolConfigurationForCurrentTraitsUsingBoldFont:(BOOL)a0;
- (void)_installSubtitleLabelIfNeeded;
- (void)_installTitleLabelIfNeeded;
- (struct CGSize { double x0; double x1; })_maxImageSize;
- (id)_mixedSelectionImage;
- (id)_primaryContentColorForCurrentState;
- (id)_primaryTitleLabel;
- (unsigned int)_secureName;
- (void)_setDecorationImage:(id)a0;
- (void)_setNeedsConstraintRebuild;
- (id)_subtitleLabelFilterForCurrentTraits;
- (id)_subtitleTextColor;
- (void)_updateAttachedConstraintsForViewHierarchyChange;
- (void)_updateForOptionsChangeFromPreviousOptions:(unsigned long long)a0;
- (void)_updateSecureView;
- (void)_updateSubtitleLabelNumberOfLines;
- (void)_updateTitleLabelNumberOfLines;
- (void)setAccessoryAction:(id)a0;

@end
