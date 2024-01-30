@class NFLSingleComponentLayout;

@interface NFLPairSubBatchLayout : NFLSubBatchLayout

@property (retain, nonatomic) NFLSingleComponentLayout *componentOne;
@property (retain, nonatomic) NFLSingleComponentLayout *componentTwo;

+ (id)pairComponentFeedSetting:(id)a0 componentOne:(id)a1 componentTwo:(id)a2;

- (void).cxx_destruct;
- (unsigned long long)rowSpan;
- (double)rank;
- (BOOL)isValid;
- (unsigned long long)columnSpan;
- (BOOL)_isHorizontal;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)tileInfosUsed;
- (id)singleComponentLayouts;

@end
