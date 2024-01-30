@class NSString, NSDictionary, NSData, TPPBSecureElementIdentity, TPPBPeerStableInfoSetting, TPPolicyVersion;

@interface TPPeerStableInfo : NSObject

@property (readonly, nonatomic) unsigned long long clock;
@property (readonly) TPPolicyVersion *frozenPolicyVersion;
@property (readonly) TPPolicyVersion *flexiblePolicyVersion;
@property (readonly, nonatomic) NSDictionary *policySecrets;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSData *recoverySigningPublicKey;
@property (readonly, nonatomic) NSData *recoveryEncryptionPublicKey;
@property (readonly, nonatomic) int syncUserControllableViews;
@property (readonly, nonatomic) TPPBSecureElementIdentity *secureElementIdentity;
@property (readonly, nonatomic) TPPBPeerStableInfoSetting *walrusSetting;
@property (nonatomic) BOOL isInheritedAccount;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *sig;

- (BOOL)checkSignatureWithKey:(id)a0;
- (BOOL)isEqualToPeerStableInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithClock:(unsigned long long)a0 frozenPolicyVersion:(id)a1 flexiblePolicyVersion:(id)a2 policySecrets:(id)a3 syncUserControllableViews:(int)a4 secureElementIdentity:(id)a5 walrusSetting:(id)a6 deviceName:(id)a7 serialNumber:(id)a8 osVersion:(id)a9 recoverySigningPubKey:(id)a10 recoveryEncryptionPubKey:(id)a11 isInheritedAccount:(BOOL)a12 data:(id)a13 sig:(id)a14;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0 sig:(id)a1;
- (id)initWithClock:(unsigned long long)a0 frozenPolicyVersion:(id)a1 flexiblePolicyVersion:(id)a2 policySecrets:(id)a3 syncUserControllableViews:(int)a4 secureElementIdentity:(id)a5 walrusSetting:(id)a6 deviceName:(id)a7 serialNumber:(id)a8 osVersion:(id)a9 signingKeyPair:(id)a10 recoverySigningPubKey:(id)a11 recoveryEncryptionPubKey:(id)a12 isInheritedAccount:(BOOL)a13 error:(id *)a14;
- (id)dictionaryRepresentation;
- (id)bestPolicyVersion;

@end
