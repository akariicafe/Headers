@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)hardwareModel;
- (id)deviceName;
- (id)deviceClass;
- (id)serialNumber;
- (BOOL)currentProcessHasEntitlement:(id)a0;
- (id)osVersion;
- (id)modelVersion;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasLocalSecret;
- (BOOL)_isHomePod;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (id)marketingModel;
- (BOOL)supportsSecureBackupRecovery;

@end
