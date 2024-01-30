@interface _DECTypes : NSObject

+ (id)consumerSubtypeMapping;
+ (id)mmConsumerMapping;
+ (id)stringForPredictionReason:(long long)a0;
+ (id)stringForMMEventType:(unsigned long long)a0;
+ (long long)selectSingleReason:(long long)a0;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)mmEventTypeMapping;
+ (id)stringForLaunchSource:(long long)a0;
+ (id)stringForOutcome:(unsigned long long)a0;
+ (id)consumerMapping;
+ (id)stringForCategory:(unsigned long long)a0;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (id)stringForMMConsumerType:(unsigned long long)a0;
+ (id)stringForAppPredictionSources:(long long)a0;
+ (unsigned long long)intersectCategories:(unsigned long long)a0 withCategories:(unsigned long long)a1;
+ (void)invokeBlockOverCategoriesMatching:(unsigned long long)a0 block:(id /* block */)a1;
+ (id)outcomeMapping;
+ (unsigned long long)mmConsumerTypeOfConsumerType:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
+ (id)categoryMapping;
+ (id)predictionReasonMapping;
+ (unsigned long long)categoryForItem:(id)a0;

@end
