@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLTwelveSixSubBatchLayout : NFLSubBatchLayout

@property (retain, nonatomic) NFLSingleComponentLayout *largeComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *topPairComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *middlePairComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *bottomPairComponent;

- (void).cxx_destruct;
- (unsigned long long)rowSpan;
- (double)rank;
- (BOOL)isValid;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)tileInfosUsed;
- (id)singleComponentLayouts;

@end
