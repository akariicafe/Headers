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
+ (id)weatherServiceClientInterface;
+ (id)weatherServiceInterface;

- (void)invalidateCache;
- (void)_cleanup;
- (void)_callbackAllPendingTasksOnInvalidate:(id)a0;
- (void)enqueueRequest:(id)a0;
- (void)_handleRemoteObjectProxyError:(id)a0;
- (void)cancelRequestWithIdentifier:(id)a0;
- (void)dealloc;
- (void)_onQueueOpenConnection;
- (void)taskIdentifier:(id /* block */)a0;
- (void)serviceDidReceiveResponse:(id)a0;
- (void)enqueueRequest:(id)a0 waitUntilDone:(BOOL)a1;
- (id)init;
- (void)accessServiceWithBlock:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_onQueueInvalidateConnection:(id)a0;

@end
