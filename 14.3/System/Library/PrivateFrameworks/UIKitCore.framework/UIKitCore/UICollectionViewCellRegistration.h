@class UINib, NSString;

@interface UICollectionViewCellRegistration : NSObject {
    NSString *_reuseIdentifier;
}

@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) UINib *cellNib;
@property (readonly, nonatomic) id /* block */ configurationHandler;

+ (id)registrationWithCellClass:(Class)a0 configurationHandler:(id /* block */)a1;
+ (id)registrationWithCellNib:(id)a0 configurationHandler:(id /* block */)a1;

- (id)initWithCellClass:(Class)a0 cellNib:(id)a1 configurationHandler:(id /* block */)a2 reuseIdentifier:(id)a3;
- (void).cxx_destruct;
- (BOOL)hasCellNib;
- (BOOL)hasCellClass;
- (id)reuseIdentifier;

@end
