@class IDSInternalQueueController, _IDSIDQueryController;

@interface IDSIDQueryController : NSObject {
    _IDSIDQueryController *_internal;
    IDSInternalQueueController *_queueController;
}

+ (id)sharedInstance;

- (void)removeDelegate:(id)a0;
- (void)removeDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (BOOL)refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)requiredIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (void)addListenerID:(id)a0 forService:(id)a1;
- (void)_setCurrentIDStatus:(long long)a0 forDestination:(id)a1 service:(id)a2;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3;
- (id)_currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (void)addDelegate:(id)a0 forService:(id)a1 listenerID:(id)a2 queue:(id)a3;
- (BOOL)currentRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 errorCompletionBlock:(id /* block */)a4;
- (BOOL)removeListenerID:(id)a0 forService:(id)a1;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)_flushQueryCacheForService:(id)a0;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)_currentCachedRemoteDevicesForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)currentIDStatusForDestinations:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3 queue:(id)a4 completionBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (BOOL)currentIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)requestIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (id)init;
- (BOOL)_warmupQueryCacheForService:(id)a0;
- (id)_refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2;
- (long long)_currentIDStatusForDestination:(id)a0 service:(id)a1 respectExpiry:(BOOL)a2 listenerID:(id)a3;
- (BOOL)forceRefreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)_hasCacheForService:(id)a0;
- (void)dealloc;
- (long long)_currentCachedIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;
- (BOOL)requestIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)participantsForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)requiredIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)refreshIDStatusForDestinations:(id)a0 service:(id)a1 listenerID:(id)a2 queue:(id)a3 completionBlock:(id /* block */)a4;
- (long long)_refreshIDStatusForDestination:(id)a0 service:(id)a1 listenerID:(id)a2;

@end
