@class UIView, SFUnifiedBarTheme, SFThemeColorEffectView, UIButton, SFUnifiedBarMetrics, SFUnifiedBarContentArrangement, SFUnifiedBarItemArrangement, NSMutableSet;

@interface SFUnifiedBar : UIView {
    SFUnifiedBarMetrics *_barMetrics;
    BOOL _needsNotifyMetricsDidChange;
    SFThemeColorEffectView *_backgroundView;
    UIView *_separator;
    UIView *_squishedContentView;
    UIButton *_squishedBarButton;
    NSMutableSet *_itemViewsToRemoveOnNextLayout;
}

@property (nonatomic, setter=_setShowsSquishedContent:) BOOL _showsSquishedContent;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } _squishAnchorPoint;
@property (readonly, nonatomic) double _squishVerticalOffset;
@property (retain, nonatomic) SFUnifiedBarItemArrangement *itemArrangement;
@property (retain, nonatomic) SFUnifiedBarContentArrangement *contentArrangement;
@property (retain, nonatomic) SFUnifiedBarTheme *barTheme;
@property (readonly, nonatomic) unsigned long long sizeClass;
@property (readonly, nonatomic) double expandedHeight;
@property (readonly, nonatomic) double squishedHeight;
@property (readonly, nonatomic) double squishTransformFactor;
@property (nonatomic) double contentUnderStatusBarHeight;
@property (nonatomic) double extendedBottomHeight;
@property (nonatomic) BOOL inlineContentViewPinsScrollPositionToTrailingEdgeDuringResize;
@property (nonatomic) BOOL showsSeparator;
@property (nonatomic) BOOL usesFaintSeparator;
@property (nonatomic) unsigned long long marginLevel;
@property (readonly, nonatomic) UIView *leadingItemContainerView;
@property (readonly, nonatomic) UIView *trailingItemContainerView;
@property (nonatomic) unsigned long long backgroundVisibility;
@property (nonatomic) double chromelessScrollDistance;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_itemSpacing;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (double)_backgroundAlpha;
- (void)metricsDidChange;
- (void)setItemArrangement:(id)a0 animated:(BOOL)a1;
- (void)_updateBackgroundAlpha;
- (double)_themeColorVisibility;
- (void)squishedBarTapped;
- (double)_layoutIndexes:(id)a0 ofItems:(id)a1 alongEdge:(long long)a2 transitioning:(BOOL)a3;
- (void)_setNeedsRemovalForViewsAtIndexes:(id)a0 ofItems:(id)a1;
- (void)_removeViewsForIndexes:(id)a0 ofItems:(id)a1;
- (void)_uninstallContentView:(id)a0;
- (void)_installContentView:(id)a0;
- (void)_updateSizeClass;
- (void)_layoutItems:(id)a0 alongEdge:(long long)a1;
- (void)_layOutInlineContentView;
- (void)_layOutStandaloneContentViews;
- (double)_inlineContentHeight;
- (double)_spacingBelowContentView:(id)a0;
- (double)_layOutStandaloneContentView:(id)a0 atIndex:(unsigned long long)a1 minY:(double)a2;
- (double)_contentViewSpacing;
- (void)_updateSquishedAccessoryViews;
- (void)setBarTheme:(id)a0 animated:(BOOL)a1;
- (void)_updateSeparatorColor;

@end
