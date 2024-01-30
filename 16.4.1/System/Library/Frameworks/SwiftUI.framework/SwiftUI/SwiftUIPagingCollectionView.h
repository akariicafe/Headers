@interface SwiftUIPagingCollectionView : UICollectionView {
    void /* unknown type, empty encoding */ pendingIndexPath;
    void /* unknown type, empty encoding */ lastScrolledIndexPath;
    void /* unknown type, empty encoding */ lastLayoutSize;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (void)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
