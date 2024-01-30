@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)hardwareModel;
- (id)serialNumber;
- (id)modelVersion;
- (id)osVersion;
- (id)deviceName;
- (id)deviceClass;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_isHomePod;
- (BOOL)hasLocalSecret;
- (BOOL)supportsSecureBackupRecovery;
- (id)marketingModel;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (BOOL)_currentProcessHasEntitlement:(id)a0;

@end
