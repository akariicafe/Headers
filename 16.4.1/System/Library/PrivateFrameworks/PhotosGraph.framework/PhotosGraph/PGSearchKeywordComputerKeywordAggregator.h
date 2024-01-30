@class NSDictionary, NSMutableDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject {
    NSMutableDictionary *_keywordsByCategoryMaskByDateIntervalByMomentUUID;
}

@property (readonly) NSDictionary *aggregatedKeywords;

- (id)init;
- (void).cxx_destruct;
- (void)aggregateKeywordArraysByCategoryMask:(id)a0 forMomentUUID:(id)a1 fromUniversalStartDate:(id)a2 toEndDate:(id)a3;
- (void)aggregateKeywordsByCategoryMask:(id)a0 forMomentNode:(id)a1;
- (void)aggregateKeywordsByCategoryMask:(id)a0 forMomentUUID:(id)a1 duringDateInterval:(id)a2;

@end
