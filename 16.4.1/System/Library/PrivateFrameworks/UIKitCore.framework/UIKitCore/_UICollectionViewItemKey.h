@class NSString, NSIndexPath;

@interface _UICollectionViewItemKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isClone;

+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)a0 andIndexPath:(id)a1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)a0 andIndexPath:(id)a1;
+ (id)collectionItemKeyForLayoutAttributes:(id)a0;
+ (id)collectionItemKeyForCellWithIndexPath:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0 indexPath:(id)a1 identifier:(id)a2;
- (id)copyAsClone:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 indexPath:(id)a1 identifier:(id)a2 clone:(BOOL)a3;

@end
