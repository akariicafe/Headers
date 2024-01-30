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

- (id)initWithModel:(id)a0;
- (void)didUpdate;
- (void)_updateContentView;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (void)isScrollingDidChange;
- (id)init;
- (void)willUpdate;
- (void)referenceSizeDidChange;
- (void).cxx_destruct;
- (void)scrollLayoutWillBeginScrolling:(id)a0;
- (void)_invalidateContentScrollPositionWithReason:(unsigned long long)a0;
- (void)_invalidateContentView;
- (void)_invalidateModelIsScrolling;
- (void)_invalidateModelScrollPosition;
- (void)_invalidatePostUpdateEntities:(unsigned long long)a0;
- (void)_invalidateScrollDecelerationRate;
- (void)_invalidateScrollViewZPosition;
- (void)_invalidateWantsScrollView;
- (void)_updateContentScrollPosition;
- (void)_updateModelIsScrolling;
- (void)_updateModelScrollPosition;
- (void)_updateScrollDecelerationRate;
- (void)_updateScrollViewZPosition;
- (void)_updateWantsScrollView;
- (void)contentLayoutDidChange;
- (void)scrollLayoutDidScroll:(id)a0;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;

@end
