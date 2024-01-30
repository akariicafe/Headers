@interface _NUFixedTileSizeImageLayout : NUImageLayout {
    struct { long long width; long long height; } _tileSize;
    struct { long long width; long long height; } _borderSize;
    struct { long long width; long long height; } _tileCounts;
}

- (struct { long long x0; long long x1; })tileSize;
- (long long)tileCount;
- (struct { long long x0; long long x1; })borderSize;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })contentRectForTileAtIndex:(long long)a0;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })frameRectForTileAtIndex:(long long)a0;
- (id)initWithImageSize:(struct { long long x0; long long x1; })a0 tileSize:(struct { long long x0; long long x1; })a1 borderSize:(struct { long long x0; long long x1; })a2;
- (BOOL)isEqualToLayout:(id)a0;
- (struct { long long x0; long long x1; })tileCounts;
- (id)tileInfoAtIndex:(long long)a0;

@end
