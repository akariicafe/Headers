@class NSString;

@interface SBIconListGridCellInfo : NSObject <NSCopying, BSDescriptionProviding> {
    unsigned short _indexes[128];
    unsigned short *_extraGridCellIndexes;
    unsigned long long _extraGridCellIndexesSize;
    unsigned short *_extraIconIndexes;
    unsigned long long _extraIconIndexesSize;
}

@property (nonatomic) struct SBHIconGridSize { unsigned short columns; unsigned short rows; } gridSize;
@property (nonatomic) unsigned long long numberOfUsedRows;
@property (nonatomic) unsigned long long numberOfUsedColumns;
@property (readonly, nonatomic, getter=isLayoutOutOfBounds) BOOL layoutOutOfBounds;
@property (readonly, copy, nonatomic) NSString *layoutDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (unsigned long long)iconIndexForGridCellIndex:(unsigned long long)a0;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (struct SBIconCoordinate { long long x0; long long x1; })coordinateForGridCellIndex:(unsigned long long)a0;
- (unsigned long long)gridCellIndexForCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a0;
- (void)clearAllIconAndGridCellIndexes;
- (void)setIconIndex:(unsigned long long)a0 forGridCellIndex:(unsigned long long)a1;
- (void)setGridCellIndex:(unsigned long long)a0 forIconIndex:(unsigned long long)a1;
- (void)addEmptyColumns:(unsigned long long)a0;
- (void)addEmptyRows:(unsigned long long)a0;
- (unsigned long long)numberOfUsedGridCellsInRow:(unsigned long long)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)numberOfUsedGridCellsInColumn:(unsigned long long)a0 rowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct SBHIconGridRange { unsigned long long x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; })gridRangeForGridCellIndex:(unsigned long long)a0;
- (BOOL)isOutOfBoundsAtIconIndex:(unsigned long long)a0;
- (unsigned long long)numberOfUsedGridCellsInRow:(unsigned long long)a0;
- (unsigned long long)numberOfUsedGridCellsInColumn:(unsigned long long)a0;
- (unsigned long long)maxGridCellIndexForIconIndex:(unsigned long long)a0;
- (struct SBHIconGridSize { unsigned short x0; unsigned short x1; })gridSizeForGridCellIndex:(unsigned long long)a0;
- (unsigned long long)indexOfOutOfBoundsIconInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
