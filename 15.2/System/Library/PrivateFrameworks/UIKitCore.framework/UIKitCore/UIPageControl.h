@class UIColor, UIVisualEffect, UIImage, _UIPageControlVisualProvider;

@interface UIPageControl : UIControl {
    _UIPageControlVisualProvider *_visualProvider;
    struct { unsigned char hideForSinglePage : 1; unsigned char defersCurrentPageDisplay : 1; unsigned char allowScrubbing : 1; unsigned char allowTapping : 1; unsigned char flickToEndGestureEnabled : 1; } _pageControlFlags;
    struct { unsigned char verticalPadding : 1; unsigned char horizontalPadding : 1; unsigned char indicatorSpacing : 1; unsigned char layoutDirection : 1; } _custom;
    double _horizontalPadding;
    double _verticalPadding;
    double _indicatorSpacing;
    unsigned long long _preferredNumberOfVisibleIndicators;
    long long _layoutDirection;
}

@property (nonatomic, setter=_setLayoutDirection:) long long _layoutDirection;
@property (nonatomic) long long previousPage;
@property (nonatomic, setter=_setFlickToEndGestureEnabled:) BOOL _flickToEndGestureEnabled;
@property (retain, nonatomic, setter=_setPlatterEffect:) UIVisualEffect *_platterEffect;
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

+ (id)_visualProviderForPageControl:(id)a0;
+ (BOOL)doesOverrideMethod:(SEL)a0 inBaseClass:(Class)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)encodeWithCoder:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; } x3; } *)a0;
- (BOOL)shouldTrack;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_populateArchivedSubviews:(id)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (BOOL)_isVertical;
- (id)initWithCoder:(id)a0;
- (void)_setVertical:(BOOL)a0;
- (long long)_displayedPage;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_updateCurrentPage:(long long)a0 updateDisplayImmediately:(BOOL)a1;
- (void)_updateCurrentPageDisplayWithForceUpdate:(BOOL)a0;
- (double)_customIndicatorSpacing;
- (BOOL)_implementsCustomPageImagesOverride;
- (BOOL)_implementsCustomCurrentPageImagesOverride;
- (void)updateCurrentPageDisplay;
- (void)setIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)_invalidateIndicators;
- (double)_customVerticalPadding;
- (double)_customHorizontalPadding;
- (void)_setCustomHorizontalPadding:(double)a0;
- (void)_setCustomVerticalPadding:(double)a0;
- (void)_setCustomIndicatorSpacing:(double)a0;
- (void)_setPreferredNumberOfVisibleIndicators:(unsigned long long)a0;
- (BOOL)_allowsDiscreteInteraction;
- (void)_setAllowsDiscreteInteraction:(BOOL)a0;
- (void)dealloc;
- (id)indicatorImageForPage:(long long)a0;
- (void)_setCurrentPage:(long long)a0;

@end
