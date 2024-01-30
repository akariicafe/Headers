@class NSDictionary, NSNumber;

@interface HMDCameraRecordingSessionStartRequest : HMFObject

@property (readonly, copy) NSDictionary *homePresenceByPairingIdentity;
@property (readonly, copy) NSNumber *trigger;
@property (readonly) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)initWithHomePresenceByPairingIdentity:(id)a0 trigger:(id)a1 responseHandler:(id /* block */)a2;

@end
