@class EDCollection;

@interface EDPivotItem : NSObject {
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (id)init;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (id)description;
- (int)type;
- (unsigned int)repeatedItemCounts;
- (void)setRepeatedItemCounts:(unsigned int)a0;
- (id)itemIndexes;

@end
