@interface _NUStripImageLayout : NUImageLayout {
    long long _stripHeight;
    long long _stripCount;
}

- (struct { long long x0; long long x1; })tileSize;
- (long long)tileCount;
- (struct { long long x0; long long x1; })borderSize;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })contentRectForTileAtIndex:(long long)a0;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })frameRectForTileAtIndex:(long long)a0;
- (id)initWithImageSize:(struct { long long x0; long long x1; })a0 stripHeight:(long long)a1;
- (BOOL)isEqualToLayout:(id)a0;
- (struct { long long x0; long long x1; })tileCounts;
- (id)tileInfoAtIndex:(long long)a0;

@end
