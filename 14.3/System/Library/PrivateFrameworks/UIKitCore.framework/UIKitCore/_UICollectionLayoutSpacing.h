@interface _UICollectionLayoutSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {
    double _spacing;
    BOOL _isFlexible;
}

@property (readonly, nonatomic) double spacing;
@property (readonly, nonatomic) BOOL isFlexibleSpacing;
@property (readonly, nonatomic) BOOL isFixedSpacing;

+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;
+ (id)fixedSpacing:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_apiRepresentation;
- (id)initWithSpacing:(double)a0 flexible:(BOOL)a1;

@end
