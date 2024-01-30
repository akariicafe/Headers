@interface ATXActionPredictionHeuristics : NSObject

+ (id)addCacheExpirerNotification:(id /* block */)a0;
+ (id)actionsWithLocationManager:(id)a0;
+ (id)nextCacheExpirationDate;

@end
