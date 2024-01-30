@interface ATXTypes : NSObject

+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;
+ (id)validConsumerTypes;
+ (id)inverseConsumerSubtypeMapping;
+ (id)validConsumerSubTypes;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (id)consumerMapping;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)validConsumerSubTypeList;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (id)stringForEngagementType:(unsigned long long)a0;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (id)validConsumerTypeList;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)consumerSubtypeMapping;

@end
