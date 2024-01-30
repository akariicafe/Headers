@class HMDCameraStreamSessionID, HMDCameraRemoteStreamTracker;

@interface _HMDCameraRemoteStreamTrackerAssertion : HMFObject

@property (weak) HMDCameraRemoteStreamTracker *streamTracker;
@property (readonly) HMDCameraStreamSessionID *streamSessionID;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithStreamTracker:(id)a0 streamIdentifier:(id)a1;

@end
