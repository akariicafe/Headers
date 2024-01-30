@interface SiriKitRuntime.ExecutionBridgeDelegateToXPCAdapter : _TtCs12_SwiftObject <SKRExecutionBridge> {
    void /* unknown type, empty encoding */ wrapped;
    void /* unknown type, empty encoding */ runtimeNotReadyHandler;
}

- (void)prepareForAudioHandoffWithCompletion:(id /* block */)a0;
- (void)prepareForAudioHandoffFailedWithCompletion:(id /* block */)a0;
- (void)submitWithExecutionOutput:(id)a0 completion:(id /* block */)a1;
- (void)closeWithExecutionOutput:(id)a0;
- (void)closeWithExecutionOutput:(id)a0 errorString:(id)a1;
- (void)flowPluginWillExecuteWithFlowPluginInfo:(id)a0;
- (void)fallbackToServerForResultCandidateId:(id)a0;
- (void)fetchContextsFor:(id)a0 includesNearByDevices:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchSpeechInfoWithReply:(id /* block */)a0;
- (void)runtimeWasNotReadyWithReply:(id /* block */)a0;

@end
