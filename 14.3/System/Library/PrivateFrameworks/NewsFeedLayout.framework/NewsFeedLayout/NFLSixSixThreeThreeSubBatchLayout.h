@class NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeSubBatchLayout : NFLSubBatchLayout

@property (nonatomic) BOOL wideCellsOnLeft;
@property (retain, nonatomic) NFLSingleComponentLayout *topSixComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *bottomSixComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *rightThreeComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *leftThreeComponent;

- (void).cxx_destruct;
- (unsigned long long)rowSpan;
- (double)rank;
- (BOOL)isValid;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)tileInfosUsed;
- (id)singleComponentLayouts;

@end
