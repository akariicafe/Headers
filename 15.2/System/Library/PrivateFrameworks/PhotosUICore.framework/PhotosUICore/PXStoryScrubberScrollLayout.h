@class NSString, PXStoryViewModel, PXStoryModel;
@protocol PXStoryTimeline;

@interface PXStoryScrubberScrollLayout : PXGLayout <PXGSolidColorSource, PXChangeObserver, PXGScrollLayoutDelegate> {
    BOOL _isUpdating;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _firstPageSpriteIndex;
}

@property (retain, nonatomic) id<PXStoryTimeline> displayedTimeline;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) struct { long long firstSegmentIdentifier; double secondSegmentMixFactor; long long secondSegmentIdentifier; } presentedScrubberPosition;
@property (readonly, nonatomic) id modelChangeOrigin;
@property (readonly, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willUpdate;
- (void)_updateContent;
- (void)_invalidateContent;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)visibleRectDidChange;
- (void)didUpdate;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (struct CGPoint { double x0; double x1; })_offsetFromFirstPageForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)createAnchorForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0;
- (void)_invalidateDisplayedTimeline;
- (void)_updateDisplayedTimeline;
- (void)scrollLayoutWillBeginScrolling:(id)a0;
- (void)scrollLayoutDidScroll:(id)a0;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollLayoutDidEndScrolling:(id)a0;
- (id)initWithViewModel:(id)a0 model:(id)a1;
- (void)_invalidatePages;
- (void)_updatePages;
- (void)_invalidateCurrentScrollPosition;
- (void)_updateCurrentScrollPosition;
- (void)_invalidatePresentedScrubberPosition;
- (void)_updatePresentedScrubberPosition;
- (void)_invalidateModelScrubberPosition;
- (void)_updateModelScrubberPosition;
- (void)adjustScrollTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
