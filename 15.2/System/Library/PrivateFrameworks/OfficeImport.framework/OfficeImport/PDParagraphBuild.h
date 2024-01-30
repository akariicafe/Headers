@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (int)type;
- (unsigned long long)hash;
- (void)setType:(int)a0;
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
