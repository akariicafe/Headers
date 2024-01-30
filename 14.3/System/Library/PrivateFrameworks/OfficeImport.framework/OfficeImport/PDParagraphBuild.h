@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (id)init;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (int)type;
- (BOOL)isEqual:(id)a0;
- (void)setAutoAdvanceTime:(double)a0;
- (void)setIsReversedParagraphOrder:(BOOL)a0;
- (void)setBuildLevel:(int)a0;
- (double)autoAdvanceTime;
- (BOOL)isReversedParagraphOrder;
- (int)buildLevel;
- (id)timeNodeDataList;
- (unsigned long long)timeNodeDataListCount;
- (id)timeNodeDataAtIndex:(unsigned long long)a0;
- (id)addTimeNodeData;

@end
