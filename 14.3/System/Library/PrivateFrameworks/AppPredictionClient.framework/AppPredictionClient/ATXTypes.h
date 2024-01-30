@interface ATXTypes : NSObject

+ (id)consumerSubtypeMapping;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)validConsumerTypes;
+ (id)inverseConsumerSubtypeMapping;
+ (id)consumerMapping;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (id)validConsumerTypeList;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;
+ (id)validConsumerSubTypes;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;
+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (id)stringForEngagementType:(unsigned long long)a0;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)validConsumerSubTypeList;

@end
