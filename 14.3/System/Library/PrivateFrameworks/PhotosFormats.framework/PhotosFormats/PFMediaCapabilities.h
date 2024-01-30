@class NSDictionary;

@interface PFMediaCapabilities : NSObject

@property (retain) NSDictionary *capabilitiesInformation;

+ (BOOL)setNewFormatsConfiguration:(long long)a0 fromSource:(long long)a1;
+ (BOOL)currentDeviceIsEligibleForHDRPlayback;
+ (unsigned int)currentDeviceHEVCCapabilities;
+ (id)legacyCapabilities;
+ (id)capabilitiesForCurrentDevice;
+ (id)stringForSupport:(long long)a0;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)a0;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)a0;
+ (id)testCapabilitiesNotSupportingHEVC;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (void)setRecordSlomoConfiguration:(id)a0;
+ (void)setRecordVideoConfiguration:(id)a0;
+ (long long)newFormatsConfiguration;
+ (id)recordVideoConfigurationWithValidValues:(id)a0;
+ (id)recordSlomoConfigurationWithValidValues:(id)a0;

- (void).cxx_destruct;
- (long long)supportForAdjustmentBaseResources;
- (BOOL)supportsTranscodeChoice;
- (id)description;
- (id)initWithOpaqueRepresentation:(id)a0;
- (long long)supportForCodec:(unsigned int)a0;
- (long long)supportForContainerTypeIdentifier:(id)a0;
- (long long)supportForLivePhotoVersion:(id)a0;
- (long long)supportForAssetBundleVersion:(id)a0;
- (long long)hevcDecodingSupportForFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (long long)hevcDecodingSupportForAVAsset:(id)a0;
- (id)opaqueRepresentation;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)userDefaultsPeerOverrideValue;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;

@end
