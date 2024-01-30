@class NSIndexSet, NSString, NSMutableIndexSet, NSMutableArray;

@interface PXTilingLayoutInvalidationContext : NSObject {
    NSMutableArray *_invalidatedTileIdentifiers;
    NSMutableIndexSet *_invalidatedTileGroups;
}

@property (readonly, nonatomic) NSIndexSet *invalidatedTileGroups;
@property (readonly, nonatomic) BOOL invalidatedAllTiles;
@property (readonly, nonatomic) BOOL invalidatedContentBounds;
@property (readonly, nonatomic) BOOL invalidatedScrollBounds;
@property (readonly, nonatomic) BOOL invalidatedVisibleRect;
@property (readonly, nonatomic) BOOL invalidatedScrollInfo;
@property (copy, nonatomic) NSString *tag;

- (void)invalidateEverything;
- (void).cxx_destruct;
- (id)description;
- (void)invalidateAllTiles;
- (void)invalidateTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x0; unsigned long long x1[10]; })a0;
- (void)invalidateTilesInGroup:(unsigned long long)a0;
- (void)enumerateInvalidatedTileIdentifiersUsingBlock:(id /* block */)a0;
- (void)invalidateScrollBounds;
- (void)invalidateVisibleRect;
- (void)invalidateScrollInfo;
- (void)invalidateContentBounds;

@end
