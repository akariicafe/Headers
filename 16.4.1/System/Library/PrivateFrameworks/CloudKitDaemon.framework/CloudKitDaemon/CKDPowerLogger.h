@interface CKDPowerLogger : NSObject

@property (class, readonly, getter=isEnabled) BOOL enabled;

+ (id)sharedLogger;

- (void)logOperationCombinedMetrics:(id)a0 forOperationID:(id)a1 operationType:(long long)a2 operationGroupID:(id)a3 operationGroupName:(id)a4 operationGroupQuantity:(unsigned long long)a5 operationQualityOfService:(long long)a6 appContainerTuple:(id)a7;

@end
