@interface TSTTileIDKeyDict : TSPContainedObject {
    void *mMap;
}

- (void)removeAllTiles;
- (id)initWithOwner:(id)a0;
- (long long)count;
- (void)dealloc;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1;
- (id)tileForID:(struct { unsigned short x0; unsigned short x1; })a0;
- (void)setTile:(id)a0 forID:(struct { unsigned short x0; unsigned short x1; })a1;
- (void)removeTileForID:(struct { unsigned short x0; unsigned short x1; })a0;
- (void)makeTilesPerformSelector:(SEL)a0;

@end
