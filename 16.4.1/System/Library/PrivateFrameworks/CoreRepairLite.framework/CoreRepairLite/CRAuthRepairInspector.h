@interface CRAuthRepairInspector : NSObject

+ (unsigned long long)getStatus;
+ (unsigned long long)_getStatus;
+ (BOOL)checkMismatch:(id)a0 failureDataList:(id)a1;
+ (BOOL)hasAnyMismatched:(id)a0 success:(BOOL *)a1;
+ (BOOL)wasRepaired:(BOOL *)a0;

@end
