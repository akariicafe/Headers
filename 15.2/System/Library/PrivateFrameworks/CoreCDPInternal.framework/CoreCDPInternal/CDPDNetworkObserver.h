@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CDPDNetworkObserver : NSObject {
    BOOL _networkIsReachable;
    NSLock *_clientsLock;
    NSMutableDictionary *_clientsByUUID;
    struct __SCNetworkReachability { } *_networkReach;
    NSObject<OS_dispatch_queue> *_eventQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)startObservingNetwork;
- (void)_networkReachabilityDidChangeWithFlags:(unsigned int)a0;
- (id)addNetworkObserverWithEventHandler:(id /* block */)a0;
- (void)removeObserverWithToken:(id)a0;

@end
