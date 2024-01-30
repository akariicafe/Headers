@class NSString, NSFileProviderDomain;

@interface FPMaterializedSetEnumerator : NSObject <NSFileProviderEnumerator> {
    NSFileProviderDomain *_domain;
    NSString *_provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(id)a0;
- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 provider:(id)a1;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)enumerateChangesForObserver:(id)a0 fromSyncAnchor:(id)a1;
- (void)invalidate;

@end
