@class NSIndexSet, NSSet, NSMutableIndexSet, NSMutableDictionary;

@interface _UICollectionLayoutSolveParameters : NSObject <NSCopying> {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryDict;
    BOOL _isFullResolve;
}

@property (readonly, nonatomic) BOOL isFullResolve;
@property (readonly, nonatomic) BOOL hasInvalidatedItems;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } scrollOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleBounds;
@property (readonly, nonatomic) NSIndexSet *invalidatedIndexes;
@property (readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;

+ (id)parametersForFullResolve;

- (id)init;
- (id)initWithInvalidatedIndexes:(id)a0 invalidatedAuxillaryDict:(id)a1 isFullResolve:(BOOL)a2 scrollOffset:(struct CGPoint { double x0; double x1; })a3 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInvalidatedIndexes:(id)a0;
- (id)indexesForInvalidatedAuxillariesOfKind:(id)a0;
- (id)copyWithScrollOffset:(struct CGPoint { double x0; double x1; })a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithInvalidatedIndexes:(id)a0 scrollOffset:(struct CGPoint { double x0; double x1; })a1 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)isEqual:(id)a0;
- (void)addAuxillaryIndex:(long long)a0 elementKind:(id)a1;
- (void)addItemIndex:(long long)a0;
- (id)invalidatedAuxillaryOffsets;

@end
