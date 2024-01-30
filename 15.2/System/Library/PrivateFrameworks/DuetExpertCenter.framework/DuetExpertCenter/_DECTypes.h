@interface _DECTypes : NSObject

+ (id)mmEventTypeMapping;
+ (id)stringForPredictionReason:(long long)a0;
+ (long long)selectSingleReason:(long long)a0;
+ (id)stringForAppPredictionSources:(long long)a0;
+ (id)predictionReasonMapping;
+ (id)outcomeMapping;
+ (void)invokeBlockOverCategoriesMatching:(unsigned long long)a0 block:(id /* block */)a1;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (id)stringForMMConsumerType:(unsigned long long)a0;
+ (id)stringForCategory:(unsigned long long)a0;
+ (id)stringForMMEventType:(unsigned long long)a0;
+ (unsigned long long)categoryForItem:(id)a0;
+ (id)consumerMapping;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (unsigned long long)mmConsumerTypeOfConsumerType:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
+ (id)stringForLaunchSource:(long long)a0;
+ (id)mmConsumerMapping;
+ (id)categoryMapping;
+ (id)stringForOutcome:(unsigned long long)a0;
+ (id)consumerSubtypeMapping;
+ (unsigned long long)intersectCategories:(unsigned long long)a0 withCategories:(unsigned long long)a1;

@end
