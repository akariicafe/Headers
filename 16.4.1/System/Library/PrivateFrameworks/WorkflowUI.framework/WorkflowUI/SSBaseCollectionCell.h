@interface SSBaseCollectionCell : UICollectionViewCell

@property (nonatomic) BOOL didCompleteSetup;

+ (id)identifier;
+ (id)cellForCollectionView:(id)a0 indexPath:(id)a1;

- (void)configureCell;

@end
