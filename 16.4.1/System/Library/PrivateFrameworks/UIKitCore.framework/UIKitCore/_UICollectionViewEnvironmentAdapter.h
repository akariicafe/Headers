@class UICollectionView;

@interface _UICollectionViewEnvironmentAdapter : NSObject

@property (weak, nonatomic, getter=_collectionView) UICollectionView *collectionView;

- (id)initWithCollectionView:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (struct CGSize { double x0; double x1; })contentSize;
- (void).cxx_destruct;
- (id)createEnvironment;

@end
