@class NSString, NSFileProviderManager, NSFileProviderDomainVersion;

@interface FPPendingSetEnumerator : NSObject <NSFileProviderPendingSetEnumerator> {
    NSFileProviderManager *_manager;
}

@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) double refreshInterval;
@property (readonly, nonatomic, getter=isMaximumSizeReached) BOOL maximumSizeReached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManager:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)enumerateChangesForObserver:(id)a0 fromSyncAnchor:(id)a1;
- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;

@end
