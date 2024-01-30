@class NSDictionary, NSMutableDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject {
    NSMutableDictionary *_keywordsByCategoryMaskByDateIntervalByMomentUUID;
}

@property (readonly) NSDictionary *aggregatedKeywords;

- (void).cxx_destruct;
- (id)init;
- (void)aggregateKeywordsByCategoryMask:(id)a0 forMomentUUID:(id)a1 duringDateInterval:(id)a2;
- (void)aggregateKeywordsByCategoryMask:(id)a0 forMomentNode:(id)a1;
- (void)aggregateKeywordArraysByCategoryMask:(id)a0 forMomentUUID:(id)a1 fromUniversalStartDate:(id)a2 toEndDate:(id)a3;

@end
