@class NSDictionary;

@interface PFMediaCapabilities : NSObject

@property (retain) NSDictionary *capabilitiesInformation;
@property (retain) NSDictionary *outOfBandHints;

+ (id)stringForSupport:(long long)a0;
+ (id)recordSlomoConfigurationWithValidValues:(id)a0;
+ (BOOL)videoCodecIsEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (BOOL)videoCodecIsProResEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (void)setRecordSlomoConfiguration:(id)a0;
+ (void)setRecordVideoConfiguration:(id)a0;
+ (id)testCapabilitiesNotSupportingHEVC;
+ (unsigned int)currentDeviceHEVCCapabilities;
+ (id)recordVideoConfigurationWithValidValues:(id)a0;
+ (id)proResVideoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (BOOL)currentDeviceIsEligibleForHDRPlayback;
+ (long long)newFormatsConfiguration;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)a0;
+ (BOOL)setNewFormatsConfiguration:(long long)a0 fromSource:(long long)a1;
+ (id)videoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (id)capabilitiesForCurrentDevice;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)a0;
+ (id)legacyCapabilities;

- (id)description;
- (long long)supportForAdjustmentBaseResources;
- (BOOL)supportsTranscodeChoice;
- (void).cxx_destruct;
- (id)initWithOpaqueRepresentation:(id)a0;
- (long long)supportForContainerTypeIdentifier:(id)a0;
- (long long)supportForLivePhotoVersion:(id)a0;
- (long long)supportForAssetBundleVersion:(id)a0;
- (long long)decodingSupportForFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (long long)decodingSupportForAVAsset:(id)a0;
- (BOOL)supportsHDR;
- (id)opaqueRepresentation;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)userDefaultsPeerOverrideValue;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;

@end
