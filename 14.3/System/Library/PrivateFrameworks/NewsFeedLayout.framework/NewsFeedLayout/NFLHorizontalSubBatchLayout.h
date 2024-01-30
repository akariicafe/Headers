@class NSArray;

@interface NFLHorizontalSubBatchLayout : NFLSubBatchLayout

@property (copy, nonatomic) NSArray *components;

- (id)initWithFeedSettings:(id)a0 components:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)rowSpan;
- (double)rank;
- (BOOL)isValid;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)tileInfosUsed;
- (id)singleComponentLayouts;
- (id)initWithFeedSettings:(id)a0;

@end
