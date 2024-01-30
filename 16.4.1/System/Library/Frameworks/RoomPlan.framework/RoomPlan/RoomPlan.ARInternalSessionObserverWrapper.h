@interface RoomPlan.ARInternalSessionObserverWrapper : NSObject <ARInternalSessionObserver, ARReplayConfigurationDelegate> {
    void /* unknown type, empty encoding */ captureSession;
}

- (void)session:(id)a0 didFailWithError:(id)a1;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void)sessionWasInterrupted:(id)a0;
- (void)session:(id)a0 willRunWithConfiguration:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)sessionShouldAttemptRelocalization:(id)a0;
- (void)session:(id)a0 didUpdateSpatialMappingPointClouds:(id)a1;
- (void)replayConfigurationDidFinishReplaying:(id)a0;

@end
