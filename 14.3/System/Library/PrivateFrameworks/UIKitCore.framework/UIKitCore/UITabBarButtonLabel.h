@class UIColor, UITabBarButton, _UITabBarItemAppearanceStorage;

@interface UITabBarButtonLabel : UILabel {
    double _boundsWidth;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    BOOL _isSelected;
    BOOL _isHighlighted;
    BOOL _hasSeenIdiom;
}

@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass;
@property (retain, nonatomic) UIColor *unselectedTintColor;
@property (weak, nonatomic) UITabBarButton *tabBarButton;

+ (double)_fontPointSizeForIdiom:(long long)a0;

- (void)_setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (id)_fontForIdiom:(long long)a0;
- (id)_titleTextAttributesForState:(unsigned long long)a0;
- (void)_UIAppearance_setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void)_didChangeFromIdiom:(long long)a0 onScreen:(id)a1 traverseHierarchy:(BOOL)a2;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)updateTextColorsForState;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0;
- (id)initWithTabBarDisplayStyle:(long long)a0;
- (id)_fontForIdiom:(long long)a0 forTabBarDisplayStyle:(long long)a1;
- (BOOL)_shouldCeilSizeToViewScale;
- (void)setSelected:(BOOL)a0;
- (long long)_idiomForFontGivenIdiom:(long long)a0;
- (void)_UIAppearance_setBadgeColor:(id)a0;
- (void)_setBadgeColor:(id)a0;
- (void)_updateLabelsVibrancy;
- (void)_setTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0;
- (void)resizeToFitWidth:(double)a0;
- (void)_applyTabBarButtonAppearanceStorage:(id)a0 withTaggedSelectors:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setBadgeTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void)_UIAppearance_setBadgeTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void)_updateForFontChangeWithIdiom:(long long)a0;
- (void)_legacyApperance_updateTextColorsForState;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
