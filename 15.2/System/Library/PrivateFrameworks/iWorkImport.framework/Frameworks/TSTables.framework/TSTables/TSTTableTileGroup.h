@class TSPLazyReference, TSTTableTile;

@interface TSTTableTileGroup : NSObject {
    TSTTableTile *_tiles[256];
    TSPLazyReference *_references[256];
}

@property (nonatomic) unsigned long long startingTileID;

+ (id)groupWithStartingTileID:(unsigned long long)a0;

- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)enumerateReferencesWithBlock:(id /* block */)a0;
- (void)setReference:(id)a0 forTileID:(unsigned long long)a1;
- (void)enumerateTilesWithBlock:(id /* block */)a0;
- (void)enumerateLoadedTilesWithBlock:(id /* block */)a0;
- (id)initWithStartingTileID:(unsigned long long)a0;
- (id)_tileForLazyReference:(id)a0;

@end
