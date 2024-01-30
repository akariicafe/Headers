@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLSixThreeThreeSixSubBatchLayout : NFLSubBatchLayout

@property (retain, nonatomic) NFLSingleComponentLayout *largeComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *leftTopPairComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *leftBottomPairComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *rightTopPairComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *rightBottomPairComponent;

- (void).cxx_destruct;
- (unsigned long long)rowSpan;
- (double)rank;
- (BOOL)isValid;
- (unsigned long long)columnSpan;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)tileInfosUsed;
- (id)singleComponentLayouts;

@end
