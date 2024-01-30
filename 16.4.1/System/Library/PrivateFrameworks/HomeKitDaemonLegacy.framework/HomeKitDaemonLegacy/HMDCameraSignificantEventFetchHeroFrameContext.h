@class HMCameraSignificantEvent, HMDCameraSnapshotIDSRelayReceiver;

@interface HMDCameraSignificantEventFetchHeroFrameContext : HMFObject

@property (readonly) HMCameraSignificantEvent *significantEvent;
@property (readonly) HMDCameraSnapshotIDSRelayReceiver *relayReceiver;

- (void).cxx_destruct;
- (id)initWithSignificantEvent:(id)a0 relayReceiver:(id)a1;

@end
