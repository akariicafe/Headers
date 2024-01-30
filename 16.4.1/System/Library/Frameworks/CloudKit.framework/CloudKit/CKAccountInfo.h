@interface CKAccountInfo : NSObject <NSSecureCoding> {
    long long _validationCounter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isFromCache;
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;
@property (nonatomic) long long deviceToDeviceEncryptionAvailability;
@property (nonatomic) long long accountPartition;
@property (nonatomic) BOOL hasValidCredentials;
@property BOOL hasEncryptionIdentity;
@property (nonatomic) long long accountStatus;
@property (readonly, nonatomic) long long walrusStatus;
@property (readonly, nonatomic) long long deviceToDeviceDataPrivacyStatus;

+ (void)invalidateCachedAccountInfo;
+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithFakeDeviceToDeviceEncryptionAvailability:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (id)init;
- (id)description;
- (id)initWithAccountStatus:(long long)a0 accountPartition:(long long)a1 hasValidCredentials:(BOOL)a2 deviceToDeviceEncryptionAvailability:(long long)a3 walrusStatus:(long long)a4;

@end
