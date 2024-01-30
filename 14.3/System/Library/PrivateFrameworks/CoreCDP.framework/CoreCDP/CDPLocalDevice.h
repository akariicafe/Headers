@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)osVersion;
- (id)modelVersion;
- (id)deviceName;
- (id)init;
- (id)hardwareModel;
- (id)serialNumber;
- (id)deviceClass;
- (void).cxx_destruct;
- (BOOL)hasLocalSecret;
- (BOOL)supportsSecureBackupRecovery;
- (id)marketingModel;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (BOOL)_isHomePod;
- (BOOL)_currentProcessHasEntitlement:(id)a0;

@end
