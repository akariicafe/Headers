@interface RoomPlan.RSSessionDelegateWrapper : NSObject <RSCaptureSessionDelegate> {
    void /* unknown type, empty encoding */ captureSession;
    void /* unknown type, empty encoding */ initializationState;
}

- (void)session:(id)a0 didFailWithError:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)session:(id)a0 didUpdateAsset:(id)a1;
- (void)session:(id)a0 didUpdateFloorPlan:(id)a1;
- (void)session:(id)a0 didUpdateMarkerCoaching:(id)a1;
- (void)session:(id)a0 didUpdateTextCoaching:(id)a1;

@end
