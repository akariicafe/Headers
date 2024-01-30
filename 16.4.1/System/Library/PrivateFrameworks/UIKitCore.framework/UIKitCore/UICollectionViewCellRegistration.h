@class NSString, UINib, UICollectionView;

@interface UICollectionViewCellRegistration : NSObject

@property (readonly, weak, nonatomic) UICollectionView *_collectionViewRequestingViewWhenCreated;
@property (readonly, nonatomic) NSString *reuseIdentifier;
@property (readonly, nonatomic) BOOL hasCellClass;
@property (readonly, nonatomic) BOOL hasCellNib;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) UINib *cellNib;
@property (readonly, nonatomic) id /* block */ configurationHandler;

+ (id)registrationWithCellClass:(Class)a0 configurationHandler:(id /* block */)a1;
+ (id)registrationWithCellNib:(id)a0 configurationHandler:(id /* block */)a1;

- (id)initWithCellClass:(Class)a0 cellNib:(id)a1 configurationHandler:(id /* block */)a2 reuseIdentifier:(id)a3;
- (void).cxx_destruct;

@end
