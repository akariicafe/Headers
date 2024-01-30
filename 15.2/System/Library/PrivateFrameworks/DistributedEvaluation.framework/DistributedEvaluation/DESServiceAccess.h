@interface DESServiceAccess : NSObject

+ (void)initialize;
+ (BOOL)hasToolEntitlement:(id)a0;
+ (BOOL)hasRecordAccessToBundleId:(id)a0 connection:(id)a1 error:(id *)a2;

@end
