@class NSString, UINib, UICollectionView;

@interface UICollectionViewSupplementaryRegistration : NSObject

@property (readonly, weak, nonatomic) UICollectionView *_collectionViewRequestingViewWhenCreated;
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) BOOL hasSupplementaryClass;
@property (readonly, nonatomic) BOOL hasSupplementaryNib;
@property (readonly, nonatomic) Class supplementaryClass;
@property (readonly, nonatomic) UINib *supplementaryNib;
@property (readonly, nonatomic) NSString *elementKind;
@property (readonly, nonatomic) id /* block */ configurationHandler;

+ (id)registrationWithSupplementaryClass:(Class)a0 elementKind:(id)a1 configurationHandler:(id /* block */)a2;
+ (id)registrationWithSupplementaryNib:(id)a0 elementKind:(id)a1 configurationHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)initWithSupplementaryClass:(Class)a0 supplementaryNib:(id)a1 elementKind:(id)a2 configurationHandler:(id /* block */)a3 reuseIdentifier:(id)a4;

@end
