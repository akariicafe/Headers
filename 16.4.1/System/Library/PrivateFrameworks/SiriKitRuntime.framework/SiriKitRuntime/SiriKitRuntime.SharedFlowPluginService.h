@interface SiriKitRuntime.SharedFlowPluginService : _TtCs12_SwiftObject <SKRSharedFlowPluginServiceXPC> {
    void /* unknown type, empty encoding */ flowLoader;
    void /* unknown type, empty encoding */ siriKitRuntime;
    void /* unknown type, empty encoding */ warmupTracker;
    void /* unknown type, empty encoding */ currentTurnCache;
}

- (void)endTurnWithReply:(id /* block */)a0;
- (void)loadFlowPluginWithBundleId:(id)a0 bundlePath:(id)a1 rcId:(id)a2 hypothesisId:(id)a3 reply:(id /* block */)a4;
- (void)startTurnWithTurnData:(id)a0 bridge:(id)a1 reply:(id /* block */)a2;

@end
