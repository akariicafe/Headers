@class TSTTableDataStore, NSString, TSTTableInfo, TSTCell, TSTTableTile, TSTTableTileRowInfo, NSObject, TSTCellRegion, TSTTableModel;
@protocol TSTCellRegionIterating;

@interface TSTDataStoreIterator : NSObject <TSTCellIterating, TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>

@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) TSTTableDataStore *dataStore;
@property (readonly, nonatomic) TSTCellRegion *region;
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator;
@property (nonatomic) unsigned long long searchMask;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } curCellID;
@property (retain, nonatomic) TSTTableTile *curTile;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } curTileRange;
@property (retain, nonatomic) TSTTableTileRowInfo *curRow;
@property (nonatomic) unsigned int curRowIndex;
@property (readonly, nonatomic) TSTCell *cell;
@property (nonatomic) BOOL rightToLeft;
@property (nonatomic) BOOL terminated;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (void).cxx_destruct;
- (void)dealloc;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })getNext;
- (BOOL)getNextCellData:(id *)a0;
- (id)initWithInfo:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchMask:(unsigned long long)a3;
- (void)iterateCellsUsingBlock:(id /* block */)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)updateCellData:(id)a0;
- (void)updateFormulaForCellData:(id)a0;
- (id)nextCellData;
- (id)initWithModel:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchMask:(unsigned long long)a3;
- (void)p_setupTileAndRowAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;

@end
