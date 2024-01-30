@class NSMutableDictionary, NSMutableSet;

@interface PUTilingLayoutInvalidationContext : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_invalidatedIndexPathsByTileKind;
@property (nonatomic) BOOL invalidatedAllTiles;
@property (nonatomic) BOOL invalidatedAnyTile;
@property (readonly, nonatomic) NSMutableSet *invalidatedTileKinds;
@property (readonly, nonatomic) BOOL invalidatedContentBounds;

- (void)invalidateAllTilesWithKind:(id)a0;
- (void)invalidateTileWithIndexPath:(id)a0 kind:(id)a1;
- (void)enumerateInvalidatedTilesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateAllTiles;
- (void)invalidateContentBounds;

@end
