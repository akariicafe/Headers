@class HMDCameraStreamTracker, HMDCameraStreamSessionID;

@interface _HMDCameraStreamTrackerAssertion : HMFObject

@property (readonly, weak, nonatomic) HMDCameraStreamTracker *streamTracker;
@property (readonly, nonatomic) HMDCameraStreamSessionID *streamSessionID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStreamTracker:(id)a0 streamIdentifier:(id)a1;

@end
