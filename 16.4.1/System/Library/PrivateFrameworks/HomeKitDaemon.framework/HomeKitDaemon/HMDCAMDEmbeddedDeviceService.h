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

- (id)logIdentifier;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)resetConnection;
- (void)dealloc;
- (id)init;
- (void)start;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (void)_fireActualBlockWithArguments:(id)a0 forKey:(id)a1;
- (id)_initAsRoot:(BOOL)a0;
- (void)_performCommandFromClass:(id)a0 method:(id)a1 arguments:(id)a2 reply:(id /* block */)a3;
- (void)_removeActualBlockForKey:(id)a0;
- (void)_testCommunication:(id /* block */)a0;
- (void)blockReleased:(id)a0;
- (id)initAsMobile;
- (id)initAsRoot;
- (id)performCommandFromClass:(id)a0 method:(id)a1 arguments:(id)a2 error:(id *)a3;
- (BOOL)testCommunication;

@end
