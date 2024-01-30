@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;

- (id)osBuild;
- (BOOL)setDeviceIdentifier:(id)a0;
- (id)deviceId;
- (id)deviceClass;
- (id)trialVersionTag;
- (BOOL)isBetaUserWithIsStale:(BOOL *)a0;
- (id)userSettingsBCP47DeviceLocale;
- (id)_trialVersion;
- (id)_systemInfoWithIsStale:(BOOL *)a0;
- (BOOL)deleteDeviceIdentifier;
- (id)createPersistentDeviceIdentifier;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (BOOL)setDeviceIdentifier:(id)a0 path:(id)a1;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (id)storedDeviceIdentifier;
- (id)deviceInfoForQuestion:(id)a0;
- (id)reloadSystemInfo;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (id)reloadDeviceId;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;
- (id)enabledInputModeIdentifiers;
- (void).cxx_destruct;
- (BOOL)isBetaBuild;
- (id)init;
- (id)userSettingsLanguageCode;
- (BOOL)resetDeviceIdentifier;
- (BOOL)isInternalBuild;
- (id)deviceModelCode;
- (int)populationType;
- (id)userSettingsRegionCode;
- (id)systemInfo;
- (id)osType;
- (id)initWithPaths:(id)a0;

@end
