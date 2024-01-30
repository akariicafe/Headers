@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;

- (id)osBuild;
- (BOOL)isInternalBuild;
- (id)deviceId;
- (id)systemInfo;
- (BOOL)isBetaBuild;
- (id)init;
- (id)deviceClass;
- (id)deviceModelCode;
- (id)osType;
- (void).cxx_destruct;
- (id)enabledInputModeIdentifiers;
- (id)trialVersionTag;
- (BOOL)isBetaUserWithIsStale:(BOOL *)a0;
- (id)userSettingsLanguageCode;
- (id)userSettingsRegionCode;
- (BOOL)setDeviceIdentifier:(id)a0;
- (id)_trialVersion;
- (id)_systemInfoWithIsStale:(BOOL *)a0;
- (BOOL)deleteDeviceIdentifier;
- (id)createPersistentDeviceIdentifier;
- (BOOL)setDeviceIdentifier:(id)a0 path:(id)a1;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (id)storedDeviceIdentifier;
- (id)deviceInfoForQuestion:(id)a0;
- (int)populationType;
- (id)reloadSystemInfo;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (BOOL)resetDeviceIdentifier;
- (id)reloadDeviceId;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;
- (id)initWithPaths:(id)a0;

@end
