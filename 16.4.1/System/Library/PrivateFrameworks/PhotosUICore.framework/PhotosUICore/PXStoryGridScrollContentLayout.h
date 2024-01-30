@class NSString, PXStoryModel;
@protocol PXStoryGridScrollContentLayoutDelegate, PXStoryTimeline;

@interface PXStoryGridScrollContentLayout : PXGLayout <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    unsigned int _firstPageSpriteIndex;
    struct { BOOL presentedScrollPositionDidChange; } _delegateRespondsTo;
}

@property (retain, nonatomic) id<PXStoryTimeline> displayedTimeline;
@property (nonatomic) struct CGPoint { double x; double y; } presentedScrollPosition;
@property (readonly, nonatomic) PXStoryModel *model;
@property (weak, nonatomic) id<PXStoryGridScrollContentLayoutDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0;
- (void)_invalidateContent;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (void)visibleRectDidChange;
- (void)_updateContent;
- (id)init;
- (void)referenceSizeDidChange;
- (void).cxx_destruct;
- (id)_createAnchorForScrollingWithOffsetProvider:(id /* block */)a0;
- (void)_invalidateDisplayedTimeline;
- (void)_invalidatePresentedScrollPosition;
- (struct CGPoint { double x0; double x1; })_offsetFromFirstPageForScrollingToClipWithIdentifier:(long long)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })_offsetFromFirstPageForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateDisplayedTimeline;
- (void)_updatePresentedScrollPosition;
- (id)createAnchorForScrollingToClipWithIdentifier:(long long)a0;
- (id)createAnchorForScrollingToPosition:(struct { long long x0; double x1; long long x2; })a0;

@end
