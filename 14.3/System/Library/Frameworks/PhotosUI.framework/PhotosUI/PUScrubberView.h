@class UIScrollView, PUScrubberTilingLayout, PUBrowsingSession, PXVideoScrubberController, UITapGestureRecognizer, NSString, NSMutableDictionary, PUTouchingGestureRecognizer, PUTilingView, NSIndexPath;
@protocol PUScrubberViewDelegate;

@interface PUScrubberView : UIView <PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUBrowsingViewModelChangeObserver, PUScrubberTilingLayoutDelegate, PXVideoScrubberControllerDelegate, PUPlaybackTimeIndicatorTileViewControllerDelegate, UIGestureRecognizerDelegate> {
    NSString *_scrubbingIdentifier;
    NSString *_contentScrubbingIdentifier;
    NSString *_transitionLayoutIdentifier;
    BOOL _loupeEffectIsValid;
    BOOL _snapToExpandedIsValid;
    BOOL _scrubberLayoutIsValid;
    BOOL _scrubberLayoutNeedsTransition;
    PUTouchingGestureRecognizer *_touchingGestureRecognizer;
    NSMutableDictionary *_aspectRatioByIndexPath;
    struct { BOOL respondsToShouldIgnoreHitTestWithEvent; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setScrubberLayout:) PUScrubberTilingLayout *_scrubberLayout;
@property (retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView;
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer;
@property (retain, nonatomic, setter=_setVideoScrubberController:) PXVideoScrubberController *_videoScrubberController;
@property (nonatomic, setter=_setExpandedItemType:) long long _expandedItemType;
@property (nonatomic, setter=_setIsHandlingUserScroll:) BOOL _isHandlingUserScroll;
@property (nonatomic, setter=_setScrubbingAwayFromContentEdge:) BOOL _isScrubbingAwayFromContentEdge;
@property (nonatomic, setter=_setScrollViewSettled:) BOOL _scrollViewSettled;
@property (nonatomic, setter=_setUseLoupe:) BOOL _useLoupe;
@property (nonatomic, setter=_setThinLoupe:) BOOL _thinLoupe;
@property (nonatomic, setter=_setUseSmoothingTransitionCoordinator:) BOOL _useSmoothingTransitionCoordinator;
@property (nonatomic, setter=_setSnapToExpandedItem:) BOOL _snapToExpandedItem;
@property (retain, nonatomic, setter=_setDecelerationTargetIndexPath:) NSIndexPath *_decelerationTargetIndexPath;
@property (nonatomic, setter=_setDecelerationTargetOffset:) struct CGPoint { double x; double y; } _decelerationTargetOffset;
@property (nonatomic, setter=_setDecelerationDistance:) double _decelerationDistance;
@property (nonatomic, setter=_setLayoutTransitionsDisabledCount:) long long _layoutTransitionsDisabledCount;
@property (nonatomic, setter=_setScrubbingTransitionProgress:) double _scrubbingTransitionProgress;
@property (nonatomic, setter=_setHandlingScrollViewWillEndDragging:) BOOL _isHandlingScrollViewWillEndDragging;
@property (readonly, nonatomic, getter=_areLayoutTransitionsDisabled) BOOL _layoutTransitionsDisabled;
@property (nonatomic) BOOL currentDragBeganOnContent;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<PUScrubberViewDelegate> delegate;
@property (readonly, nonatomic) double topOutset;
@property (readonly, nonatomic) UIScrollView *scrollViewForPreviewing;
@property (nonatomic) BOOL isForPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_expandedAssetReference;
- (BOOL)_isLibraryScrubbing;
- (double)_playheadProgressForIrisAssetReference:(id)a0;
- (void).cxx_destruct;
- (id)tilingView:(id)a0 tileTransitionCoordinatorForTransitionFromLayout:(id)a1 toLayout:(id)a2 withContext:(id)a3;
- (void)_updateScrollPositionAnimated:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_setNeedsUpdate;
- (id)tilingView:(id)a0 tileTransitionCoordinatorForLayoutInvalidationContext:(id)a1;
- (double)_lengthForDuration:(double)a0;
- (void)_invalidateSnapToExpandedItem;
- (void)dealloc;
- (void)cancelDeceleration;
- (void)_endScrubbing;
- (void)_disableLayoutTransitionsForDuration:(double)a0;
- (double)_expandedItemWidth;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)_newScrubberLayout;
- (void)_invalidateScrubberLayoutEnsureTransition;
- (void)_invalidateScrubberLayout;
- (BOOL)layout:(id)a0 shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)a1;
- (id)_currentAssetsDataSource;
- (void)updateIfNeeded;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_allowExitFromContentScrubbing;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)tilingView:(id)a0 tileControllerWithIndexPath:(id)a1 kind:(id)a2 dataSource:(id)a3;
- (void)videoScrubberController:(id)a0 desiredSeekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (double)videoScrubberController:(id)a0 lengthForDuration:(double)a1;
- (void)_updateSnapToExpandedItemIfNeeded;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_updateLoupeEffectIfNeeded;
- (void)_handleTapOnBrowsingVideoPlayer:(id)a0;
- (struct CGPoint { double x0; double x1; })tilingView:(id)a0 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint { double x0; double x1; })a1 withLayout:(id)a2;
- (float)layout:(id)a0 aspectRatioForItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateScrubberLayoutIfNeeded;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_handleUserScrollWillBegin:(BOOL)a0;
- (void)_updateScrubbingAwayFromContentEdgeBeganDragging:(BOOL)a0;
- (void)_updateTilingViewIfNeeded;
- (BOOL)_isDrivingPlayheadProgress;
- (void)_invalidateLoupeEffect;
- (void)handleTouchGesture:(id)a0;
- (BOOL)_isContentScrubbing;
- (void)beginPreviewing;
- (void)_handleTap:(id)a0;
- (id)tilingView:(id)a0 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 duration:(double)a3;
- (struct CGPoint { double x0; double x1; })tilingView:(id)a0 initialVisibleOriginWithLayout:(id)a1;
- (void)_handleTapOnBrowsingIrisPlayer:(id)a0;
- (void)_reenableLayoutTransitions;
- (void)videoScrubberControllerDidUpdate:(id)a0;
- (id)tilingView:(id)a0 dataSourceConverterForTransitionFromLayout:(id)a1 toLayout:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)playbackTimeIndicatorTileViewControllerCanFlashIndicator:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)endPreviewing;

@end
