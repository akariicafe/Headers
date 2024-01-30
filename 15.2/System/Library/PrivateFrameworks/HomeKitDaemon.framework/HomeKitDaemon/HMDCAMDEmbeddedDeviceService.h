@class HMDCAMDBlockManager, NSString, NSXPCConnection;

@interface HMDCAMDEmbeddedDeviceService : HMDCAMDEmbeddedDevice <HMDCAMDEmbeddedDeviceServerProxy, HMDCAMDEmbeddedDeviceClientProxy, HMFLogging> {
    NSXPCConnection *_connection;
    unsigned long long _backoffTimer;
}

@property (readonly) HMDCAMDBlockManager *blockInvoker;
@property (readonly) BOOL isRoot;
@property (readonly) BOOL isValid;
@property BOOL directInvocations;
@property unsigned long long requestTimeout;
@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)confirmSemaphoreAndSignal:(id)a0;

- (void)resetConnection;
- (id)remoteObjectProxy;
- (id)logIdentifier;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_fireActualBlockWithArguments:(id)a0 forKey:(id)a1;
- (void)_removeActualBlockForKey:(id)a0;
- (void)_performCommandFromClass:(id)a0 method:(id)a1 arguments:(id)a2 reply:(id /* block */)a3;
- (void)_testCommunication:(id /* block */)a0;
- (id)_initAsRoot:(BOOL)a0;
- (id)initAsRoot;
- (id)initAsMobile;
- (void)blockReleased:(id)a0;
- (id)performCommandFromClass:(id)a0 method:(id)a1 arguments:(id)a2 error:(id *)a3;
- (BOOL)testCommunication;

@end
