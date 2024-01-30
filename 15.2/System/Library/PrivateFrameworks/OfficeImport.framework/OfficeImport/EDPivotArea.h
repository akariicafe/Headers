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
- (id)description;
- (id)references;
- (void).cxx_destruct;
- (void)setOutline:(BOOL)a0;
- (id)init;
- (id)offset;
- (void)setOffset:(id)a0;
- (int)type;
- (void)setType:(int)a0;
- (BOOL)grandRow;
- (void)setGrandRow:(BOOL)a0;
- (BOOL)grandCol;
- (void)setGrandCol:(BOOL)a0;

@end
