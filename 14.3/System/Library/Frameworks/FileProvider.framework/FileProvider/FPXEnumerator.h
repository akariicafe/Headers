@class NSString, FPXDomainContext, FPItemID;
@protocol FPXEnumeratorObserver, NSFileProviderEnumerator;

@interface FPXEnumerator : NSObject <FPXEnumerator> {
    FPXDomainContext *_domainContext;
    id<NSFileProviderEnumerator> _vendorEnumerator;
    FPItemID *_observedItemID;
    BOOL _invalidated;
    BOOL _forceFileURLs;
}

@property (readonly) id<FPXEnumeratorObserver> observer;
@property (readonly) FPItemID *observedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateVendorEnumeration;
- (void)forceAddFileURLsForItems:(id)a0;
- (void)currentSyncAnchorWithCompletion:(id /* block */)a0;
- (void)enumerateItemsFromPage:(id)a0 reply:(id /* block */)a1;
- (void)enumerateChangesFromToken:(id)a0 reply:(id /* block */)a1;
- (void)keepAliveConnectionForRegisteredObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)alternateContentsWereUpdatedAtURL:(id)a0 forItem:(id)a1;
- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1 vendorEnumerator:(id)a2 observer:(id)a3 forceFileURLs:(BOOL)a4;
- (void)forceItemUpdate:(id)a0;
- (void)invalidate;

@end
