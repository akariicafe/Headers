@interface STDowntimeOverrideTransformer : NSObject

+ (id)downtimeOverrideFromCoreDowntimeOverride:(id)a0 inContext:(id)a1;
+ (id)coreOverrideFromDowntimeOverride:(id)a0 existingDowntimeOverride:(id)a1 inContext:(id)a2;

@end
