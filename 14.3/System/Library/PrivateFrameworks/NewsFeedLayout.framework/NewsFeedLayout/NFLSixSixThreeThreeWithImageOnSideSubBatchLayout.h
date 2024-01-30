@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeWithImageOnSideSubBatchLayout : NFLSubBatchLayout

@property (retain, nonatomic) NFLSingleComponentLayout *leftSixImageOnTopComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *rightSixImageOnTopComponent;
@property (retain, nonatomic) NFLPairSubBatchLayout *topPairComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *bottomImageOnSideComponent;

- (void).cxx_destruct;
- (unsigned long long)rowSpan;
- (double)rank;
- (BOOL)isValid;
- (unsigned long long)columnSpan;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)tileInfosUsed;
- (id)singleComponentLayouts;

@end
