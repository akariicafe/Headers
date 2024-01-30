@class EDCollection;

@interface EDPivotItem : NSObject {
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (int)type;
- (void)setType:(int)a0;
- (unsigned int)repeatedItemCounts;
- (void)setRepeatedItemCounts:(unsigned int)a0;
- (id)itemIndexes;

@end
