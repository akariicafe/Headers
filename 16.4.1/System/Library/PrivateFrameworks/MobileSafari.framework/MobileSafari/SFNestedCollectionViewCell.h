@class UICollectionView;

@interface SFNestedCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UICollectionView *collectionView;

- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)_setUpCollectionViewIfNeeded;

@end
