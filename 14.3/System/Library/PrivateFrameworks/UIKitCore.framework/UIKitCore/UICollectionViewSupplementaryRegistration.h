@class UINib, NSString;

@interface UICollectionViewSupplementaryRegistration : NSObject {
    NSString *_reuseIdentifier;
}

@property (readonly, nonatomic) Class supplementaryClass;
@property (readonly, nonatomic) UINib *supplementaryNib;
@property (readonly, nonatomic) NSString *elementKind;
@property (readonly, nonatomic) id /* block */ configurationHandler;

+ (id)registrationWithSupplementaryClass:(Class)a0 elementKind:(id)a1 configurationHandler:(id /* block */)a2;
+ (id)registrationWithSupplementaryNib:(id)a0 elementKind:(id)a1 configurationHandler:(id /* block */)a2;

- (id)initWithSupplementaryClass:(Class)a0 supplementaryNib:(id)a1 elementKind:(id)a2 configurationHandler:(id /* block */)a3 reuseIdentifier:(id)a4;
- (void).cxx_destruct;
- (BOOL)hasSupplementaryNib;
- (BOOL)hasSupplementaryClass;
- (id)reuseIdentifier;

@end
