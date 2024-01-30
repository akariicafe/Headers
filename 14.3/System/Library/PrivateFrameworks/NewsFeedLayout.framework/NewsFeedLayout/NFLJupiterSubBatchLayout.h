@class NFLSingleComponentLayout;

@interface NFLJupiterSubBatchLayout : NFLSubBatchLayout

@property (nonatomic) int layoutType;
@property (retain, nonatomic) NFLSingleComponentLayout *largeSixComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *leftThreeComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *rightThreeComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *topSixComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *bottomSixComponent;

- (void).cxx_destruct;
- (unsigned long long)rowSpan;
- (double)rank;
- (BOOL)isValid;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)tileInfosUsed;
- (id)singleComponentLayouts;
- (id)initWithFeedSettings:(id)a0 layoutType:(int)a1;

@end
