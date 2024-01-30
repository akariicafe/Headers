@class TSTTableHeaderStorage, TSPLazyReference, TSTTileIDKeyDict, TSTMergeRegionMap, TSTCustomFormatList;

@interface TSTTableDataStore : TSPContainedObject {
    struct TSTTableRBTreeNode_s { unsigned short x0; unsigned short x1; struct TSTTableRBTreeNode_s *x2; struct TSTTableRBTreeNode_s *x3; struct TSTTableRBTreeNode_s *x4; char x5; } *mColumnTileIndex;
    struct TSTTableRBTreeNode_s { unsigned short x0; unsigned short x1; struct TSTTableRBTreeNode_s *x2; struct TSTTableRBTreeNode_s *x3; struct TSTTableRBTreeNode_s *x4; char x5; } *mRowTileIndex;
    TSTTileIDKeyDict *mTileStorage;
    TSTTableHeaderStorage *mRowHeaderStorage;
    TSPLazyReference *mColumnHeaderStorageReference;
    TSPLazyReference *mConditionalStyleSetTableReference;
    TSPLazyReference *mStringTableReference;
    TSPLazyReference *mStyleTableReference;
    TSPLazyReference *mFormulaTableReference;
    TSPLazyReference *mFormulaErrorTableReference;
    TSPLazyReference *mRichTextPayloadTableReference;
    TSPLazyReference *mFormatTableReference;
    TSPLazyReference *mMultipleChoiceListFormatTableReference;
    TSPLazyReference *mCommentStorageTableReference;
    TSTCustomFormatList *mPasteboardCustomFormatList;
    unsigned short mNextRowStripID;
    unsigned short mNextColumnStripID;
    TSTMergeRegionMap *mMergedCellRanges;
    unsigned int mCellCount;
    BOOL mCellCountValid;
    BOOL mDrawableIsBeingCopied;
    unsigned int mStorageVersion;
}

- (void)debugDump;
- (void)dealloc;
- (void)validate;
- (id)initWithOwner:(id)a0;
- (void)setDrawableIsBeingCopied:(BOOL)a0;
- (void)setStorageParentToInfo:(id)a0;
- (void)p_updateTileStorageToCurrentVersion;
- (BOOL)needToUpgradeCellStorage;
- (void)upgradeDataStoreCellStorage;

@end
