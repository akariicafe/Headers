@class NSSet, NSURL, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface CSFileProviderDomainMonitor : NSObject {
    NSSet *_activeDomains;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _activeDomainsLock;
    NSMutableOrderedSet *_removedDomains;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _removedDomainsLock;
}

@property (retain, nonatomic) id fileProviderDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *domainDeleteQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *domainUpdateQueue;
@property (readonly) NSURL *fileProviderDomainURL;
@property (copy) id /* block */ domainCleaner;

+ (id)sharedInstance;

- (void)startMonitoring;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)saveAllDomains:(id)a0;
- (id)getProviderIDForBundle:(id)a0;
- (unsigned long long)loadSavedDomains:(id)a0;
- (id)removedDomainFilterQueries;
- (void)updateActiveDomains:(id)a0;
- (void)updateActiveDomainsWithProviderDomainsByID:(id)a0;
- (void)updateRemovedDomains:(id)a0;

@end
