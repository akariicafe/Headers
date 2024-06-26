@class NSMutableDictionary, NSMapTable, SBHIconImageCache, SBIconListViewLayoutMetrics, _UILegibilitySettings, SBIconListViewDraggingDestinationDelegate, NSMutableArray, SBIconListModel, SBHIconSettings, NSString, NSHashTable, SBFolderIconImageCache, NSArray, SBIconListViewIconLocationTransitionHandler, SBHIconEditingSettings;
@protocol SBIconViewProviding, SBIconListLayoutDelegate, SBIconListLayout, SBIconListLayoutProvider, SBIconListViewDragDelegate;

@interface SBIconListView : UIView <SBIconObserver, PTSettingsKeyObserver, SBIconListModelObserver, BSDescriptionProviding> {
    NSMutableArray *_removedIcons;
    BOOL _needsLayout;
    BOOL _inLayout;
    BOOL _rotating;
    BOOL _ignoreNextWindowChange;
    BOOL _performingSpecialIconAnimations;
    NSMapTable *_iconViews;
    NSMapTable *_specialIconAnimations;
    NSMapTable *_pausedLayoutForIconViews;
    NSHashTable *_iconVisibilityAssertions;
    NSMutableDictionary *_groupNamesToCaptureOnlyBackgroundViews;
    NSMapTable *_iconsToCaptureOnlyBackgroundAssertions;
    SBIconListViewDraggingDestinationDelegate *_draggingDelegate;
    struct __CFRunLoopObserver { } *_layoutRunLoopObserver;
    NSHashTable *_layoutObservers;
    SBIconListViewLayoutMetrics *_cachedMetrics;
    double _desiredLaserPaddingX;
    double _desiredLaserPaddingY;
    BOOL _laserPadUsesAllAvailableSpace;
    SBHIconSettings *_iconSettings;
    SBHIconEditingSettings *_iconEditingSettings;
}

@property (class, readonly, nonatomic) long long rotationAnchor;
@property (class, readonly, nonatomic) unsigned long long defaultIconViewConfigurationOptions;

@property (retain, nonatomic) SBIconListViewIconLocationTransitionHandler *currentIconLocationTransitionHandler;
@property (readonly, nonatomic) Class baseIconViewClass;
@property (readonly, nonatomic) unsigned long long iconRowsForCurrentOrientation;
@property (readonly, nonatomic) unsigned long long iconColumnsForCurrentOrientation;
@property (readonly, nonatomic) unsigned long long iconsInRowForSpacingCalculation;
@property (readonly, nonatomic) unsigned long long iconRowsForSpacingCalculation;
@property (readonly, nonatomic) unsigned long long maximumIconCount;
@property (retain, nonatomic) id<SBIconListLayoutProvider> layoutProvider;
@property (readonly, nonatomic) id<SBIconListLayout> layout;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL adaptsOrientationToTraitCollection;
@property (readonly, nonatomic, getter=isVertical) BOOL vertical;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isPurged) BOOL purged;
@property (nonatomic, getter=isLayoutReversed) BOOL layoutReversed;
@property (nonatomic) unsigned long long automaticallyReversedLayoutOrientations;
@property (nonatomic) BOOL pausesIconsForScrolling;
@property (nonatomic) BOOL adjustsColumnPositionsForFullScreenWidth;
@property (nonatomic) unsigned long long userInterfaceLayoutDirectionHandling;
@property (readonly, nonatomic) long long userInterfaceLayoutDirection;
@property (nonatomic) unsigned long long iconViewConfigurationOptions;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id<SBIconListLayoutDelegate> layoutDelegate;
@property (retain, nonatomic) SBIconListModel *model;
@property (weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) NSArray *visibleIcons;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isFull) BOOL full;
@property (copy, nonatomic) NSString *iconLocation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } alignmentIconSize;
@property (nonatomic) BOOL automaticallyAdjustsLayoutMetricsToFit;
@property (readonly, nonatomic) double horizontalIconPadding;
@property (readonly, nonatomic) double verticalIconPadding;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } additionalLayoutInsets;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } iconLayoutRect;
@property (nonatomic) struct CGSize { double width; double height; } iconSpacing;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } effectiveIconSpacing;
@property (nonatomic) BOOL boundsSizeTracksContentSize;
@property (readonly, nonatomic) SBIconListViewLayoutMetrics *layoutMetrics;
@property (readonly, nonatomic) unsigned long long gridCellInfoOptions;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleColumnRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleRowRange;
@property (nonatomic) struct SBIconListPredictedVisibleColumn { unsigned long long column; double confidence; } predictedVisibleColumn;
@property (readonly, nonatomic) BOOL iconsNeedLayout;
@property (nonatomic) double iconContentScale;
@property (weak, nonatomic) id<SBIconListViewDragDelegate> dragDelegate;
@property (nonatomic) BOOL wantsFastIconReordering;
@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (retain, nonatomic) SBFolderIconImageCache *folderIconImageCache;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (readonly, nonatomic, getter=isTransitioningIconLocation) BOOL transitioningIconLocation;
@property (nonatomic) BOOL alignsIconsOnPixelBoundaries;
@property (nonatomic) long long layoutInsetsMode;
@property (readonly, nonatomic) unsigned long long numberOfDisplayedIconViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFrameForOrientation:(long long)a0;
+ (id)layoutMetricsForParameters:(struct SBIconListLayoutMetricsParameters { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; long long x3; long long x4; unsigned long long x5; unsigned long long x6; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; } x7; struct CGSize { double x0; double x1; } x8; struct CGSize { double x0; double x1; } x9; double x10; struct CGSize { double x0; double x1; } x11; unsigned long long x12; } *)a0 listModel:(id)a1;
+ (id)multiStageAnimator;
+ (id)defaultAnimator;
+ (id)builtInAnimatorForAnimationType:(long long)a0;
+ (id)dominoAnimator;
+ (id)clusterAnimator;

