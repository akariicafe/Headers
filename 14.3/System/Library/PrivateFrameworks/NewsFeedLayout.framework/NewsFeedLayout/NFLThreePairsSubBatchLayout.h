@class NFLPairSubBatchLayout;

@interface NFLThreePairsSubBatchLayout : NFLSubBatchLayout

@property (retain, nonatomic) NFLPairSubBatchLayout *leftPairComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *centerPairComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *rightPairComponent;

- (void).cxx_destruct;
- (unsigned long long)rowSpan;
- (double)rank;
- (BOOL)isValid;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)tileInfosUsed;
- (id)singleComponentLayouts;

@end
