@class TSTTableDataStore, NSString, TSTTableDataListCache, TSTTableTile, TSTTableInfo, NSObject, TSTTableTileRowInfo, TSTCellRegion, TSTTableModel;
@protocol OS_os_log, TSTCellRegionIterating;

@interface TSTDataStoreIterator : NSObject <TSTCellIterating, TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>

@property (readonly, nonatomic) TSTTableModel *tableModel;
@property (readonly, nonatomic) TSTTableDataStore *dataStore;
@property (readonly, nonatomic) TSTTableDataListCache *dataListCache;
@property (readonly, nonatomic) TSTCellRegion *region;
@property (readonly, nonatomic) NSObject<TSTCellRegionIterating> *regionIterator;
@property (nonatomic) unsigned long long searchMask;
@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; BOOL _preserveRow; BOOL _preserveColumn; } curCellID;
@property (retain, nonatomic) TSTTableTile *curTile;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } curTileRange;
@property (retain, nonatomic) TSTTableTileRowInfo *curRow;
@property (nonatomic) unsigned int curRowIndex;
@property (nonatomic) BOOL columnOrderReversed;
@property (nonatomic) BOOL terminated;
@property (nonatomic) struct TSTPerformanceLoggingToken { NSObject<OS_os_log> *logHandle; unsigned long long signpostID; } logToken;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)terminate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })getNext;
- (void)updateCellData:(id)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (BOOL)getNextCellData:(id *)a0;
- (id)initWithInfo:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchMask:(unsigned long long)a3;
- (id)initWithModel:(id)a0 region:(id)a1 flags:(unsigned long long)a2 searchMask:(unsigned long long)a3;
- (void)iterateCellsUsingBlock:(id /* block */)a0;
- (id)nextCellData;
- (void)p_setupTileAndRowAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)updateFormulaForCellData:(id)a0;

@end
