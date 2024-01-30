@interface MCDeviceCapabilities : NSObject

@property (readonly, nonatomic) BOOL supportsBlockLevelEncryption;
@property (readonly, nonatomic) BOOL supportsFileLevelEncryption;
@property (readonly, nonatomic) BOOL hasSEP;

+ (id)currentDevice;

- (BOOL)validateCapabilitiesRequiredByRestrictions:(id)a0 localizedIncompatibilityMessage:(id)a1 outError:(id *)a2;
- (id)init;
- (BOOL)_mediaDiskIsEncrypted;

@end
