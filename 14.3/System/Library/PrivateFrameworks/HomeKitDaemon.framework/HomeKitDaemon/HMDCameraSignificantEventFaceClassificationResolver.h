@class HMDHome, NSString;

@interface HMDCameraSignificantEventFaceClassificationResolver : HMFObject <HMFLogging>

@property (weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)personManagerWithUUID:(id)a0;
- (id)logIdentifier;
- (id)faceClassificationForSignificantEventFaceClassifications:(id)a0;

@end
