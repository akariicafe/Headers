@class NSString, NSArray, NSXPCInterface, HMDProcessMonitor, NSMutableDictionary, HMXPCMessageTransportConfiguration, NSObject, NSMutableSet, NSXPCListener, HMDXPCMessageCountTracker;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDXPCMessageTransport : HMFMessageTransport <NSXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate, HMFTimerDelegate> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    HMDXPCMessageCountTracker *_xpcCounterTracker;
    NSMutableDictionary *_cachedResponses;
}

@property (class, readonly) HMDXPCMessageTransport *defaultTransport;
@property (class, readonly) HMDXPCMessageTransport *accessorySetupTransport;

@property (readonly) NSXPCListener *listener;
@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration;
@property (readonly) HMDProcessMonitor *processMonitor;
@property (readonly, copy) NSArray *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)dumpState;
- (void)timerDidFire:(id)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)logIdentifier;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (void)stop;
- (id)activeRequests;
- (void)_reportCompletion:(id)a0;
- (id)retrieveAndClearMessagesForRequestInfo:(id)a0;
- (void)reportCompletionForMessageWithIdentifier:(id)a0;
- (void)cacheResponsesForMessageWithIdentifier:(id)a0 transport:(id)a1 reportContext:(id)a2;
- (void)cacheResponseMessage:(id)a0;
- (void)submitCounters;
- (id)__retrieveAndClearMessagesForCachedResponseEntry:(id)a0;

@end
