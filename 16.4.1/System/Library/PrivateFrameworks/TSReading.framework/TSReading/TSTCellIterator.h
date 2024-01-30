@class TSTTableDataStore, TSTCell, TSTTableTileRowInfo, TSTCellRegion, TSTTableTile, NSObject, TSTTableModel;
@protocol TSTCellRegionIterating;

@interface TSTCellIterator : NSObject {
    TSTTableModel *mTableModel;
    TSTCellRegion *mModelRegion;
    NSObject<TSTCellRegionIterating> *mModelRegionIterator;
    TSTTableDataStore *mTableDataStore;
    struct { unsigned short row; unsigned char column; unsigned char reserved; } mPreviousCellID;
    TSTTableTileRowInfo *mCurRow;
    TSTTableTile *mCurTile;
    unsigned short mCurRowID;
    struct _NSRange { unsigned long long location; unsigned long long length; } mCurTileRange;
    TSTCell *mCell;
    BOOL mSkipStyleOnlyCells;
    BOOL mSkipCommentStorageOnlyCells;
    BOOL mDontCheckSize;
    BOOL mDontReturnMergeRegions;
    BOOL mReturnHiddenCells;
    BOOL mDontInflateFormulas;
    BOOL mReturnEmptyCells;
}

@property (readonly) BOOL dontExpandCellRefs;
@property (readonly) int rowWalkDirection;

- (void)terminate;
- (void)dealloc;
- (id)initWithTableModel:(id)a0 range:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1 flags:(unsigned long long)a2;
- (BOOL)getNext:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned char x1; unsigned char x2; } x1; id x2; struct TSTCellStorage *x3; struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (id)initWithTableModel:(id)a0;
- (id)initWithTableModel:(id)a0 flags:(unsigned long long)a1;
- (id)initWithTableModel:(id)a0 range:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })a1;
- (id)initWithTableModel:(id)a0 region:(id)a1;
- (id)initWithTableModel:(id)a0 region:(id)a1 flags:(unsigned long long)a2;
- (BOOL)p_getData:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned char x1; unsigned char x2; } x1; id x2; struct TSTCellStorage *x3; struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } *)a0 forCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;
- (void)p_resetIterData:(struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned char x1; unsigned char x2; } x1; id x2; struct TSTCellStorage *x3; struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; } x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;

@end
