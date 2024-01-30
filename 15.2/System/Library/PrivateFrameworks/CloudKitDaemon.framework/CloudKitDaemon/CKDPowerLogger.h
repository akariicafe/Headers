@class NSString;

@interface CKDPowerLogger : NSObject <CKDSystemAvailabilityWatcher>

@property (class, readonly, getter=isEnabled) BOOL enabled;

@property (readonly, nonatomic) unsigned long long stateHandle;
@property (nonatomic, getter=isActivityRegistered) BOOL activityRegistered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLogger;

- (void)_unregisterCacheFlushActivity;
- (void)_cacheFlush;
- (void)cacheOperationCombinedMetrics:(id)a0 forOperationID:(id)a1 operationType:(long long)a2 operationGroupID:(id)a3 operationGroupName:(id)a4 operationGroupQuantity:(unsigned long long)a5 operationQualityOfService:(long long)a6 appContainerTuple:(id)a7;
- (void)registerPowerLoggingXPCActivity;
- (id)init;
- (void)_registerCacheFlushActivity;
- (void)logOperationCombinedMetrics:(id)a0 forOperationID:(id)a1 operationType:(long long)a2 operationGroupID:(id)a3 operationGroupName:(id)a4 operationGroupQuantity:(unsigned long long)a5 operationQualityOfService:(long long)a6 appContainerTuple:(id)a7;
- (BOOL)systemAvailabilityChanged:(unsigned long long)a0;
- (void)dealloc;

@end
