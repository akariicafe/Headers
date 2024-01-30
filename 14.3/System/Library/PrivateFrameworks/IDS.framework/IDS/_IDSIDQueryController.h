@class NSString, NSMutableDictionary, NSMapTable, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {
    NSMutableDictionary *_listeners;
    NSMutableDictionary *_idStatusCache;
    NSMutableDictionary *_transactionIDToBlockMap;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_serviceToken;
    NSMapTable *_delegateToInfo;
    NSMutableDictionary *_listenerIDToServicesMap;
    id _delegateContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)removeDelegate:(id)a0;
- (void)removeDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)_hasCacheForService:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)__sendMessage:(id)a0 queue:(id)a1 reply:(id /* block */)a2 failBlock:(id /* block */)a3 waitForReply:(BOOL)a4;
- (void)IDQueryCompletedWithFromURI:(id)a0 idStatusUpdates:(id)a1 service:(id)a2 success:(BOOL)a3 error:(id)a4;
- (id)_cachedStatusForDestination:(id)a0 service:(id)a1;
- (void)_requestCacheForService:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (void)_disconnectFromQueryService;
- (void)_requestStatusForDestinations:(id)a0 service:(id)a1 waitForReply:(BOOL)a2 forceRefresh:(BOOL)a3 listenerID:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)_warmupQueryCacheForService:(id)a0;
- (BOOL)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 allowRefresh:(BOOL)a3 waitForReply:(BOOL)a4 forceRefresh:(BOOL)a5 queue:(id)a6 completionBlock:(id /* block */)a7;
- (void)_purgeIDStatusCache;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 forceRefresh:(BOOL)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (id)initWithDelegateContext:(id)a0 queueController:(id)a1;
- (id)_cacheForService:(id)a0;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;
- (void)_requestCachedStatusForDestinations:(id)a0 service:(id)a1 waitForReply:(BOOL)a2 listenerID:(id)a3 completionBlock:(id /* block */)a4;
- (void)_purgeIDStatusCacheAfter:(double)a0;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)_setCurrentIDStatus:(long long)a0 forDestination:(id)a1 service:(id)a2;
- (void)_updateCacheWithDictionary:(id)a0 service:(id)a1;
- (void)_callDelegatesWithBlock:(id /* block */)a0 delegateMap:(id)a1;
- (BOOL)_sync_currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 completionBlock:(id /* block */)a3;
- (void)_connect;
- (void)_callDelegatesWithBlock:(id /* block */)a0;
- (long long)_currentCachedIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (void)addListenerID:(id)a0 forService:(id)a1;
- (BOOL)_currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)_delegateMapForListenerID:(id)a0 service:(id)a1;
- (BOOL)_flushQueryCacheForService:(id)a0;
- (void)___oldDealloc;
- (BOOL)_isListenerWithID:(id)a0 listeningToService:(id)a1;
- (void)daemonDisconnected;
- (BOOL)_sync_refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 completionBlock:(id /* block */)a3;
- (void)_idStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 allowRenew:(BOOL)a3 waitForReply:(BOOL)a4 forceRefresh:(BOOL)a5 completionBlock:(id /* block */)a6;
- (void)_requestRemoteDevicesForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 completionBlock:(id /* block */)a3;
- (void)addDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2 queue:(id)a3;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;

@end
