@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject

@property (readonly) NSMutableDictionary *flowControlledOperationKeys;

- (id)init;
- (id)CKStatusReportArray;
- (void).cxx_destruct;
- (void)unlimitAllOperations;
- (BOOL)isOperationLimited:(id)a0 outLimitError:(id *)a1;
- (void)limitOperation:(id)a0 retryAfter:(id)a1 error:(id)a2;
- (double)secondsUntilUnlimited:(id)a0;

@end
