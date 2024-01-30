@class NSMutableDictionary, NSMutableSet;

@interface PUTilingLayoutInvalidationContext : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_invalidatedIndexPathsByTileKind;
@property (nonatomic) BOOL invalidatedAllTiles;
@property (nonatomic) BOOL invalidatedAnyTile;
@property (readonly, nonatomic) NSMutableSet *invalidatedTileKinds;
@property (readonly, nonatomic) BOOL invalidatedContentBounds;

- (void)enumerateInvalidatedTilesUsingBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateTileWithIndexPath:(id)a0 kind:(id)a1;
- (void)invalidateAllTilesWithKind:(id)a0;
- (void)invalidateAllTiles;
- (void)invalidateContentBounds;

@end
