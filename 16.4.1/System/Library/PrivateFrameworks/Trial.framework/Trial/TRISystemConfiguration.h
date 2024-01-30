@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;

- (id)enabledInputModeIdentifiers;
- (id)deviceId;
- (id)osBuild;
- (id)carrierCountryIsoCode;
- (BOOL)isInternalBuild;
- (id)deviceClass;
- (id)aneVersion;
- (id)deviceModelCode;
- (id)carrierBundleIdentifier;
- (BOOL)isBetaBuild;
- (id)userSettingsLanguageCode;
- (id)initWithPaths:(id)a0;
- (id)systemInfo;
- (BOOL)hasAne;
- (BOOL)isDiagnosticsAndUsageEnabled;
- (int)populationType;
- (BOOL)resetDeviceIdentifier;
- (BOOL)setDeviceIdentifier:(id)a0;
- (id)init;
- (id)_dispatchQueueForCarrierInfoGathering;
- (void).cxx_destruct;
- (id)userSettingsRegionCode;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (id)trialVersionTag;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (id)_systemInfoWithIsStale:(BOOL *)a0;
- (id)_trialVersion;
- (id)createPersistentDeviceIdentifier;
- (BOOL)deleteDeviceIdentifier;
- (id)deviceInfoForQuestion:(id)a0;
- (BOOL)isBetaUserWithIsStale:(BOOL *)a0;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;
- (id)osType;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (id)reloadDeviceId;
- (id)reloadSystemInfo;
- (BOOL)setDeviceIdentifier:(id)a0 path:(id)a1;
- (id)storedDeviceIdentifier;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (id)userSettingsBCP47DeviceLocale;

@end
