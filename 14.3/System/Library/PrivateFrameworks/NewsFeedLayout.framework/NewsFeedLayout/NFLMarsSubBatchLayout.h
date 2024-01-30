@class NFLSingleComponentLayout;

@interface NFLMarsSubBatchLayout : NFLSubBatchLayout

@property (retain, nonatomic) NFLSingleComponentLayout *largeComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *topLeftComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *topRightComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *bottomLeftComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *bottomRightComponent;
@property (retain, nonatomic) NFLSingleComponentLayout *bottomComponent;

- (void).cxx_destruct;
- (unsigned long long)rowSpan;
- (double)rank;
- (BOOL)isValid;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)tileInfosUsed;
- (id)singleComponentLayouts;

@end
