@class CKLogicalDeviceContext;
@protocol CKXPCLogicalDeviceScopedDaemon, NSObject;

@interface CKLogicalDeviceScopedDaemonProxy : NSObject

@property (retain, nonatomic) id<CKXPCLogicalDeviceScopedDaemon> logicalDeviceScopedDaemonProxyCreator;
@property BOOL hasValidLogicalDeviceScopedDaemonProxyCreator;
@property (retain, nonatomic) id<NSObject> connectionInterruptedObserver;
@property (weak, nonatomic) CKLogicalDeviceContext *deviceContext;

+ (id)CKXPCClientToDaemonLogicalDeviceScopedInterface;
+ (id)CKXPCDaemonToClientLogicalDeviceScopedInterface;

- (void)clearAllClouddThrottles;
- (id)initWithDeviceContext:(id)a0;
- (void)_getLogicalDeviceScopedDaemonProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 daemonProxyHandler:(id /* block */)a2;
- (void)_getLogicalDeviceScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addClouddThrottle:(id)a0;
- (void)dealloc;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;

@end
