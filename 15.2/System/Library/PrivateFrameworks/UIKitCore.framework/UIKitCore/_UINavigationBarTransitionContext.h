@class UIView, UINavigationBar, NSMutableSet, _UINavigationBarContentViewLayout, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarModernPromptView, _UINavigationBarLargeTitleView, _UINavigationBarItemStack, _UINavigationBarLayout;

@interface _UINavigationBarTransitionContext : NSObject {
    _UINavigationBarContentViewLayout *_fromContentLayout;
    _UINavigationBarContentViewLayout *_toContentLayout;
    _UINavigationBarLargeTitleViewLayout *_fromLargeTitleLayout;
    _UINavigationBarLargeTitleViewLayout *_toLargeTitleLayout;
    int _largeTitleTransitionType;
    struct { unsigned char isRTL : 1; unsigned char compact : 1; unsigned char allowLargeTitles : 1; unsigned char twoPart : 1; unsigned char beginWithLargeTitle : 1; unsigned char endWithLargeTitle : 1; unsigned char observedScrollViewOffsetIsApplicable : 1; unsigned char sharesContentViewLayouts : 1; unsigned char beginWithTransparencyAllowed : 1; unsigned char endWithTransparencyAllowed : 1; } _navigationBarTransitionContextFlags;
    NSMutableSet *_clippingViews;
}

@property (readonly, nonatomic) int transition;
@property (nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) _UINavigationBarItemStack *stack;
@property (nonatomic, setter=setRTL:) BOOL isRTL;
@property (nonatomic) BOOL compact;
@property (nonatomic) BOOL allowLargeTitles;
@property (nonatomic) BOOL twoPart;
@property (nonatomic) long long apiVersion;
@property (nonatomic) double backgroundAlpha;
@property (retain, nonatomic) _UINavigationBarModernPromptView *promptView;
@property (retain, nonatomic) _UINavigationBarContentView *contentView;
@property (retain, nonatomic) _UIBarBackground *backgroundView;
@property (retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView;
@property (readonly, nonatomic) UIView *viewFadingInFromCustomAlpha;
@property (readonly, nonatomic) UIView *viewUsingEaseOutCurve;
@property (readonly, nonatomic) UIView *viewUsingEaseInCurve;
@property (readonly, nonatomic) double contentViewFittingHeight;
@property (readonly, nonatomic) double contentViewMaxY;
@property (nonatomic) BOOL beginWithLargeTitle;
@property (nonatomic) BOOL endWithLargeTitle;
@property (nonatomic) BOOL beginWithTransparencyAllowed;
@property (nonatomic) BOOL endWithTransparencyAllowed;
@property (nonatomic) struct CGPoint { double x; double y; } startingContentOffsetForObservedScrollView;
@property (nonatomic) BOOL observedScrollViewOffsetIsApplicable;
@property (nonatomic) BOOL sharesContentViewLayouts;
@property (retain, nonatomic) _UINavigationBarLayout *fromLayout;
@property (retain, nonatomic) _UINavigationBarLayout *toLayout;

+ (id)contextForTransition:(int)a0;

- (void)_animateAsTwoPartsWithOverlapIfNecessaryPartOne:(id /* block */)a0 partTwo:(id /* block */)a1;
- (void)_animateFromBottomPaletteAtEdge:(unsigned long long)a0;
- (void)_resetContentAndLargeTitleViewCompleted:(BOOL)a0;
- (void)_removeAllClippingViews;
- (void)setAllLargeTitleLayoutsVisible;
- (void)_animateBackgroundView;
- (void)_updateIncomingLayoutWidthToMatchOutgoingLayout;
- (void)animate;
- (void)_animateAsTwoPartsWithOverlap:(double)a0 partOne:(id /* block */)a1 partTwo:(id /* block */)a2;
- (BOOL)shouldPerformTwoPartCrossfadeTransition;
- (void)_addClippingView:(id)a0;
- (void)_prepareToBottomPaletteAtEdge:(unsigned long long)a0;
- (void)_animateAsTwoPartsWithoutOverlap:(id /* block */)a0 partTwo:(id /* block */)a1;
- (void)recordUpdates:(id /* block */)a0;
- (void)prepare;
- (id)description;
- (void)complete;
- (void).cxx_destruct;
- (void)cancel;

@end
