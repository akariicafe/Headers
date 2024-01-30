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
- (void)dealloc;
- (void).cxx_destruct;
- (void)readCoordinates;
- (void)createTargetTableContents;
- (id)initWithSourceTable:(id)a0 targetTable:(id)a1 state:(id)a2;
- (void)mapScale;
- (void)readAnchor;
- (void)readCellsAndLines;
- (id)readStrokeFromShape:(void *)a0;
- (void)validateTable;

@end
