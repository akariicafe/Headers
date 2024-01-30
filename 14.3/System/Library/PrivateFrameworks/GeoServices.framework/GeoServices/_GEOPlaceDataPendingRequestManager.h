@class NSMutableDictionary;

@interface _GEOPlaceDataPendingRequestManager : NSObject {
    NSMutableDictionary *_requestHandlersPending;
}

- (id)init;
- (void).cxx_destruct;
- (id)_finished:(id)a0 withResult:(id)a1 error:(id)a2;
- (void)_cleanUpFinishedHandlers:(id)a0;
- (void)failedToResolveIdentifiers:(id)a0 withError:(id)a1;
- (void)_failAllPendingRequests;
- (void)willUpdateExpiredIdentifiers:(id)a0;
- (id)identifiersRequested:(id)a0 forHandler:(id /* block */)a1;
- (void)didResolveItems:(id)a0 forIdentifiers:(id)a1;

@end
