@interface PromotedContentUI.CarouselAdView : APPCPromotedContentView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_headlineLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_advertiserView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_advertiserLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$__adSize;
    void /* unknown type, empty encoding */ elements;
    void /* unknown type, empty encoding */ dataRepresentation;
    void /* unknown type, empty encoding */ previousVelocity;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
