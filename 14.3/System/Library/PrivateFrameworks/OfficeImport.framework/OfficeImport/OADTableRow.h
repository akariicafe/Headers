@class NSMutableArray;

@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}

- (id)init;
- (void).cxx_destruct;
- (void)setHeight:(float)a0;
- (float)height;
- (id)description;
- (id)addCell;
- (unsigned long long)cellCount;
- (id)cellAtIndex:(unsigned long long)a0;
- (void)flipCellsRTL;

@end
