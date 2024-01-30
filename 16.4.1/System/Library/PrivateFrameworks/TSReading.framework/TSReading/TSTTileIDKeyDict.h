@interface TSTTileIDKeyDict : TSPContainedObject {
    void *mMap;
}

- (long long)count;
- (void)dealloc;
- (id)initWithOwner:(id)a0;
- (void)removeAllTiles;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1;
- (void)makeTilesPerformSelector:(SEL)a0;
- (void)removeTileForID:(struct { unsigned short x0; unsigned short x1; })a0;
- (void)setTile:(id)a0 forID:(struct { unsigned short x0; unsigned short x1; })a1;
- (id)tileForID:(struct { unsigned short x0; unsigned short x1; })a0;

@end
