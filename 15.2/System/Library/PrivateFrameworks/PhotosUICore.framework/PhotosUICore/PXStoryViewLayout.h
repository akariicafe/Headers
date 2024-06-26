@class PXStoryViewModel, NSString, PXGDecoratingLayout, PXPhotosContentController, PXStoryViewModeTransitionsHelper, PXStoryViewModeTransition, PXStoryRelatedOverlayItemDecorationSource, PXStoryModel, PXStoryLayout, PXGLayout;

@interface PXStoryViewLayout : PXGAbsoluteCompositeLayout <PXChangeObserver, PXPhotosViewDelegate, PXPhotosContentControllerDelegate, PXStoryViewModeTransitionsHelperDelegate, PXTapToRadarDiagnosticProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    unsigned short _contentVersion;
    BOOL _isUpdatingSublayouts;
    BOOL _isUpdatingGridLayout;
    PXStoryRelatedOverlayItemDecorationSource *_relatedDecorationSource;
    PXGDecoratingLayout *_relatedDecoratingLayout;
}

@property (retain, nonatomic) PXStoryModel *mainModel;
@property (retain, nonatomic) PXStoryLayout *mainStoryLayout;
@property (readonly, nonatomic) PXGLayout *mainStoryPlaceholderLayout;
@property (readonly, nonatomic) long long mainStoryLayoutIndex;
@property (readonly, nonatomic) long long legibilityOverlayLayoutIndex;
@property (readonly, nonatomic) long long chromeLayoutIndex;
@property (readonly, nonatomic) long long scrubberLayoutIndex;
@property (readonly, nonatomic) long long relatedOverlayLayoutIndex;
@property (readonly, nonatomic) long long gridLayoutIndex;
@property (readonly, nonatomic) long long diagnosticHUDLayoutIndex;
@property (readonly, nonatomic) PXPhotosContentController *gridContentController;
@property (nonatomic) struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } affineTransform; double tz; } presentedGridTransform;
@property (readonly, nonatomic) PXGLayout *gridPlaceholderLayout;
@property (readonly, nonatomic) BOOL inGridViewMode;
@property (nonatomic) BOOL shouldScrollGridToPlaybackPosition;
@property (retain, nonatomic) PXStoryViewModeTransitionsHelper *viewModeTransitionsHelper;
@property (retain, nonatomic) PXStoryViewModeTransition *gridViewModeTransition;
@property (readonly, nonatomic) id mainItemReference;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (id)createDefaultAnimationForCurrentContext;
- (void)referenceDepthDidChange;
- (void)willUpdate;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id /* block */)a0;
- (unsigned long long)contentChangeTrend;
- (void)_updateContentSize;
- (void)_invalidateMainModel;
- (void)visibleRectDidChange;
- (BOOL)allowsRepeatedSublayoutsUpdates;
- (void)_invalidateContentSize;
- (void)didUpdate;
- (id)preferredFocusLayouts;
- (long long)scrollableAxis;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (id)axLocalizedLabel;
- (BOOL)photosViewController:(id)a0 didPickAssetReference:(id)a1;
- (void)_updateMainModel;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)didUpdateSublayout:(id)a0;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (BOOL)photosContentController:(id)a0 presentViewController:(id)a1;
- (void)dismissPresentedViewControllerForContentController:(id)a0;
- (BOOL)photosContentController:(id)a0 pushViewController:(id)a1;
- (id)presentingViewControllerForContentController:(id)a0;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 relativeZPosition:(double)a1 depth:(double)a2 forSublayoutAtIndex:(long long)a3;
- (void)transitionsHelperNeedsUpdate:(id)a0;
- (id)transitionsHelper:(id)a0 timelineLayoutSnapshotForViewMode:(long long)a1;
- (id)transitionsHelper:(id)a0 regionOfInterestForTransition:(id)a1;
- (void)_invalidateMainStoryLayout;
- (void)_updateMainStoryLayout;
- (void)_invalidateGridLayout;
- (void)_updateGridLayout;
- (void)_invalidateSublayoutFrames;
- (void)_updateHeaderSpacing;
- (void)_updateSublayoutFrames;
- (void)_invalidateGridTransform;
- (void)_updateGridTransform;
- (void)_invalidateTransitionsHelper;
- (void)_updateTransitionsHelper;
- (void)_invalidateTransitionsHelperAfterSublayouts;
- (void)_updateTransitionsHelperAfterSublayouts;
- (void)_invalidateHiddenGridAssets;
- (void)_updateHiddenGridAssets;
- (void)_invalidateSublayoutOrigins;
- (void)_updateSublayoutOrigins;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scrubberBounds;
- (void)_axMoveCursorToPlayer;

@end
