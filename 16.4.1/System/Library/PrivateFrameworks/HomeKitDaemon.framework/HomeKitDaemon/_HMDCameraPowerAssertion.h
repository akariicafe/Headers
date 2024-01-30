@class HMDCameraPowerAssertionHandler, HMDCameraSessionID;

@interface _HMDCameraPowerAssertion : HMFObject

@property (readonly, weak, nonatomic) HMDCameraPowerAssertionHandler *assertionHandler;
@property (readonly, nonatomic) HMDCameraSessionID *remoteRequestHandlerSessionID;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPowerAssertionHandler:(id)a0 remoteRequestHandlerSessionID:(id)a1;

@end
