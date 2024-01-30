@interface PXNewMagazineGrid : NSObject {
    long long *_table;
    unsigned long long _tableSizeInBytes;
    long long _maxRows;
}

@property (readonly, nonatomic) unsigned long long currentRowsUsed;
@property (readonly, nonatomic) unsigned long long numberOfColumns;
@property (readonly, nonatomic) unsigned long long endingType;

- (void)setNumberOfColumns:(long long)a0;
- (id)init;
- (void)dealloc;
- (void)reset;
- (unsigned long long)_rowsUsed;
- (id)initWithNumberOfColumns:(long long)a0 size:(unsigned long long)a1;
- (void)resetWithSize:(unsigned long long)a0;
- (void)enlargeTable;
- (void)setTileIdentifier:(unsigned long long)a0 forArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a1;
- (void)clearArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (BOOL)nextEmptyTileX:(long long *)a0 Y:(long long *)a1 maxWidth:(long long *)a2;
- (BOOL)isPerfectEnding;
- (BOOL)isGoodEnding;
- (BOOL)_hasAnyTilesUsedInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (long long)_numberOfEmptyTilesInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (BOOL)_hasAnyEmptyTilesInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (long long)_numberOfEmptyTilesAtTheEnd;
- (BOOL)_isEmptyGrid;

@end
