@class NSString, PXFeedViewModel, PXFeedContentLayout;

@interface PXFeedViewScrollLayout : PXGScrollLayout <PXGScrollLayoutDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isClearingLastVisibleAreaAnchoringInformation;
}

@property (readonly, nonatomic) PXFeedContentLayout *feedContentLayout;
@property (readonly, nonatomic) PXFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearLastVisibleAreaAnchoringInformation;
- (void)_updateContentSize;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)update;
- (long long)scrollableAxis;
- (unsigned long long)contentChangeTrend;
- (void)_invalidateContentSize;
- (void)_updateScrollParameters;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)referenceSizeDidChange;
- (void).cxx_destruct;
- (void)_invalidateAnchorForVisibleArea;
- (void)_invalidateScrollParameters;
- (void)_updateAnchorForVisibleArea;
- (id)initWithViewModel:(id)a0 displayingFeedContentLayout:(id)a1;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;

@end
