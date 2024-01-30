@interface ATXMagicalMomentsTypes : NSObject

+ (id)mmEventTypeMapping;
+ (id)stringForPredictionReason:(long long)a0;
+ (long long)selectSingleReason:(long long)a0;
+ (id)predictionReasonMapping;
+ (id)stringForMMConsumerType:(unsigned long long)a0;
+ (id)stringForMMEventType:(unsigned long long)a0;
+ (id)consumerMapping;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (unsigned long long)mmConsumerTypeOfConsumerType:(unsigned long long)a0 consumerSubType:(unsigned char)a1;
+ (id)mmConsumerMapping;

@end
