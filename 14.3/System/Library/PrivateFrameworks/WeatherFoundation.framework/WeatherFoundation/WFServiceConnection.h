@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue, WeatherServiceProtocol;

@interface WFServiceConnection : NSObject <WeatherServiceClientProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalStateQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id<WeatherServiceProtocol> serviceProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSMutableDictionary *tasksPendingResponseForTaskIdentifier;
@property (readonly) NSMutableDictionary *dispatchGroupForTaskIdentifier;
@property (readonly) NSMutableDictionary *executionStartTimeForTaskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allAllowedClasses;
+ (id)weatherServiceInterface;
+ (id)weatherServiceClientInterface;

- (void)invalidateCache;
- (id)init;
- (void)_handleRemoteObjectProxyError:(id)a0;
- (void).cxx_destruct;
- (void)_cleanup;
- (void)dealloc;
- (void)_callbackAllPendingTasksOnInvalidate:(id)a0;
- (void)_onQueueOpenConnection;
- (void)enqueueRequest:(id)a0;
- (void)serviceDidReceiveResponse:(id)a0;
- (void)enqueueRequest:(id)a0 waitUntilDone:(BOOL)a1;
- (void)_onQueueInvalidateConnection:(id)a0;
- (void)accessServiceWithBlock:(id /* block */)a0;
- (void)taskIdentifier:(id /* block */)a0;
- (void)cancelRequestWithIdentifier:(id)a0;
- (void)invalidate;

@end