- (unsigned long long)bestIndexForInsertingIcon:(id)a0 atCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a1;
- (void)_removeIconViewsForIcons:(id)a0;
- (void)showAllIcons;
- (struct CGPoint { double x0; double x1; })centerForIcon:(id)a0 metrics:(id)a1;
- (void)willRotateWithTransitionCoordinator:(id)a0;
- (BOOL)allowsAddingIconCount:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })centerForIcon:(id)a0;
- (unsigned long long)gridCellIndexForCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 metrics:(id)a1;
- (unsigned long long)rowForIcon:(id)a0;
- (struct CGPoint { double x0; double x1; })centerForIconAtIndex:(unsigned long long)a0 metrics:(id)a1;
- (void)layoutAndCreateIcon:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)rowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_addIconViewsForIcons:(id)a0;
- (void)fadeInIconView:(id)a0;
- (id)dequeueReusableIconView;
- (void)_teardownLayoutRunloopObserverIfNeeded;
- (unsigned long long)indexOfIcon:(id)a0;
- (id)makeIconView;
- (void)iconGridSizeClassDidChange:(id)a0;
- (void)removeAllIconViews;
- (BOOL)isDock;
- (void)layoutAndCreateIcon:(id)a0;
- (unsigned long long)indexForCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 forOrientation:(long long)a1 metrics:(id)a2;
- (void)configureIconView:(id)a0 forIcon:(id)a1;
- (BOOL)isShowingAllIcons;
- (struct SBIconCoordinate { long long x0; long long x1; })coordinateForIconAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })centerForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (void)popIconView:(id)a0;
- (void)addLayoutObserver:(id)a0;
- (unsigned long long)bestGridCellIndexForInsertingIcon:(id)a0 atCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a1;
- (id)removedIcons;
- (void)_updateEditingStateForIcons:(id)a0 animated:(BOOL)a1;
- (struct SBIconCoordinate { long long x0; long long x1; })coordinateForIcon:(id)a0;
- (unsigned long long)iconIndexForCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 metrics:(id)a1;
- (struct CGPoint { double x0; double x1; })originForIcon:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIcon:(id)a0;
- (void)getLayoutMetricsParameters:(struct SBIconListLayoutMetricsParameters { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; long long x3; long long x4; unsigned long long x5; unsigned long long x6; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; } x7; struct CGSize { double x0; double x1; } x8; struct CGSize { double x0; double x1; } x9; double x10; struct CGSize { double x0; double x1; } x11; unsigned long long x12; } *)a0 orientation:(long long)a1;
- (void)markIcon:(id)a0 asNeedingAnimation:(long long)a1;
- (void)popIcon:(id)a0;
- (unsigned long long)columnAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldReparentView:(id)a0;
- (void)removeIconView:(id)a0;
- (id)iconAtPoint:(struct CGPoint { double x0; double x1; })a0 index:(unsigned long long *)a1;
- (void)getLayoutMetricsParameters:(struct SBIconListLayoutMetricsParameters { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; long long x3; long long x4; unsigned long long x5; unsigned long long x6; struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; } x7; struct CGSize { double x0; double x1; } x8; struct CGSize { double x0; double x1; } x9; double x10; struct CGSize { double x0; double x1; } x11; unsigned long long x12; } *)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutInsetsForOrientation:(long long)a0;
- (id)visibleGridCellIndexesWithMetrics:(id)a0;
- (id)iconViewForCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 metrics:(id)a1;
- (void)setAlphaForAllIcons:(double)a0;
- (void)enumerateIconViewsUsingBlock:(id /* block */)a0;
- (id)iconAtGridCellIndex:(unsigned long long)a0 metrics:(id)a1;
- (void)_captureOnlyBackgroundAssertionDidInvalidate:(id)a0;
- (id)gridCellInfo;
- (void)enumerateIconsUsingBlock:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })fractionalCoordinateAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)enumerateVisibleIconsUsingBlock:(id /* block */)a0;
- (BOOL)isRTL;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (void)addIconViewConfigurationOption:(unsigned long long)a0;
- (void)layoutIconsIfNeeded;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (void)iconLocationTransitionHandler:(id)a0 setProgress:(double)a1;
- (void)updateEditingStateAnimated:(BOOL)a0;
- (long long)layoutOrientation;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })originForIconAtCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 metrics:(id)a1 options:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)layoutIconsIfNeeded:(double)a0;
- (struct CGSize { double x0; double x1; })iconImageSize;
- (BOOL)isLayoutPausedForIconView:(id)a0;
- (double)layoutScale;
- (void)layoutIconsNow;
- (void)removeAllIconAnimations;
- (void)performSpecialIconAnimationsWithCompletionHandler:(id /* block */)a0;
- (BOOL)isDisplayingIconView:(id)a0;
- (void)performSpecialIconAnimation:(long long)a0 icon:(id)a1 completionHandler:(id /* block */)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)tintColor;
- (id)iconVisibilityInfoForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 normalized:(BOOL)a1;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })originForIconAtCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (void)didAddSubview:(id)a0;
- (void)layoutIconsIfNeededUsingAnimator:(id)a0 options:(unsigned long long)a1;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })iconGridSizeForClass:(unsigned long long)a0;
- (void)_addIconViewsForIcons:(id)a0 metrics:(id)a1;
- (id)iconAtCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 metrics:(id)a1;
- (void)removeLayoutObserver:(id)a0;
- (id)succinctDescription;
- (long long)dragPlacementForMovingIconOfGridSizeClass:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1 icon:(id)a2 options:(unsigned long long)a3;
- (void)ignoreNextWindowChange;
- (BOOL)_iconIsGapAdjacentAtIndex:(unsigned long long)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)updateReversedLayoutBasedOnOrientation;
- (void)hideAllIcons;
- (void)performDefaultAnimatedRemovalForIconViews:(id)a0 completionHandler:(id /* block */)a1;
- (void)didAddIconView:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_allIconsVisibleColumnOrRowRange;
- (void)performDefaultAnimatedLayoutUpdateForIconView:(id)a0 withParameters:(struct SBIconListLayoutAnimationParameters { struct CGPoint { double x0; double x1; } x0; double x1; struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } x2; BOOL x3; struct SBIconCoordinate { long long x0; long long x1; } x4; BOOL x5; BOOL x6; unsigned long long x7; })a1;
- (void)iconList:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (void)iconList:(id)a0 didRemoveIcon:(id)a1;
- (struct CGSize { double x0; double x1; })alignmentIconViewSize;
- (void)setVisibleColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 predictedVisibleColumn:(struct SBIconListPredictedVisibleColumn { unsigned long long x0; double x1; })a1 visibleRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)_allowsFocusToLeaveViaHeading:(unsigned long long)a0;
- (void)iconLocationTransitionHandler:(id)a0 completeTransition:(BOOL)a1;
- (id)succinctDescriptionBuilder;
- (void)removeShowAllIconsAssertion:(id)a0;
- (unsigned long long)iconIndexForGridCellIndex:(unsigned long long)a0 metrics:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIconAtIndex:(unsigned long long)a0;
- (void)_applyIconPaddingSettings;
- (void)addDragObserver:(id)a0 forDropSession:(id)a1;
- (id)initWithModel:(id)a0 layoutProvider:(id)a1 iconLocation:(id)a2 orientation:(long long)a3 iconViewProvider:(id)a4;
- (unsigned long long)rowAtPoint:(struct CGPoint { double x0; double x1; })a0 metrics:(id)a1;
- (void)setIconsLabelAlpha:(double)a0;
- (void)layoutIconsIfNeeded:(double)a0 animationType:(long long)a1 options:(unsigned long long)a2;
- (void)_removeCaptureOnlyBackgroundViewForRemovedIconIfNecessary:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cursorHitTestingInsetsForIconSpacing:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })centerForIconAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })iconImageSizeForGridSizeClass:(unsigned long long)a0;
- (void)pauseLayout:(BOOL)a0 forIconView:(id)a1 withReason:(id)a2;
- (struct SBIconCoordinate { long long x0; long long x1; })iconCoordinateForIndex:(unsigned long long)a0 metrics:(id)a1;
- (void)_cleanupIconViewsForRemovedIcons:(id)a0;
- (unsigned long long)indexForCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 forOrientation:(long long)a1;
- (void)_updateVisibleIconViewsWithOldVisibleGridCellIndexes:(id)a0 metrics:(id)a1;
- (void)fadeInIcon:(id)a0;
- (void)_setupLayoutRunLoopObserver;
- (id)requireAllIconsShownForReason:(id)a0;
- (void)_insertCaptureOnlyBackgroundViewForInsertingIconViewIfNecessary:(id)a0;
- (double)horizontalBumpForColumn:(unsigned long long)a0 metrics:(id)a1;
- (id)iconViewForIcon:(id)a0;
- (void)performZoomOutSpecialIconAnimationWithIcon:(id)a0 completionHandler:(id /* block */)a1;
- (struct SBIconCoordinate { long long x0; long long x1; })iconCoordinateForGridCellIndex:(unsigned long long)a0 metrics:(id)a1;
- (struct SBIconCoordinate { long long x0; long long x1; })coordinateAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)visibleGridCellIndexes;
- (id)displayedIconViewForIcon:(id)a0;
- (struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })iconImageInfoForGridSizeClass:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_overrideOriginForIconAtRowIndex:(unsigned long long)a0 columnIndex:(unsigned long long)a1 gridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a2 metrics:(id)a3;
- (BOOL)getIconStartGridCellIndex:(unsigned long long *)a0 gridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; } *)a1 forGridCellIndex:(unsigned long long)a2 metrics:(id)a3;
- (id)beginTransitionToIconLocation:(id)a0 reason:(id)a1;
- (struct CGPoint { double x0; double x1; })originForIconAtIndex:(unsigned long long)a0;
- (id)layoutMetricsForOrientation:(long long)a0;
- (struct SBIconCoordinate { long long x0; long long x1; })iconCoordinateForIndex:(unsigned long long)a0 forOrientation:(long long)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)containsIcon:(id)a0;
- (void)removeIconViewConfigurationOption:(unsigned long long)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)iconList:(id)a0 didMoveIcon:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)columnAtPoint:(struct CGPoint { double x0; double x1; })a0 fractionOfDistanceThroughColumn:(double *)a1;
- (struct CGPoint { double x0; double x1; })originForIconAtCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 metrics:(id)a1;
- (struct CGPoint { double x0; double x1; })centerForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0 metrics:(id)a1;
- (void)setIconsNeedLayout;
- (double)continuousCornerRadiusForGridSizeClass:(unsigned long long)a0;
- (unsigned long long)columnAtPoint:(struct CGPoint { double x0; double x1; })a0 metrics:(id)a1 fractionOfDistanceThroughColumn:(double *)a2;
- (unsigned long long)iconGridSizeClassForIconGridSize:(struct SBHIconGridSize { unsigned short x0; unsigned short x1; })a0;

@end
