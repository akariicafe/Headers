@class NSArray, NSString, UICollectionView, UICollectionViewDiffableDataSource, NSIndexPath, NSLayoutConstraint;
@protocol MKTransitSystemFilterViewDelegate;

@interface MKTransitSystemFilterView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    NSIndexPath *_selectedIndexPath;
    NSLayoutConstraint *_heightConstraint;
    double _cachedHeight;
}

@property (retain, nonatomic) NSArray *transitSystems;
@property (weak, nonatomic) id<MKTransitSystemFilterViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_updateAppearance;
- (void)_setupCollectionView;

@end
