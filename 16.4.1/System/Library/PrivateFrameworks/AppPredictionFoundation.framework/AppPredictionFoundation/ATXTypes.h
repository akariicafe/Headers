@interface ATXTypes : NSObject

+ (unsigned char)consumerSubtypeForString:(id)a0 found:(BOOL *)a1;
+ (id)consumerSubtypeMapping;
+ (id)stringForConsumerType:(unsigned long long)a0;
+ (id)uiTypeForActionConsumerSubType:(unsigned char)a0;
+ (id)validConsumerSubTypes;
+ (unsigned long long)consumerTypeForSubType:(unsigned char)a0;
+ (unsigned long long)engagementTypeForString:(id)a0 found:(BOOL *)a1;
+ (void)iterConsumerSubTypesWithBlock:(id /* block */)a0;
+ (id)safeStringForConsumerSubtype:(unsigned char)a0;
+ (void)iterConsumerTypesWithBlock:(id /* block */)a0;
+ (unsigned long long)consumerTypeForString:(id)a0 found:(BOOL *)a1;
+ (id)validConsumerSubTypeList;
+ (BOOL)isActionSpotlightConsumerSubType:(unsigned char)a0;
+ (id)validConsumerTypeList;
+ (id)consumerMapping;
+ (id)validConsumerTypes;
+ (id)stringForEngagementType:(unsigned long long)a0;
+ (id)stringForConsumerSubtype:(unsigned char)a0;
+ (id)inverseConsumerSubtypeMapping;

@end
