@class NSString, NSArray, _UICollectionLayoutSize, _UICollectionLayoutEdgeSpacing;

@interface _UICollectionLayoutItem : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {
    NSArray *_supplementaryItems;
    NSArray *_decorationItems;
}

@property (readonly, nonatomic) _UICollectionLayoutSize *size;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;
@property (copy, nonatomic) _UICollectionLayoutEdgeSpacing *edgeSpacing;
@property (copy, nonatomic) NSString *name;

+ (id)itemWithSize:(id)a0 decorationItems:(id)a1;
+ (id)itemWithSize:(id)a0;
+ (id)itemWithSize:(id)a0 supplementaryItems:(id)a1 decorationItems:(id)a2;
+ (id)itemWithSize:(id)a0 supplementaryItems:(id)a1;

- (id)initWithSize:(id)a0 supplementaryItems:(id)a1 decorationItems:(id)a2 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a3 edgeSpacing:(id)a4 name:(id)a5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_apiRepresentation;

@end
