@class NSString, HMDDevice;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject <HMFLogging>

@property (readonly) NSString *sessionID;
@property (readonly) HMDDevice *expectedInviter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
