@class EDCollection, EDReference;

@interface EDPivotArea : NSObject {
    BOOL mGrandCol;
    BOOL mGrandRow;
    BOOL mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;

- (BOOL)outline;
- (id)init;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (id)offset;
- (id)references;
- (id)description;
- (int)type;
- (void)setOutline:(BOOL)a0;
- (void)setOffset:(id)a0;
- (BOOL)grandRow;
- (void)setGrandRow:(BOOL)a0;
- (BOOL)grandCol;
- (void)setGrandCol:(BOOL)a0;

@end
