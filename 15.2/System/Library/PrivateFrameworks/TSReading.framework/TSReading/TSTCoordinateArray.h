@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject {
    unsigned int mOffset;
    unsigned int mCount;
    double *mCoordinates;
    double mAverage;
    NSMutableIndexSet *mVisibleIndices;
    BOOL mLayoutDirectionIsLeftToRight;
    double mTableWidth;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)hasRightToLeftOrderingWithWidth:(double)a0;
- (id)initWithCount:(unsigned int)a0 atOffset:(unsigned int)a1;

@end
