@class SBBestAppSuggestion, UIImageView, UILabel, UIView;

@interface SBSwitcherAppSuggestionBannerView : PLPlatterView {
    SBBestAppSuggestion *_suggestion;
    UIImageView *_iconView;
    UILabel *_appLabel;
    UILabel *_descriptionLabel;
    BOOL _highlighted;
    UIView *_highlightDarkeningView;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) SBBestAppSuggestion *representedAppSuggestion;
@property (readonly, nonatomic) unsigned long long style;

- (id)_titleFont;
- (id)initWithRecipe:(long long)a0;
- (id)_appTitleForSuggestion:(id)a0;
- (id)_borderView;
- (id)_descriptionFont;
- (void)setHighlighted:(BOOL)a0;
- (id)_meCardShortName;
- (void)traitCollectionDidChange:(id)a0;
- (void)_configureConstraints;
- (void)_createDarkeningView;
- (void)_createDescriptionLabelForSuggestion:(id)a0;
- (void)_createIconViewForSuggestion:(id)a0;
- (id)_descriptionStringForSuggestion:(id)a0;
- (id)_firstWakeGreetingString;
- (id)_iconImageFromAppWithBundleIdentifier:(id)a0 withIconImageCache:(id)a1;
- (void).cxx_destruct;
- (void)_updateAppearanceForCurrentUserInterfaceStyle;
- (id)_textStyle;
- (BOOL)_isSingleLine;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appSuggestion:(id)a1 style:(unsigned long long)a2;
- (void)_createAppLabelForSuggestion:(id)a0;

@end
