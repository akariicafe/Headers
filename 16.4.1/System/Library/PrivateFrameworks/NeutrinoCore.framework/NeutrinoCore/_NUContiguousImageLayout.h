@interface _NUContiguousImageLayout : NUImageLayout

- (struct { long long x0; long long x1; })tileSize;
- (long long)tileCount;
- (struct { long long x0; long long x1; })borderSize;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })contentRectForTileAtIndex:(long long)a0;
- (void)enumerateTilesForReadingInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 withBlock:(id /* block */)a1;
- (void)enumerateTilesForWritingInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 withBlock:(id /* block */)a1;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })frameRectForTileAtIndex:(long long)a0;
- (struct { long long x0; long long x1; })tileCounts;
- (long long)tileIndexAtPoint:(struct { long long x0; long long x1; })a0;
- (id)tileInfoAtIndex:(long long)a0;

@end
