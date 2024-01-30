@class NSString;

@interface _UICollectionLayoutAuxillaryKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *elementKind;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long auxillaryKind;
@property (readonly, nonatomic) BOOL isSupplementary;

- (id)initWithElementKind:(id)a0 index:(long long)a1 auxillaryKind:(long long)a2 isSupplementary:(BOOL)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
