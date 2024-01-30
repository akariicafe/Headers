@class _UICollectionLayoutSpacing;

@interface _UICollectionLayoutEdgeSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {
    _UICollectionLayoutSpacing *_leading;
    _UICollectionLayoutSpacing *_top;
    _UICollectionLayoutSpacing *_trailing;
    _UICollectionLayoutSpacing *_bottom;
}

@property (readonly, nonatomic) _UICollectionLayoutSpacing *leading;
@property (readonly, nonatomic) _UICollectionLayoutSpacing *top;
@property (readonly, nonatomic) _UICollectionLayoutSpacing *trailing;
@property (readonly, nonatomic) _UICollectionLayoutSpacing *bottom;

+ (id)fixedSpacing:(double)a0;
+ (id)spacingForLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;

- (id)initWithLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
- (id)_apiRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
