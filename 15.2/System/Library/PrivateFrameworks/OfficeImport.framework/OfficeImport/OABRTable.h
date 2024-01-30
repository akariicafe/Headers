@class OABTableSortedIntArray, ESDContainer, OABReaderState, OADTable;

@interface OABRTable : NSObject {
    ESDContainer *mSrcTable;
    OADTable *mTgtTable;
    OABReaderState *mState;
    struct CGPoint { double x; double y; } mScale;
    int mRowCount;
    int mColumnCount;
    OABTableSortedIntArray *mXCoords;
    OABTableSortedIntArray *mYCoords;
    void *mHorzLines;
    void *mVertLines;
    void *mCells;
}

- (void)map;
- (void).cxx_destruct;
- (void)dealloc;
- (id)readStrokeFromShape:(void *)a0;
- (void)readAnchor;
- (void)mapScale;
- (void)readCoordinates;
- (void)readCellsAndLines;
- (void)validateTable;
- (void)createTargetTableContents;
- (id)initWithSourceTable:(id)a0 targetTable:(id)a1 state:(id)a2;

@end
