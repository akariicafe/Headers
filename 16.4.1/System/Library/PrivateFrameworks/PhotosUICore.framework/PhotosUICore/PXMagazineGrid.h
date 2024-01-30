@interface PXMagazineGrid : NSObject {
    unsigned long long _numberOfColumns;
    long long *_table;
    unsigned long long _tableSizeInBytes;
    long long _maxRows;
}

@property (readonly, nonatomic) unsigned long long currentRowsUsed;
@property (readonly, nonatomic) unsigned long long endingType;

- (void)setNumberOfColumns:(long long)a0;
- (void)dealloc;
- (BOOL)isPerfectEnding;
- (BOOL)_hasAnyEmptyTilesInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (BOOL)_hasAnyTilesUsedInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (BOOL)_isEmptyGrid;
- (long long)_numberOfEmptyTilesAtTheEnd;
- (long long)_numberOfEmptyTilesInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (unsigned long long)_rowsUsed;
- (void)clearArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (void)enlargeTable;
- (id)initWithNumberOfColumns:(long long)a0 size:(unsigned long long)a1;
- (BOOL)isGoodEnding;
- (BOOL)nextEmptyTileX:(long long *)a0 Y:(long long *)a1 maxWidth:(long long *)a2;
- (void)resetWithSize:(unsigned long long)a0;
- (void)setTileIdentifier:(unsigned long long)a0 forArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a1;

@end
