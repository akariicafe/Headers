@class NSDictionary, NSMutableSet, NSObject, FPPacer;
@protocol OS_dispatch_queue;

@interface FPProviderDomainChangesReceiver : NSObject {
    NSMutableSet *_changesHandlers;
    NSDictionary *_providerDomainsByID;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _notifyToken;
    int _settingsChangedToken;
    FPPacer *_pacer;
}

@property (readonly, copy) NSDictionary *cachedProviderDomainsByID;

+ (id)sharedChangesReceiverIfAvailable;
+ (id)_sharedChangesReceiverInitIfNeeded:(BOOL)a0;
+ (id)sharedChangesReceiver;

- (void)signalChange;
- (void)providerDomainsHaveChanged:(id)a0 error:(id)a1;
- (id)_init;
- (void)callChangesHandlersWithProviderDomains:(id)a0 error:(id)a1;
- (void)_t_discardCache;
- (id)addChangesHandler:(id /* block */)a0;
- (void)removeChangesHandlerToken:(id)a0;
- (void)updateProviderDomainsWithAttemptCount:(unsigned long long)a0;
- (void).cxx_destruct;

@end
