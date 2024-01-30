@class DBIconLabelBackdropView, UIView, DBEnvironmentConfiguration, DBIconDropShadowProvider;

@interface DBIconView : SBIconView

@property (class, retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;

@property (retain, nonatomic) DBIconDropShadowProvider *dropShadowProvider;
@property (retain, nonatomic) UIView *dropShadowView;
@property (retain, nonatomic) DBIconLabelBackdropView *labelLegibilityView;
@property (nonatomic) BOOL shadowHidden;

+ (id)defaultIconLocation;
+ (BOOL)supportsDragInteraction;
+ (double)_labelHeight;
+ (struct CGSize { double x0; double x1; })maxLabelSizeForIconImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)textColorForTraitCollection:(id)a0;
+ (id)focusTextColorForTraitCollection:(id)a0;
+ (BOOL)allowsLabelAccessoryView;
+ (double)maximumIconViewHeightForIconImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)labelFontForTraitCollection:(id)a0;
+ (BOOL)supportsPreviewInteraction;
+ (BOOL)supportsCursorInteraction;
+ (void)_updateCharacteristicsWithTraitCollection:(id)a0;
+ (BOOL)_iconLabelsRequireBackground;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })minimumInterIconSpacing;
+ (id)focusColorForTraitCollection:(id)a0;

- (double)_labelBaselineOffsetFromImage;
- (id)labelFont;
- (void)_wallpaperChanged:(id)a0;
- (void)_configureIconImageView:(id)a0;
- (void)prepareForReuse;
- (id)initWithConfigurationOptions:(unsigned long long)a0 listLayoutProvider:(id)a1;
- (void)configureLabelImageParametersBuilder:(id)a0;
- (BOOL)canBecomeFocused;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabelHighlight;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)_refreshDropShadowWithIconImage:(id)a0;
- (void)setLabelHidden:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateLabel;
- (void).cxx_destruct;

@end
