@class UIButtonConfiguration, UIImage, UIFont, UIImageView, NSMutableDictionary, UILabel, UITapGestureRecognizer, UIColor, _UIButtonConfigurationState, NSString, NSAttributedString, UIMenu, UIImageSymbolConfiguration, _UIButtonConfiguration;
@protocol UIButtonVisualProvider, _UIButtonConfigurationShim;

@interface UIButton : UIControl <UIAccessibilityContentSizeCategoryImageAdjusting, UIAccessibilityContentSizeCategoryImageAdjustingInternal, UIGestureRecognizerDelegate, UIMenuForcedAutomaticSelectionDelegate, UIButtonControl, NSCoding> {
    unsigned long long _externalFlatEdge;
    struct { unsigned char isPopulated : 1; unsigned char implementsButton : 1; unsigned char implementsModernProvider : 1; unsigned char implementsArchiving : 1; unsigned char implementsEffectSupport : 1; unsigned char implementsDeprecatedAPISupport : 1; unsigned char implementsDeprecatedSPISupport : 1; unsigned char preferredBehavioralStyle : 4; } _buttonVisualProviderFlags;
    id<_UIButtonConfigurationShim> _configuration;
    NSMutableDictionary *_contentLookup;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _titleEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _imageEdgeInsets;
    BOOL _initialized;
    unsigned long long _lastDrawingControlState;
    UITapGestureRecognizer *_selectGestureRecognizer;
    id<UIButtonVisualProvider> _visualProvider;
    struct { unsigned char reversesTitleShadowWhenHighlighted : 1; unsigned char adjustsImageWhenHighlighted : 1; unsigned char adjustsImageWhenDisabled : 1; unsigned char autosizeToFit : 1; unsigned char disabledDimsImage : 1; unsigned char showsTouchWhenHighlighted : 1; unsigned char buttonType : 8; unsigned char role : 8; unsigned char shouldHandleScrollerMouseEvent : 1; unsigned char titleFrozen : 1; unsigned char resendTraitToImageViews : 2; unsigned char animateNextHighlightChange : 1; unsigned char blurEnabled : 1; unsigned char visualEffectViewEnabled : 1; unsigned char suppressAccessibilityUnderline : 1; unsigned char requiresLayoutForPropertyChange : 1; unsigned char needsTitleViewDefaultColorUpdate : 1; unsigned char adjustsImageSizeForAccessibilityContentSizeCategory : 1; unsigned char disableAutomaticTitleAnimations : 1; unsigned char overridesRectAccessors : 1; unsigned char overridesLegacyCursorDelegateSelectors : 1; unsigned char hasActivePointerEffect : 1; unsigned char automaticallyUpdatesConfiguration : 1; unsigned char changesSelectionAsPrimaryAction : 1; } _buttonFlags;
    UIFont *_lazyTitleViewFont;
    BOOL _lazyTitleViewFontIsDefaultForIdiom;
}

@property (class, readonly, nonatomic) Class _visualProviderClass;

