@class NSNetServiceBrowser, NSString, NSArray, NSHashTable, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue, HMFNetServiceBrowserDelegate;

@interface HMFNetServiceBrowser : HMFObject <NSNetServiceBrowserDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_netServices;
    NSMutableOrderedSet *_cachedNetServices;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) NSNetServiceBrowser *internal;
@property (nonatomic, getter=isBrowsing) BOOL browsing;
@property (copy, nonatomic) id /* block */ browseBlock;
@property (weak) id<HMFNetServiceBrowserDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *serviceType;
@property (nonatomic) BOOL shouldCache;
@property (readonly, copy, nonatomic) NSArray *cachedNetServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;

- (void)stopBrowsing;
- (id)descriptionWithPointer:(BOOL)a0;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (id)init;
- (void)addNetServiceToCache:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)shortDescription;
- (void)_stopBrowsingWithError:(id)a0;
- (void)netServiceBrowserWillSearch:(id)a0;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)startBrowsingWithCompletionHandler:(id /* block */)a0;
- (id)initWithDomain:(id)a0 serviceType:(id)a1;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didRemoveDomain:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowserDidStopSearch:(id)a0;
- (id)logIdentifier;

@end
