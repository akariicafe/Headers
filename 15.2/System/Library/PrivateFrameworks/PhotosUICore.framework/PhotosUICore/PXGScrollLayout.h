@class PXGLayout, NSString, NSNumber, PXGScrollViewModel;
@protocol PXGScrollLayoutDelegate;

@interface PXGScrollLayout : PXGLayout <PXGAnchorDelegate, PXGViewSource, PXGScrollViewContainerDelegate, PXChangeObserver, PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _scrollViewSpriteIndex;
    unsigned short _scrollViewMediaVersion;
    BOOL _isUpdatingContentLayout;
    struct { BOOL willBeginScrolling; BOOL didScroll; BOOL willEndScrollingWithVelocityTargetContentOffset; BOOL didEndScrolling; } _delegateRespondsTo;
}

@property (readonly, nonatomic) PXGScrollViewModel *scrollViewModel;
@property (nonatomic) BOOL wantsScrollView;
@property (readonly, nonatomic) BOOL isScrolling;
@property (retain, nonatomic) PXGLayout *contentLayout;
@property (weak, nonatomic) id<PXGScrollLayoutDelegate> delegate;
@property (retain, nonatomic) NSNumber *fixedWidth;
@property (retain, nonatomic) NSNumber *fixedHeight;
@property (nonatomic) float scrollViewSpriteZPosition;
@property (nonatomic) long long scrollDecelerationRate;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (nonatomic) BOOL showsHorizontalScrollIndicator;
@property (nonatomic) BOOL draggingPerformsScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sublayoutNeedsUpdate:(id)a0;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)insertSublayout:(id)a0 atIndex:(long long)a1;
- (void)viewEnvironmentDidChange;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (void)_invalidateScrollView;
- (void)safeAreaInsetsDidChange;
- (id)layoutForItemChanges;
- (void)willUpdate;
- (void)screenScaleDidChange;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (struct CGPoint { double x0; double x1; })anchor:(id)a0 visibleRectOriginForProposedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forLayout:(id)a2;
- (id)axSpriteIndexes;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)stopScrolling;
- (void)_updateContentLayout;
- (void)isScrollingDidChange;
- (void)didUpdate;
- (void)_invalidateContentLayout;
- (void)alphaDidChange;
- (void)userInterfaceDirectionDidChange;
- (void)update;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)setIsScrolling:(BOOL)a0;
- (void)referenceSizeDidChange;
- (void)contentSizeDidChange;
- (id)initWithContentLayout:(id)a0;
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)a0;
- (long long)intrinsicScrollRegime;
- (unsigned int)viewHostingSpriteIndex;
- (void)lastScrollDirectionDidChange;
- (void)contentLayoutDidChange;
- (void)scrollViewContainerWillBeginScrolling:(id)a0;
- (void)scrollViewContainerDidScroll:(id)a0;
- (void)scrollViewContainerWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewContainerDidEndScrolling:(id)a0;
- (id)focusItemsForScrollViewContainer:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_invalidateLocalContent;
- (void)_updateLocalContent;
- (BOOL)axShouldBeConsideredAsSubgroup;

@end
