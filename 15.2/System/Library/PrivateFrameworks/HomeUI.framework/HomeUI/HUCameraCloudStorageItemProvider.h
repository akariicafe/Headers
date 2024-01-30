@class HMCameraProfile;

@interface HUCameraCloudStorageItemProvider : HFStaticItemProvider

@property (readonly, copy, nonatomic) HMCameraProfile *cameraProfile;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCameraProfile:(id)a0;

@end
