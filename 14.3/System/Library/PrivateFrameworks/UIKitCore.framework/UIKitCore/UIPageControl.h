@class UIColor, UIImage, _UIPageControlVisualProvider, _UILegibilitySettings;

@interface UIPageControl : UIControl {
    _UIPageControlVisualProvider *_visualProvider;
    struct { unsigned char hideForSinglePage : 1; unsigned char defersCurrentPageDisplay : 1; unsigned char allowScrubbing : 1; unsigned char flickToEndGestureEnabled : 1; } _pageControlFlags;
    struct { unsigned char verticalPadding : 1; unsigned char horizontalPadding : 1; unsigned char indicatorSpacing : 1; } _custom;
    double _horizontalPadding;
    double _verticalPadding;
    double _indicatorSpacing;
    unsigned long long _preferredNumberOfVisibleIndicators;
}

@property (nonatomic) long long previousPage;
@property (nonatomic, setter=_setFlickToEndGestureEnabled:) BOOL _flickToEndGestureEnabled;
@property (nonatomic, getter=_legibilityStyle, setter=_setLegibilityStyle:) long long legibilityStyle;
@property (retain, nonatomic, getter=_legibilitySettings, setter=_setLegibilitySettings:) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;
@property (nonatomic) BOOL hidesForSinglePage;
@property (retain, nonatomic) UIColor *pageIndicatorTintColor;
@property (retain, nonatomic) UIColor *currentPageIndicatorTintColor;
@property (nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) long long interactionState;
@property (nonatomic) BOOL allowsContinuousInteraction;
@property (retain, nonatomic) UIImage *preferredIndicatorImage;
@property (nonatomic) BOOL defersCurrentPageDisplay;

+ (BOOL)doesOverrideMethod:(SEL)a0 inBaseClass:(Class)a1;
+ (BOOL)_supportsInteractivePageControl;
+ (id)_visualProviderForPageControl:(id)a0;

- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (BOOL)canBecomeFocused;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_populateArchivedSubviews:(id)a0;
- (void)_transitionIndicator:(id)a0 toEnabled:(BOOL)a1 index:(long long)a2;
- (void)dealloc;
- (id)indicatorImageForPage:(long long)a0;
- (id)_createModernIndicatorImageFromView:(id)a0;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldTrack;
- (long long)_displayMode;
- (void)layoutSubviews;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_pageIndicatorImageForPage:(long long)a0;
- (BOOL)_implementsCustomPageImagesOverride;
- (void)_setCurrentPage:(long long)a0;
- (BOOL)_implementsCustomCurrentPageImagesOverride;
- (void)_setIndicatorImage:(id)a0;
- (void)_invalidateIndicators;
- (void)_updateCurrentPage:(long long)a0 updateDisplayImmediately:(BOOL)a1;
- (void)_updateCurrentPageDisplayWithForceUpdate:(BOOL)a0;
- (void)setIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)updateCurrentPageDisplay;
- (void)_setDisplayMode:(long long)a0;
- (double)_customHorizontalPadding;
- (void)_setIndicatorImage:(id)a0 forPage:(long long)a1;
- (double)_customVerticalPadding;
- (double)_customIndicatorSpacing;
- (void)_setCustomHorizontalPadding:(double)a0;
- (void)_setCurrentPageImage:(id)a0;
- (void)_setCustomVerticalPadding:(double)a0;
- (void)_setCustomIndicatorSpacing:(double)a0;
- (void)_setPreferredNumberOfVisibleIndicators:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_interactionState;
- (id)_indicatorViewEnabled:(BOOL)a0 index:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (long long)_displayedPage;
- (void)_setPageImage:(id)a0;
- (void)_drawModernIndicatorInView:(id)a0 enabled:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (id)_pageIndicatorCurrentImageForPage:(long long)a0;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)encodeWithCoder:(id)a0;

@end
