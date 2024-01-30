@class NSArray;

@interface HMDCameraHomeSettingsConfiguration : HMFObject

@property (readonly, nonatomic) NSArray *cameraSettings;
@property (readonly, nonatomic) NSArray *userSettings;
@property (readonly) unsigned long long enabledResidentsDeviceCapabilities;
@property (readonly, getter=isFaceClassificationEnabled) BOOL faceClassificationEnabled;
@property (readonly, getter=isOwner) BOOL owner;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;

@end
