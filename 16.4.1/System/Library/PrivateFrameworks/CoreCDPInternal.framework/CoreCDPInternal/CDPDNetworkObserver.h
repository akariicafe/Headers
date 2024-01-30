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

- (id)init;
- (void).cxx_destruct;
- (void)removeObserverWithToken:(id)a0;
- (void)_networkReachabilityDidChangeWithFlags:(unsigned int)a0;
- (id)addNetworkObserverWithEventHandler:(id /* block */)a0;
- (void)startObservingNetwork;

@end
