@interface SiriSuggestionsSupport.SiriSuggestionsXPCService : _TtCs12_SwiftObject <SiriSuggestionsAPI.SiriSuggestionsXPCInterface> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ eventDrivenClient;
    void /* unknown type, empty encoding */ connectedAppId;
    void /* unknown type, empty encoding */ accessList;
}

- (void)getSuggestionsForAppWithAppBundleId:(id)a0 placementId:(id)a1 entities:(id)a2 bridge:(id)a3;
- (void)refreshServiceWithCompletion:(id /* block */)a0;
- (void)submitFor:(id)a0 propertyKey:(id)a1 propertyValue:(id)a2 completion:(id /* block */)a3;
- (void)suggestNextWithRequestId:(id)a0 extraStateStoreProperties:(id)a1 completionHandler:(id /* block */)a2;

@end
