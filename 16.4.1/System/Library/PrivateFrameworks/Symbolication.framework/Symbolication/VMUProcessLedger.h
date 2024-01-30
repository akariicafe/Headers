@interface VMUProcessLedger : NSObject

+ (id)_getProcessLedgerDictFromCrashInfo:(unsigned long long)a0 DataSize:(unsigned long long)a1;
+ (id)_getProcessLedgerDictFromKernelLedger:(int)a0;
+ (id)ledgerForTask:(unsigned int)a0;

@end
