@class NSString, HMDDevice;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject

@property (readonly) NSString *sessionID;
@property (readonly) HMDDevice *expectedInviter;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 expectedInviter:(id)a1;
- (BOOL)canAcceptInvitationFromDeviceWithHandle:(id)a0 forSessionWithIdentifier:(id)a1;

@end
