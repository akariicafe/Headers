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

+ (id)sharedChangesReceiver;

- (void)callChangesHandlersWithProviderDomains:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)removeChangesHandlerToken:(id)a0;
- (void)updateProviderDomainsWithAttemptCount:(unsigned long long)a0;
- (id)_init;
- (void)providerDomainsHaveChanged:(id)a0 error:(id)a1;
- (void)signalChange;
- (id)addChangesHandler:(id /* block */)a0;

@end
