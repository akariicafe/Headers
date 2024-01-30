@class NSMutableArray;

@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}

- (float)height;
- (id)description;
- (void)setHeight:(float)a0;
- (void).cxx_destruct;
- (id)init;
- (id)addCell;
- (id)cellAtIndex:(unsigned long long)a0;
- (void)flipCellsRTL;
- (unsigned long long)cellCount;

@end
