@class CKLogicalDeviceContext, NSMapTable, NSMutableSet;

@interface CKLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedClient>

@property (readonly, nonatomic) NSMapTable *assetsByUUID;
@property (readonly, weak, nonatomic) CKLogicalDeviceContext *deviceContext;
@property (readonly, nonatomic) NSMutableSet *completedLongLivedOperationIDs;
@property (readonly, nonatomic) NSMutableSet *outstandingOperationIDs;

- (void)resetThrottles;
- (void)addThrottle:(id)a0;
- (void)openFileWithOpenInfo:(id)a0 reply:(id /* block */)a1;
- (id)trackedAssetForUUID:(id)a0;
- (void)registerLongLivedOperationWithIDAsOutstanding:(id)a0;
- (id)initWithDeviceContext:(id)a0;
- (void).cxx_destruct;
- (void)registerLongLivedOperationWithIDAsCompleted:(id)a0 allowResumingCompletedLongLivedOperations:(BOOL)a1;
- (void)trackAssets:(id)a0;
- (void)readBytesOfInMemoryAssetContentWithUUID:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;

@end
