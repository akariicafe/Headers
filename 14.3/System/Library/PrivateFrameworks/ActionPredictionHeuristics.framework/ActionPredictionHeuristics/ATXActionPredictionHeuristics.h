@interface ATXActionPredictionHeuristics : NSObject

+ (id)actions;
+ (id)addCacheExpirerNotification:(id /* block */)a0;
+ (id)nextCacheExpirationDate;

@end
