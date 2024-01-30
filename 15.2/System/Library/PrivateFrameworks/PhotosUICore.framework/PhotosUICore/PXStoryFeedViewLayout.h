@class PXStoryFeedContentLayout, NSString, PXStoryFeedViewModel;

@interface PXStoryFeedViewLayout : PXGScrollLayout <PXGScrollLayoutDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isClearingLastVisibleAreaAnchoringInformation;
}

@property (readonly, nonatomic) PXStoryFeedContentLayout *feedContentLayout;
@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)clearLastVisibleAreaAnchoringInformation;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (unsigned long long)contentChangeTrend;
- (void)_updateContentSize;
- (void)_invalidateContentSize;
- (long long)scrollableAxis;
- (void)update;
- (void)_updateScrollParameters;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)referenceSizeDidChange;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_invalidateAnchorForVisibleArea;
- (void)_updateAnchorForVisibleArea;
- (void)_invalidateScrollParameters;

@end
