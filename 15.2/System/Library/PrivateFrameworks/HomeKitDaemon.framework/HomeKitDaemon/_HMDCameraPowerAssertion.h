@class HMDCameraPowerAssertionHandler, HMDCameraSessionID;

@interface _HMDCameraPowerAssertion : HMFObject

@property (readonly, weak, nonatomic) HMDCameraPowerAssertionHandler *assertionHandler;
@property (readonly, nonatomic) HMDCameraSessionID *remoteRequestHandlerSessionID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPowerAssertionHandler:(id)a0 remoteRequestHandlerSessionID:(id)a1;

@end
