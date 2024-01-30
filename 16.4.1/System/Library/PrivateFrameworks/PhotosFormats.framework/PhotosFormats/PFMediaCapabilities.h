@class NSDictionary;

@interface PFMediaCapabilities : NSObject

@property (retain) NSDictionary *capabilitiesInformation;
@property (retain) NSDictionary *outOfBandHints;

+ (id)recordVideoConfigurationWithValidValues:(id)a0;
+ (BOOL)videoCodecIsProResEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)a0;
+ (id)proResVideoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (BOOL)setNewFormatsConfiguration:(long long)a0 fromSource:(long long)a1;
+ (id)capabilitiesForCurrentDevice;
+ (unsigned int)currentDeviceHEVCCapabilities;
+ (id)stringForSupport:(long long)a0;
+ (id)testCapabilitiesNotSupportingHEVC;
+ (void)setRecordVideoConfiguration:(id)a0;
+ (long long)newFormatsConfiguration;
+ (id)videoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (id)legacyCapabilities;
+ (BOOL)currentDeviceIsEligibleForHDRPlayback;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)a0;
+ (id)recordSlomoConfigurationWithValidValues:(id)a0;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (BOOL)videoCodecIsEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (void)setRecordSlomoConfiguration:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (long long)supportForAdjustmentBaseResources;
- (BOOL)supportsTranscodeChoice;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)decodingSupportForAVAsset:(id)a0;
- (long long)decodingSupportForFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (id)initWithOpaqueRepresentation:(id)a0;
- (id)opaqueRepresentation;
- (long long)supportForAssetBundleVersion:(id)a0;
- (long long)supportForContainerTypeIdentifier:(id)a0;
- (long long)supportForLivePhotoVersion:(id)a0;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)a0 selector:(SEL)a1;
- (BOOL)supportsHDR;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;
- (long long)userDefaultsPeerOverrideValue;

@end
