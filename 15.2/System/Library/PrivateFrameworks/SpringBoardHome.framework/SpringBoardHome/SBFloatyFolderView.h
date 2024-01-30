@class NSString, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPinchGestureRecognizer, SBHFolderSettings, SBFloatyFolderBackgroundClipView, NSMutableArray, UIScribbleInteraction, NSMapTable;

@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, PTSettingsKeyObserver, SBFolderBackgroundViewDelegate, UIScribbleInteractionDelegate> {
    SBFloatyFolderBackgroundClipView *_scrollClipView;
    NSMutableArray *_pageBackgroundViews;
    NSMapTable *_pageBackgroundViewsForIconListViews;
    long long _scalingViewPageIndex;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    SBHFolderSettings *_folderSettings;
}

@property (class, readonly, nonatomic) double defaultCornerRadius;

@property (readonly, nonatomic) BOOL displaysMultipleIconListsInLandscapeOrientation;
@property (nonatomic, getter=isDisplayingMultipleIconLists) BOOL displayingMultipleIconLists;
@property (nonatomic, getter=isConvertingIconListStyle) BOOL convertingIconListStyle;
@property (nonatomic, getter=isAnimatingRotation) BOOL animatingRotation;
@property (retain, nonatomic) UIScribbleInteraction *titleScribbleInteraction;
@property (readonly, nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long backgroundEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (id)defaultIconLocation;
+ (Class)_scrollViewClass;

- (void)returnScalingView;
- (void)_currentPageIndexDidChange;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_didAddIconListView:(id)a0;
- (long long)iconVisibilityHandling;
- (double)minimumVisibleScrollOffset;
- (void)_updateScrollingState:(BOOL)a0;
- (void)enumeratePageBackgroundViewsUsingBlock:(id /* block */)a0;
- (void)_handleOutsideTap:(id)a0;
- (void)_layoutSubviews;
- (void)_handleLongPressGesture:(id)a0;
- (BOOL)_tapToCloseGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (double)scrollableWidthForVisibleColumnRange;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)locationCountsAsInsideFolder:(struct CGPoint { double x0; double x1; })a0;
- (id)floatyFolderConfiguration;
- (void)_updateIconListContainment:(id)a0 atIndex:(unsigned long long)a1;
- (void)willTransitionAnimated:(BOOL)a0 withSettings:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForScalingView;
- (id)iconListViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)legibilitySettingsForIconListViews;
- (void)_configureGestures;
- (double)_rubberBandIntervalForOverscroll;
- (id)borrowScalingView;
- (void)setBackgroundAlpha:(double)a0;
- (BOOL)_showsTitle;
- (void)_setScrollViewNeedsToClipCorners:(BOOL)a0;
- (void)_didRemoveIconListView:(id)a0;
- (void)fadeContentForMagnificationFraction:(double)a0;
- (BOOL)_shouldConvertToMultipleIconListsInLandscapeOrientation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (BOOL)_shouldUseScrollableIconViewInteraction;
- (void)_handlePinchGesture:(id)a0;
- (struct CGPoint { double x0; double x1; })visibleFolderRelativeImageCenterForIcon:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)updateAccessibilityTintColors;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageBackgroundFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_convertToSingleIconListAnimated:(BOOL)a0;
- (void)_orientationDidChange:(long long)a0;
- (void)accessibilityReduceTransparencyDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_updateScalingViewFrame;
- (void)didTransitionAnimated:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_updateScalingViewLocation;
- (void)_convertToMultipleIconListsAnimated:(BOOL)a0;
- (double)_titleFontSize;
- (struct CGPoint { double x0; double x1; })_scrollView:(id)a0 adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2 startPoint:(struct CGPoint { double x0; double x1; })a3 locationInView:(struct CGPoint { double x0; double x1; })a4 horizontalVelocity:(inout double *)a5 verticalVelocity:(inout double *)a6;
- (void)fadeContentForMinificationFraction:(double)a0;
- (void)setLegibilitySettings:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)accessibilityTintColorForBackgroundView:(id)a0;
- (BOOL)scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)setCornerRadius:(double)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)_newPageBackgroundView;
- (void)dealloc;

@end
