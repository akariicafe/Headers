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
+ (Class)_scrollViewClass;
+ (id)defaultIconLocation;

- (void)fadeContentForMagnificationFraction:(double)a0;
- (BOOL)_showsTitle;
- (void)_didAddIconListView:(id)a0;
- (void)_updateScalingViewFrame;
- (void)_updateScrollingState:(BOOL)a0;
- (void)_convertToSingleIconListAnimated:(BOOL)a0;
- (BOOL)locationCountsAsInsideFolder:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityTintColorForBackgroundView:(id)a0;
- (void)didTransitionAnimated:(BOOL)a0;
- (void)updateAccessibilityTintColors;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (long long)iconVisibilityHandling;
- (void)_handlePinchGesture:(id)a0;
- (struct CGPoint { double x0; double x1; })visibleFolderRelativeImageCenterForIcon:(id)a0;
- (id)floatyFolderConfiguration;
- (void)transitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_tapToCloseGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setLegibilitySettings:(id)a0;
- (void)fadeContentForMinificationFraction:(double)a0;
- (double)_rubberBandIntervalForOverscroll;
- (id)iconListViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setBackgroundAlpha:(double)a0;
- (void)enumeratePageBackgroundViewsUsingBlock:(id /* block */)a0;
- (void)_setScrollViewNeedsToClipCorners:(BOOL)a0;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (void)_updateIconListContainment:(id)a0 atIndex:(unsigned long long)a1;
- (void)_configureGestures;
- (void)_layoutSubviews;
- (id)_newPageBackgroundView;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGPoint { double x0; double x1; })_scrollView:(id)a0 adjustedOffsetForOffset:(struct CGPoint { double x0; double x1; })a1 translation:(struct CGPoint { double x0; double x1; })a2 startPoint:(struct CGPoint { double x0; double x1; })a3 locationInView:(struct CGPoint { double x0; double x1; })a4 horizontalVelocity:(inout double *)a5 verticalVelocity:(inout double *)a6;
- (void)_handleLongPressGesture:(id)a0;
- (void)_convertToMultipleIconListsAnimated:(BOOL)a0;
- (BOOL)_shouldConvertToMultipleIconListsInLandscapeOrientation;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageBackgroundFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityReduceTransparencyDidChange:(id)a0;
- (void)_updateScalingViewLocation;
- (void)dealloc;
- (void)_orientationDidChange:(long long)a0;
- (id)borrowScalingView;
- (void)_didRemoveIconListView:(id)a0;
- (double)scrollableWidthForVisibleColumnRange;
- (double)minimumVisibleScrollOffset;
- (id)legibilitySettingsForIconListViews;
- (void)willTransitionAnimated:(BOOL)a0 withSettings:(id)a1;
- (void)returnScalingView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForScalingView;
- (BOOL)_shouldManageScrolledHiddenClippedIconView;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_currentPageIndexDidChange;
- (double)_titleFontSize;
- (id)initWithConfiguration:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconListFrameForPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1;
- (void)_handleOutsideTap:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;

@end