@property (readonly, nonatomic) unsigned long long behavioralStyle;
@property (nonatomic) unsigned long long preferredBehavioralStyle;
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, setter=_setImageContentMode:) long long _imageContentMode;
@property (nonatomic, getter=_isContentBackgroundHidden, setter=_setContentBackgroundHidden:) BOOL contentBackgroundHidden;
@property (retain, nonatomic, getter=_plainButtonBackgroundColor, setter=_setPlainButtonBackgroundColor:) UIColor *_plainButtonBackgroundColor;
@property (readonly, retain, nonatomic) id<UIButtonVisualProvider> _visualProvider;
@property (nonatomic, setter=_setInternalTitlePaddingInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } _internalTitlePaddingInsets;
@property (retain, nonatomic, setter=_setCurrentConfiguration:) id<_UIButtonConfigurationShim> _currentConfiguration;
@property (readonly, copy, nonatomic) _UIButtonConfigurationState *_configurationState;
@property (copy, nonatomic, setter=_setConfigurationUpdateHandler:) id /* block */ _configurationUpdateHandler;
@property (copy, nonatomic, setter=_setConfiguration:) _UIButtonConfiguration *_configuration;
@property (nonatomic, setter=_setAutomaticallyUpdatesButtonConfiguration:) BOOL _automaticallyUpdatesButtonConfiguration;
@property (readonly, nonatomic) UILabel *_subtitleLabel;
@property (nonatomic, setter=_setChangesSelectionAsPrimaryAction:) BOOL _changesSelectionAsPrimaryAction;
@property (copy, nonatomic) id /* block */ cursorStyleProvider;
@property (nonatomic, getter=_disableAutomaticTitleAnimations, setter=_setDisableAutomaticTitleAnimations:) BOOL _disableAutomaticTitleAnimations;
@property (readonly, retain, nonatomic) UIColor *_currentImageColor;
@property (nonatomic, setter=_setWantsAccessibilityUnderline:) BOOL _wantsAccessibilityUnderline;
@property (setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge;
@property (copy, nonatomic, setter=_setMenuProvider:) id /* block */ _menuProvider;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) struct CGSize { double x0; double x1; } titleShadowOffset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } titleEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } imageEdgeInsets;
@property (nonatomic) BOOL reversesTitleShadowWhenHighlighted;
@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (nonatomic) BOOL adjustsImageWhenDisabled;
@property (nonatomic) BOOL showsTouchWhenHighlighted;
@property (copy, nonatomic) UIButtonConfiguration *configuration;
@property (copy, nonatomic) id /* block */ configurationUpdateHandler;
@property (nonatomic) BOOL automaticallyUpdatesConfiguration;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) long long buttonType;
@property (readonly, nonatomic, getter=isHovered) BOOL hovered;
@property (readonly, nonatomic, getter=isHeld) BOOL held;
@property (nonatomic) long long role;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (copy, nonatomic) id /* block */ pointerStyleProvider;
@property (copy, nonatomic) UIMenu *menu;
@property (nonatomic) BOOL changesSelectionAsPrimaryAction;
@property (readonly, nonatomic) NSString *currentTitle;
@property (readonly, nonatomic) UIColor *currentTitleColor;
@property (readonly, nonatomic) UIColor *currentTitleShadowColor;
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, nonatomic) UIImage *currentBackgroundImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *currentPreferredSymbolConfiguration;
@property (readonly, nonatomic) NSAttributedString *currentAttributedTitle;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultSymbolConfigurationForType:(long long)a0 andState:(unsigned long long)a1 compact:(BOOL)a2;
+ (id)_defaultBackgroundImageNameForType:(long long)a0 andState:(unsigned long long)a1 compact:(BOOL)a2;
+ (void)_setVisuallyHighlighted:(BOOL)a0 forViews:(id)a1 initialPress:(BOOL)a2;
+ (void)_setVisuallyHighlighted:(BOOL)a0 forViews:(id)a1 initialPress:(BOOL)a2 baseAlpha:(double)a3;
+ (void)_setVisuallyHighlighted:(BOOL)a0 forViews:(id)a1 initialPress:(BOOL)a2 highlightBlock:(id /* block */)a3;
+ (id)_defaultBackgroundImageColorForType:(long long)a0 andState:(unsigned long long)a1;
+ (void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)a0;
+ (BOOL)_buttonTypeIsModernUI:(long long)a0;
+ (BOOL)_buttonTypeIsSystemProvided:(long long)a0;
+ (BOOL)_buttonTypeIsiOSSystemProvided:(long long)a0;
+ (id)systemButtonWithImage:(id)a0 target:(id)a1 action:(SEL)a2;
+ (id)_defaultSymbolConfigurationForType:(long long)a0 andState:(unsigned long long)a1;
+ (id)_defaultImageForType:(long long)a0 andState:(unsigned long long)a1 withConfiguration:(id)a2;
+ (id)buttonWithType:(long long)a0 primaryAction:(id)a1;
+ (double)_defaultNeighborSpacingForAxis:(long long)a0;
+ (id)buttonWithType:(long long)a0;
+ (id)_defaultBackgroundImageForType:(long long)a0 andState:(unsigned long long)a1;
+ (id)_defaultTitleColorForState:(unsigned long long)a0 button:(id)a1 isTintColor:(BOOL *)a2;
+ (id)_defaultImageColorForState:(unsigned long long)a0 button:(id)a1;
+ (id)_defaultNormalTitleColor;
+ (id)_systemButtonWithImage:(id)a0 target:(id)a1 action:(SEL)a2;
+ (id)buttonWithConfiguration:(id)a0 primaryAction:(id)a1;
+ (id)systemButtonWithPrimaryAction:(id)a0;
+ (void)_registerVisualProviderClass:(Class)a0 forIdiom:(long long)a1;
+ (id)_defaultImageNameForType:(long long)a0 andState:(unsigned long long)a1;
+ (id)_defaultImageColorForType:(long long)a0 andState:(unsigned long long)a1;
+ (id)_defaultNormalTitleShadowColor;
+ (BOOL)_allowsUnsupportedMacIdiomBehavior;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_encodableSubviews;
- (id)_font;
- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)updateConfiguration;
- (BOOL)_isOn;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (void)_setTitleFrozen:(BOOL)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (BOOL)_supportsMacIdiom;
- (BOOL)_shouldAdjustToTraitCollection;
- (id)_imageView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_pathImageEdgeInsets;
- (long long)_externalDrawingStyleForState:(unsigned long long)a0;
- (void)_setOn:(BOOL)a0;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (double)_autolayoutSpacingAtEdge:(int)a0 forAttribute:(id)a1 nextToNeighbor:(id)a2 edge:(int)a3 attribute:(long long)a4 multiplier:(double)a5;
- (id)_externalUnfocusedBorderColor;
- (id)viewForLastBaselineLayout;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (BOOL)_isModernButton;
- (void)_refreshVisualProviderForTraitCollection:(id)a0 populatingAPIProperties:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 deferLayout:(BOOL)a1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (void)setNeedsUpdateConfiguration;
- (BOOL)_isCarPlaySystemTypeButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (id)_backgroundView;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (double)_baselineOffsetFromBottom;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageEdgeInsets;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)_sendActionsForEvents:(unsigned long long)a0 withEvent:(id)a1;
- (id)title;
- (id)_imageForState:(unsigned long long)a0 applyingConfiguration:(BOOL)a1 usesImageForNormalState:(BOOL *)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_uikit_applyValueFromTraitStorage:(id)a0 forKeyPath:(id)a1;
- (BOOL)canBecomeFocused;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_attributedTitleForState:(unsigned long long)a0 adjustedToTraitCollection:(id)a1;
- (id)backgroundImageForState:(unsigned long long)a0;
- (BOOL)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize { double x0; double x1; })a0 oldSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)scalesLargeContentImage;
- (void)_selectGestureChanged:(id)a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)largeContentImage;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1;
- (BOOL)_hasVisibleDefaultSelectionIndicator;
- (void)_setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)_archivableContent:(id *)a0;
- (BOOL)isAccessibilityElementByDefault;
- (void)setReversesTitleShadowWhenHighlighted:(BOOL)a0;
- (BOOL)_hasDrawingStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_highlightBounds;
- (void)_setDefaultFontForIdiom;
- (id)_selectionIndicatorView;
- (void)_commonInitForPrimaryAction:(id)a0;
- (id)_defaultFocusEffect;
- (BOOL)_isInCarPlay;
- (struct CGSize { double x0; double x1; })_titleShadowOffset;
- (void)_takeContentFromArchivableContent:(id)a0;
- (BOOL)_canHaveTitle;
- (double)_preferredMaxLayoutWidth;
- (BOOL)_shouldHaveFloatingAppearance;
- (BOOL)_hasHighlightColor;
- (id)_backgroundForState:(unsigned long long)a0 usesBackgroundForNormalState:(BOOL *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 primaryAction:(id)a1;
- (id)titleColorForState:(unsigned long long)a0;
- (BOOL)_unconditionallyWantsSetBoundsFromISEngineLayout;
- (double)_baselineOffsetFromNearestEdgeForLayoutAttribute:(long long)a0;
- (id)_shadowColorForState:(unsigned long long)a0;
- (void)_setImage:(id)a0 forStates:(unsigned long long)a1;
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)a0;
- (void)_refreshVisualProviderForTraitCollection:(id)a0;
- (double)_autolayoutSpacingAtEdge:(int)a0 forAttribute:(long long)a1 inContainer:(id)a2 isGuide:(BOOL)a3;
- (id)visualProviderClassForTraitCollection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clippedHighlightBounds;
- (double)_drawingStrokeForStyle:(long long)a0;
- (void)_invalidateForPropertyChange;
- (BOOL)_isEffectivelyDisabledExternalButton;
- (id)_externalBorderColorForState:(unsigned long long)a0;
- (id)_subtitleForState:(unsigned long long)a0;
- (id)_preferredConfigurationForState:(unsigned long long)a0;
- (BOOL)_isToggleButton;
- (id)titleShadowColorForState:(unsigned long long)a0;
- (id)preferredSymbolConfigurationForImageInState:(unsigned long long)a0;
- (void)_setContentHuggingPriorities:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
- (BOOL)_shouldSkipNormalLayoutForSakeOfTemplateLayout;
- (BOOL)_blurEnabled;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (unsigned long long)defaultAccessibilityTraits;
- (void)_didChangeFromIdiom:(long long)a0 onScreen:(id)a1 traverseHierarchy:(BOOL)a2;
- (BOOL)_requiresLayoutForPropertyChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })titleEdgeInsets;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_setTitleColor:(id)a0 forStates:(unsigned long long)a1;
- (id)_borderColorForState:(unsigned long long)a0;
- (void)_setShadowColor:(id)a0 forStates:(unsigned long long)a1;
- (id)_defaultFontForIdiom:(long long)a0;
- (void)_setBackground:(id)a0 forStates:(unsigned long long)a1;
- (void)_setSubtitle:(id)a0 forState:(unsigned long long)a1;
- (BOOL)_isiOSSystemProvidedButton;
- (id)_layoutDebuggingTitle;
- (void)_setDrawingStroke:(double)a0 forState:(unsigned long long)a1;
- (id)_titleColorForState:(unsigned long long)a0;
- (BOOL)_accessibilityShouldActivateOnHUDLift;
- (double)_drawingStrokeForState:(unsigned long long)a0;
- (long long)_drawingStyleForStroke:(double)a0;
- (void)_setVisualEffectViewEnabled:(BOOL)a0 backgroundColor:(id)a1;
- (id)_contentForState:(unsigned long long)a0;
- (id)_preferredConfigurationForState:(unsigned long long)a0 includeDefault:(BOOL)a1;
- (id)_externalImageColorForState:(unsigned long long)a0;
- (void)setPreferredSymbolConfiguration:(id)a0 forImageInState:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void)_applyCarPlaySystemButtonCustomizations;
- (BOOL)isSpringLoaded;
- (id)_shapeInContainer:(id)a0 proposal:(id /* block */)a1;
- (void)_populateArchivedSubviews:(id)a0;
- (void)setSelected:(BOOL)a0;
- (id)_createPointerInteraction;
- (id)_pointerEffect;
- (void)_updateContextMenuEnabled;
- (id)_defaultImageForState:(unsigned long long)a0 withConfiguration:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (long long)_buttonType;
- (void)_setContent:(id)a0 forState:(unsigned long long)a1;
- (void)_shim_setConfiguration:(id)a0;
- (void)setSpringLoaded:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_combinedContentPaddingInsets;
- (void)_setHighlightedWithoutUpdatingState:(BOOL)a0;
- (BOOL)reversesTitleShadowWhenHighlighted;
- (BOOL)adjustsImageWhenHighlighted;
- (void)_setButtonType:(long long)a0;
- (void).cxx_destruct;
- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (BOOL)adjustsImageWhenDisabled;
- (BOOL)_isSystemProvidedButton;
- (void)updateConstraints;
- (void)setShowPressFeedback:(BOOL)a0;
- (double)_selectedIndicatorAlpha;
- (double)_scaleFactorForImage;
- (id)_selectedIndicatorViewWithImage:(id)a0;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_setAttributedSubtitle:(id)a0 forState:(unsigned long long)a1;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_attributedSubtitleForState:(unsigned long long)a0;
- (id)_currentImageWithResolvedConfiguration;
- (void)_updateBaselineInformationDependentOnBounds;
- (BOOL)_visualEffectViewEnabled;
- (void)_resetLazyTitleViewFont;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)a0;
- (void)crossfadeToImage:(id)a0 forState:(unsigned long long)a1;
- (BOOL)_hasImageForProperty:(id)a0;
- (void)_setLetterpressStyle:(id)a0 forState:(unsigned long long)a1;
- (id)_lazyTitleViewFontIsDefaultForIdiom:(BOOL *)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setLazyTitleViewFont:(id)a0 isDefaultForIdiom:(BOOL)a1;
- (void)_setDrawingStyle:(long long)a0 forState:(unsigned long long)a1;
- (void)forcedSelectionOfMenu:(id)a0 willChangeTo:(id)a1;
- (void)_setImageColor:(id)a0 forStates:(unsigned long long)a1;
- (void)_setAttributedTitle:(id)a0 forStates:(unsigned long long)a1;
- (id)_attributedTitleForState:(unsigned long long)a0;
- (id)_letterpressStyleForState:(unsigned long long)a0;
- (void)_setNeedsUpdateConfiguration;
- (struct CGSize { double x0; double x1; })_roundSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_effectiveSizeForImage:(id)a0;
- (BOOL)_hasBaseline;
- (void)_setHovered:(BOOL)a0;
- (double)_additionalBaselineSpacingForEdge:(int)a0;
- (void)_setFont:(id)a0;
- (void)setTintColor:(id)a0;
- (id)imageForState:(unsigned long long)a0;
- (id)titleForState:(unsigned long long)a0;
- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (void)setAdjustsImageWhenHighlighted:(BOOL)a0;
- (BOOL)_isTitleFrozen;
- (id)_effectiveContentView;
- (void)setTitleShadowColor:(id)a0 forState:(unsigned long long)a1;
- (id)image;
- (long long)_lineBreakMode;
- (void)setTitleShadowColor:(id)a0 forStates:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)_externalFocusedTitleColor;
- (void)setContentVerticalAlignment:(long long)a0;
- (BOOL)_selectorOverridden:(SEL)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)_titleView;
- (id)attributedTitleForState:(unsigned long long)a0;
- (void)_setImageColor:(id)a0 forState:(unsigned long long)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_pathTitleEdgeInsets;
- (id)_allButtonContent;
- (void)_willMoveToWindow:(id)a0;
- (void)setTitleColor:(id)a0 forStates:(unsigned long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)_contentBackdropView;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)_gestureRecognizerFailed:(id)a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setTitle:(id)a0;
- (id)_externalTitleColorForState:(unsigned long long)a0 isTintColor:(BOOL *)a1;
- (id)_shapeInContainer:(id)a0;
- (void)_setBlurEnabled:(BOOL)a0;
- (void)tintColorDidChange;
- (void)_updateConfigurationUsingState:(id)a0;
- (void)setShowsMenuAsPrimaryAction:(BOOL)a0;
- (void)_installSelectGestureRecognizer;
- (void)setAdjustsImageWhenDisabled:(BOOL)a0;
- (BOOL)_likelyToHaveTitle;
- (void)_updateForAutomaticSelection;
- (id)_pointerEffectPreviewParameters;
- (id)_pointerEffectWithPreview:(id)a0;
- (void)_setTitleShadowOffset:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (BOOL)_isPopUpMenuButtonWithMenu:(id)a0;
- (void)setDisabledDimsImage:(BOOL)a0;
- (BOOL)_pointerInteractionCanBeAssisted;
- (BOOL)autosizesToFit;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)_fontIsDefaultForIdiom;
- (void)setAutosizesToFit:(BOOL)a0;
- (id)_viewForLoweringBaselineLayoutAttribute:(int)a0;
- (void)_setVisualProvider:(id)a0;
- (void)_setLineBreakMode:(long long)a0;
- (void)setBackgroundImage:(id)a0 forStates:(unsigned long long)a1;
- (id)_titleForState:(unsigned long long)a0;
- (double)_firstBaselineOffsetFromTop;
- (void)setTitleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setTitle:(id)a0 forStates:(unsigned long long)a1;
- (void)setImage:(id)a0 forStates:(unsigned long long)a1;
- (id)largeContentTitle;
- (id)_titleOrImageViewForBaselineLayout;
- (double)_highlightCornerRadius;
- (void)setContentHorizontalAlignment:(long long)a0;
- (void)_uninstallSelectGestureRecognizer;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (void)_refreshVisualProvider;
- (struct CGPoint { double x0; double x1; })pressFeedbackPosition;
- (void)_setFont:(id)a0 isDefaultForIdiom:(BOOL)a1;
- (void)_titleViewLabelMetricsChanged;
- (id)_titleColorForState:(unsigned long long)a0 suppressTintColorFollowing:(BOOL *)a1;
- (long long)_drawingStyleForState:(unsigned long long)a0;
- (id)_imageColorForState:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (void)_setTitle:(id)a0 forStates:(unsigned long long)a1;

@end
