@class EDCollection;

@interface EDPivotField : NSObject {
    int mAxis;
    BOOL mCompact;
    BOOL mDataField;
    BOOL mShowDefaultSubTotal;
    BOOL mInsertBlankRow;
    BOOL mOutlineItems;
    BOOL mShowAllItems;
    BOOL mSubtotalTop;
    unsigned long long mNumFmtId;
    EDCollection *mPivotFieldItems;
}

+ (id)pivotField;

- (void)setCompact:(BOOL)a0;
- (BOOL)compact;
- (int)axis;
- (void)setAxis:(int)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)dataField;
- (void)setDataField:(BOOL)a0;
- (BOOL)showDefaultSubTotal;
- (void)setShowDefaultSubTotal:(BOOL)a0;
- (BOOL)insertBlankRow;
- (void)setInsertBlankRow:(BOOL)a0;
- (BOOL)outlineItems;
- (void)setOutlineItems:(BOOL)a0;
- (BOOL)showAllItems;
- (void)setShowAllItems:(BOOL)a0;
- (BOOL)subtotalTop;
- (void)setSubtotalTop:(BOOL)a0;
- (unsigned long long)numFmtId;
- (void)setNumFmtId:(unsigned long long)a0;
- (id)pivotFieldItems;

@end
