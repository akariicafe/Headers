@interface LPKPerformanceTestIntermediary : NSObject

+ (long long)_enableKtrace;
+ (BOOL)startUserSwitchTestForType:(unsigned long long)a0 count:(long long)a1 username:(id)a2 password:(id)a3;
+ (long long)_disableKtrace;
+ (long long)_dumpKtraceResult;
+ (BOOL)endUserSwitchTest;
+ (void)_removeStoredValues;
+ (BOOL)startPerformanceTestForType:(unsigned long long)a0 count:(long long)a1 username:(id)a2 password:(id)a3;
+ (id)endPerformanceTestAndDumpResults;
+ (void)enableRestrictionlessLoginWithCompletionHandler:(id /* block */)a0;
+ (void)disableRestrictionlessLoginWithCompletionHandler:(id /* block */)a0;

@end
