@class NSData, NSString;

@interface HMDHomeWalletKeySecureElementInfo : HMFObject

@property (readonly, copy) NSData *deviceCredentialKey;
@property (readonly, copy) NSString *applicationIdentifier;
@property (readonly, copy) NSString *subCredentialIdentifier;
@property (readonly, copy) NSString *secureElementIdentifier;
@property (readonly, copy) NSString *pairedReaderIdentifier;

+ (id)shortDescription;
+ (id)createForEasyProvisioning;
+ (id)createForExpressConflictCheckWithSecureElementIdentifier:(id)a0;

- (id)privateDescription;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPKPass:(id)a0;
- (id)initWithDeviceCredentialKey:(id)a0 applicationIdentifier:(id)a1 subCredentialIdentifier:(id)a2 secureElementIdentifier:(id)a3 pairedReaderIdentifier:(id)a4;

@end
