@class CKLogicalDeviceContext, NSXPCInterface;
@protocol CKXPCLogicalDeviceScopedDaemon, NSObject;

@interface CKLogicalDeviceScopedDaemonProxy : NSObject

@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonLogicalDeviceScopedInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientLogicalDeviceScopedInterface;

@property (retain, nonatomic) id<CKXPCLogicalDeviceScopedDaemon> logicalDeviceScopedDaemonProxyCreator;
@property BOOL hasValidLogicalDeviceScopedDaemonProxyCreator;
@property (retain, nonatomic) id<NSObject> connectionInterruptedObserver;
@property (readonly, weak, nonatomic) CKLogicalDeviceContext *deviceContext;

- (id)initWithDeviceContext:(id)a0;
- (void)clearAllClouddThrottles;
- (void)dealloc;
- (void)addClouddThrottle:(id)a0;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;
- (void)postClouddWalrusUpdateNotification;
- (void).cxx_destruct;
- (void)_getLogicalDeviceScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_getLogicalDeviceScopedDaemonProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 daemonProxyHandler:(id /* block */)a2;

@end
