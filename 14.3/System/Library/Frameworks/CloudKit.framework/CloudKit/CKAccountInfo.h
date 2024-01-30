@interface CKAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long validationCounter;
@property (nonatomic) BOOL isFromCache;
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;
@property (nonatomic) long long deviceToDeviceEncryptionAvailability;
@property (nonatomic) long long accountStatus;
@property (nonatomic) long long accountPartition;
@property (nonatomic) BOOL hasValidCredentials;

+ (id)cachedAccountInfoByContainerSetupHash;
+ (void)invalidateCachedAccountInfo;
+ (id)cachedAccountInfoForSetupInfoHash:(id)a0;
+ (void)setCachedAccountInfoByContainerSetupHash:(id)a0;

- (id)CKPropertiesDescription;
- (void)setAsCachedAccountInfoForSetupInfoHash:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
