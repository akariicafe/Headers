@class HMDCameraStreamSessionID, HMDCameraRemoteStreamTracker;

@interface _HMDCameraRemoteStreamTrackerAssertion : HMFObject

@property (weak) HMDCameraRemoteStreamTracker *streamTracker;
@property (readonly) HMDCameraStreamSessionID *streamSessionID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStreamTracker:(id)a0 streamIdentifier:(id)a1;

@end
