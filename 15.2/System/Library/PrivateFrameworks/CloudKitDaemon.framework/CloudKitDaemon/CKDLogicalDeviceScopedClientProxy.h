@class CKDXPCConnection, CKDLogicalDeviceContext;
@protocol CKXPCLogicalDeviceScopedClient;

@interface CKDLogicalDeviceScopedClientProxy : NSObject

@property (nonatomic) int pid;
@property (weak, nonatomic) CKDXPCConnection *clientConnection;
@property (retain, nonatomic) id<CKXPCLogicalDeviceScopedClient> logicalDeviceScopedClientProxyCreator;
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property BOOL hasBeenThrottled;

- (void)resetThrottles;
- (id)readBytesOfInMemoryAssetContentWithUUID:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 error:(id *)a3;
- (void)tearDown;
- (id)openFileWithOpenInfo:(id)a0 error:(id *)a1;
- (void)addThrottle:(id)a0;
- (id)CKPropertiesDescription;
- (void)getLogicalDeviceScopedClientProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 clientProxyHandler:(id /* block */)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initWithClientConnection:(id)a0 deviceContext:(id)a1;
- (BOOL)processIsAttached;
- (void)_getLogicalDeviceScopedClientProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
