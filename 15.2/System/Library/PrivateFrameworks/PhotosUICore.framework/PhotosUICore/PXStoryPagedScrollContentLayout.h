@class NSString, PXStoryModel;
@protocol PXStoryTimeline;

@interface PXStoryPagedScrollContentLayout : PXGLayout <PXGSolidColorSource, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    unsigned int _firstPageSpriteIndex;
}

@property (retain, nonatomic) id<PXStoryTimeline> displayedTimeline;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) double interpageSpacing;
@property (nonatomic) double presentedPageWidth;
@property (nonatomic) struct { long long firstSegmentIdentifier; double secondSegmentMixFactor; long long secondSegmentIdentifier; } presentedScrollPosition;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateContent;
- (void)_invalidateContent;
- (unsigned int)spriteIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)colorAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)visibleRectDidChange;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (id)initWithModel:(id)a0;
- (struct CGPoint { double x0; double x1; })_offsetFromFirstPageForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)createAnchorForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0;
- (void)_invalidateDisplayedTimeline;
- (void)_updateDisplayedTimeline;
- (void)_invalidatePresentedScrollPosition;
- (void)_updatePresentedScrollPosition;
- (void)_invalidatePages;
- (void)_updatePages;
- (void)adjustScrollTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
