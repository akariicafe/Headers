@class NSCollectionLayoutSpacing;

@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying> {
    NSCollectionLayoutSpacing *_leading;
    NSCollectionLayoutSpacing *_top;
    NSCollectionLayoutSpacing *_trailing;
    NSCollectionLayoutSpacing *_bottom;
}

@property (readonly, nonatomic) NSCollectionLayoutSpacing *leading;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *top;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *trailing;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *bottom;

+ (id)fixedSpacing:(double)a0;
+ (id)spacingForLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;

- (id)_externalDescription;
- (BOOL)isSpacingFixedForEdge:(unsigned long long)a0;
- (id)initWithLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
- (id)description;
- (BOOL)_hasSpacing;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_spacingForEdge:(unsigned long long)a0;
- (BOOL)isSpacingFlexibleForEdge:(unsigned long long)a0;
- (double)spacingForEdge:(unsigned long long)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeOutsets;

@end
