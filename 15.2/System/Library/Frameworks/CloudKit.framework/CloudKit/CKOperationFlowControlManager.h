@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {
    NSMutableDictionary *_flowControlledOperationKeys;
}

- (id)CKStatusReportArray;
- (double)secondsUntilUnlimited:(id)a0;
- (void)limitOperation:(id)a0 retryAfter:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isOperationLimited:(id)a0 outLimitError:(id *)a1;
- (void)unlimitAllOperations;

@end
