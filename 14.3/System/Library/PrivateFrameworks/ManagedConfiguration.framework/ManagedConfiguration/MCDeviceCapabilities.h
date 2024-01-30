@interface MCDeviceCapabilities : NSObject

@property (readonly, nonatomic) BOOL supportsBlockLevelEncryption;
@property (readonly, nonatomic) BOOL supportsFileLevelEncryption;

+ (id)currentDevice;

- (id)init;
- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)a0 localizedIncompatibilityMessage:(id)a1 outError:(id *)a2;
- (BOOL)_mediaDiskIsEncrypted;

@end
