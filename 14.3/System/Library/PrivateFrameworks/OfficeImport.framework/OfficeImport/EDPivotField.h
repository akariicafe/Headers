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

- (void)setAxis:(int)a0;
- (id)init;
- (BOOL)compact;
- (void).cxx_destruct;
- (int)axis;
- (void)setCompact:(BOOL)a0;
- (id)description;
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
