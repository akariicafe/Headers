@interface SiriKitRuntime.ConversationService : _TtCs12_SwiftObject <SKEConversationServiceDelegate> {
    void /* unknown type, empty encoding */ startTurnGroup;
    void /* unknown type, empty encoding */ siriKitRuntime;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ jetsamHelper;
    void /* unknown type, empty encoding */ idleTrackerActivity;
    void /* unknown type, empty encoding */ selfHelper;
}

- (void)bridgeWithDidReceiveRSKE:(id)a0 withRequestContextData:(id)a1 from:(id)a2;
- (void)bridgeWithDidReceiveStartExecutionTurn:(id)a0 from:(id)a1 reply:(id /* block */)a2;
- (void)bridgeWithDidReceiveRequestContextData:(id)a0 from:(id)a1;
- (void)bridgeWithDidReceiveInput:(id)a0 from:(id)a1;
- (void)bridgeWithDidReceiveClearContext:(id)a0 from:(id)a1;
- (void)bridgeWithDidReceiveCancelRequest:(id)a0 from:(id)a1;
- (void)bridgeWithDidReceiveCommitResultCandidateId:(id)a0 from:(id)a1;
- (void)bridgeWithDidReceiveSiriKitPluginSignal:(id)a0 from:(id)a1;

@end
