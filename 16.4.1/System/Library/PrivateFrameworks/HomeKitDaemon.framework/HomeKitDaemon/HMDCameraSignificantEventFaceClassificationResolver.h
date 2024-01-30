@class HMDHome, NSString;

@interface HMDCameraSignificantEventFaceClassificationResolver : HMFObject <HMFLogging>

@property (weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (id)personManagerWithUUID:(id)a0;
- (id)_faceClassificationForSignificantEventFaceClassifications:(id)a0 user:(id)a1;
- (id)faceClassificationForSignificantEventFaceClassifications:(id)a0;
- (id)faceClassificationForSignificantEventFaceClassifications:(id)a0 user:(id)a1;

@end
