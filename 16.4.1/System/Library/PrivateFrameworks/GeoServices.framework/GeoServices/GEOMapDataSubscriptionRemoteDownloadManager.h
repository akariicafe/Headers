@class NSString, NSMapTable, geo_isolater, NSObject;
@protocol OS_dispatch_queue, GEOMapDataSubscriptionDownloadManagerDelegate, OS_xpc_object;

@interface GEOMapDataSubscriptionRemoteDownloadManager : NSObject <GEOMapDataSubscriptionDownloadManager> {
    int _geodLaunchedNotifyToken;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _configuredConnection;
    NSObject<OS_dispatch_queue> *_incomingMessageQueue;
    NSObject<OS_xpc_object> *_connection;
    geo_isolater *_statesLock;
    NSMapTable *_states;
}

@property (weak, nonatomic) id<GEOMapDataSubscriptionDownloadManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleEvent:(id)a0;
- (void)dealloc;
- (id)init;
- (id)_connection;
- (void).cxx_destruct;
- (void)_receivedStateUpdate:(id)a0;
- (void)_reconnectIfNecessary;
- (void)_startObservingStateForIdentifier:(id)a0;
- (void)_stopObservingStateForIdentifier:(id)a0;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)a0;
- (void)fetchStateForSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)startDownloadForSubscriptionIdentifiers:(id)a0;

@end
