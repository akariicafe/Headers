@class NSUUID, NSString;

@interface HMDCameraProfileSettingsCoreDataAdapter : HMFObject <HMFLogging>

@property (readonly) NSUUID *hapAccessoryUUID;
@property (readonly) NSUUID *homeUUID;
@property (readonly) NSUUID *cameraProfileSettingsModelID;
@property (readonly) NSUUID *derivedPropertiesModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)fetchCameraProfileSettingsModelWithError:(id *)a0;
- (id)fetchDerivedPropertiesModelWithError:(id *)a0;
- (id)initWithHAPAccessory:(id)a0 cameraProfileSettingsModelID:(id)a1 derivedPropertiesModelID:(id)a2;
- (void)updateCameraProfileSettingsModel:(id)a0 completion:(id /* block */)a1;
- (void)updateDerivedPropertiesModel:(id)a0 completion:(id /* block */)a1;

@end
