@class NSString, NSIndexPath;
@protocol __TVShelfViewControllerDelegate;

@interface _TVShelfViewController : _TVMLCollectionViewController <TVShelfViewLayoutDelegate, UICollectionViewDelegateFlowLayout> {
    NSIndexPath *_pendingPreviewedIndexPath;
    NSIndexPath *_lastPreviewedIndexPath;
    double _lastPreviewDelay;
    unsigned long long _autohighlightScrollPosition;
    BOOL _configureForListTemplate;
    long long _listTemplateAlignment;
    struct { BOOL hasUpdateRelatedView; BOOL hasDidSelectItemAtIndexPath; BOOL hasDidPlayItemAtIndexPath; BOOL hasDidSettleOnItemAtIndexPath; BOOL hasDidSnapToItemAtIndexPath; BOOL hasFocusDependentMethods; } _delegateFlags;
}

@property (nonatomic) long long prominentSectionIndex;
@property (weak, nonatomic) id<__TVShelfViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long speedBumpEdges;
@property (nonatomic, getter=isCentered) BOOL centered;
@property (nonatomic) BOOL hideHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_contentForCell:(id)a0 shouldHide:(BOOL)a1;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)updateWithViewElement:(id)a0;
- (void)updateWithViewElement:(id)a0 cellMetrics:(struct TVCellMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; })a1;
- (void)_delayedUpdatePreview;
- (void)_didSettleOnItemAtIndexPath:(id)a0;
- (void)dispatchEvent:(id)a0 forItemAtIndexPath:(id)a1 completionBlock:(id /* block */)a2;
- (struct CGSize { double x0; double x1; })expectedCellSizeForElement:(id)a0 atIndexPath:(id)a1;
- (void)updateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)makeCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)contentFlowsVertically;
- (unsigned long long)preferredScrollPosition;
- (void)updateViewLayoutAnimated:(BOOL)a0 relayout:(BOOL)a1;

@end
