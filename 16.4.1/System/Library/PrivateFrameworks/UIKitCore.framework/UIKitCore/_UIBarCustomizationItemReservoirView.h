@class _UIShapeView, UIView, UINavigationBar, NSString, _UIDiffuseShadowView, NSMutableArray, UICollectionView, UILabel;

@interface _UIBarCustomizationItemReservoirView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _computedInitialSize;
    BOOL _isEmpty;
}

@property (retain, nonatomic) _UIShapeView *arrowView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) _UIDiffuseShadowView *shadowView;
@property (retain, nonatomic) UINavigationBar *topBar;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *noContentLabel;
@property (retain, nonatomic) NSMutableArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)sizeToFit;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)_collectionView:(id)a0 layout:(id)a1 flowLayoutRowAlignmentOptionsForSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (id)initWithItems:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)invalidateLayoutAndForceUpdate:(BOOL)a0;
- (void)setResetAction:(id)a0;
- (void)scrollViewDidChangeContentSize:(id)a0;
- (double)_minimumLineSpacing;
- (void)_updateArrowColor;
- (void)_updateEmptyState;
- (id)flowLayout;
- (void)setDoneAction:(id)a0;

@end
