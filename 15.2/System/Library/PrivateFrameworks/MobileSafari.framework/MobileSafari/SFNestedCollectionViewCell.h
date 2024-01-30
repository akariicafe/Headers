@class UICollectionView;

@interface SFNestedCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UICollectionView *collectionView;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setUpCollectionViewIfNeeded;

@end
