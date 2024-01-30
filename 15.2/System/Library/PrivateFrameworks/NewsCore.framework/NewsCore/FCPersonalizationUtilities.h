@interface FCPersonalizationUtilities : NSObject

+ (double)decayedDiversificationPenaltyWithInitialValue:(double)a0 finalValue:(double)a1 halfLife:(double)a2 baselineAggregate:(id)a3;
+ (id)sortItems:(id)a0 readonlyPersonalizationAggregateStore:(id)a1 personalizationWhitelist:(id)a2 configurableValues:(id)a3 userProfile:(id)a4 translatedTagIDs:(id)a5 sortOptions:(long long)a6 configurationSet:(long long)a7;
+ (id)sortItems:(id)a0 readonlyPersonalizationAggregateStore:(id)a1 personalizationWhitelist:(id)a2 configurableValues:(id)a3 userProfile:(id)a4;
+ (id)diversifyItems:(id)a0 withPreselectedItems:(id)a1 limit:(unsigned long long)a2 similarityStartExpectation:(double)a3 similarityEndExpectation:(double)a4 publisherDiversificationSlope:(double)a5 publisherDiversificationYIntercept:(double)a6;
+ (id)limitItems:(id)a0 byHourlyFlowRate:(double)a1 itemFilterPerPublisher:(double)a2 timeInterval:(double)a3;

@end
