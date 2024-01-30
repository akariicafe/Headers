@class PXStoryModel, NSString, PXStoryStyleScrollContentLayout, PXStoryPagedScrollContentLayout;
@protocol PXStoryScrollLayoutTargetContentOffsetAdjuster;

@interface PXStoryScrollLayout : PXGScrollLayout <PXGScrollLayoutDelegate, PXChangeObserver> {
    BOOL _isUpdating;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    unsigned long long _scrollPositionUpdateReason;
}

@property (readonly, nonatomic) PXStoryPagedScrollContentLayout *pagedScrollContentLayout;
@property (readonly, nonatomic) PXStoryStyleScrollContentLayout *styleScrollContentLayout;
@property (readonly, nonatomic) id modelChangeOrigin;
@property (retain, nonatomic) id<PXStoryScrollLayoutTargetContentOffsetAdjuster> targetContentOffsetAdjuster;
@property (readonly, nonatomic) long long scrollPositionComparedToEnd;
@property (nonatomic) BOOL scrollBeganAtTimelineEnd;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateContentView;
- (void)willUpdate;
- (void)isScrollingDidChange;
- (void)didUpdate;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (id)initWithModel:(id)a0;
- (void)scrollLayoutWillBeginScrolling:(id)a0;
- (void)scrollLayoutDidScroll:(id)a0;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)contentLayoutDidChange;
- (void)_invalidateContentView;
- (void)_invalidateContentScrollPositionWithReason:(unsigned long long)a0;
- (void)_updateContentScrollPosition;
- (void)_invalidateScrollDecelerationRate;
- (void)_updateScrollDecelerationRate;
- (void)_invalidateScrollViewZPosition;
- (void)_updateScrollViewZPosition;
- (void)_invalidateWantsScrollView;
- (void)_updateWantsScrollView;
- (void)_invalidatePostUpdateEntities:(unsigned long long)a0;
- (void)_invalidateModelIsScrolling;
- (void)_updateModelIsScrolling;
- (void)_invalidateModelScrollPosition;
- (void)_updateModelScrollPosition;

@end
