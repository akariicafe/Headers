@class NSMutableArray;

@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}

- (void)setHeight:(float)a0;
- (float)height;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)cellAtIndex:(unsigned long long)a0;
- (unsigned long long)cellCount;
- (id)addCell;
- (void)flipCellsRTL;

@end
