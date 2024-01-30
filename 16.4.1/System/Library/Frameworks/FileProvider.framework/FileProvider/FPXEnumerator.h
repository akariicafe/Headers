@class NSString, FPXDomainContext, NSFileProviderRequest, NSObject, FPItemID;
@protocol OS_os_log, FPXEnumeratorObserver, NSFileProviderEnumerator, OS_dispatch_queue;

@interface FPXEnumerator : NSObject <FPXEnumerator> {
    FPXDomainContext *_domainContext;
    id<NSFileProviderEnumerator> _vendorEnumerator;
    NSFileProviderRequest *_nsFileProviderRequest;
    FPItemID *_observedItemID;
    BOOL _invalidated;
    BOOL _isWorkingSetEnum;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
}

@property (readonly) id<FPXEnumeratorObserver> observer;
@property (readonly) FPItemID *observedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)keepAliveConnectionForRegisteredObserver:(id /* block */)a0;
- (void)alternateContentsWereUpdatedAtURL:(id)a0 forItem:(id)a1;
- (void)forceAddFileURLsForItems:(id)a0;
- (void)invalidateVendorEnumeration;
- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1 vendorEnumerator:(id)a2 nsFileProviderRequest:(id)a3 observer:(id)a4 isWorkingSetEnum:(BOOL)a5 queue:(id)a6;
- (void)currentSyncAnchorWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)enumerateItemsFromPage:(id)a0 suggestedPageSize:(long long)a1 upTo:(long long)a2 reply:(id /* block */)a3;
- (id)vendorEnumerator;
- (void)forceItemUpdate:(id)a0;
- (void)enumerateItemsFromPage:(id)a0 suggestedPageSize:(long long)a1 reply:(id /* block */)a2;
- (void)enumerateChangesFromToken:(id)a0 suggestedBatchSize:(long long)a1 reply:(id /* block */)a2;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;

@end
