@class NSString, NSDictionary, NSData, TPPolicyVersion;

@interface TPPeerStableInfo : NSObject

@property (nonatomic) unsigned long long clock;
@property (retain, nonatomic) NSDictionary *policySecrets;
@property (retain, nonatomic) NSData *recoverySigningPublicKey;
@property (retain, nonatomic) NSData *recoveryEncryptionPublicKey;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *sig;
@property (readonly) TPPolicyVersion *frozenPolicyVersion;
@property (readonly) TPPolicyVersion *flexiblePolicyVersion;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) int syncUserControllableViews;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)checkSignatureWithKey:(id)a0;
- (id)initWithClock:(unsigned long long)a0 frozenPolicyVersion:(id)a1 flexiblePolicyVersion:(id)a2 policySecrets:(id)a3 syncUserControllableViews:(int)a4 deviceName:(id)a5 serialNumber:(id)a6 osVersion:(id)a7 recoverySigningPubKey:(id)a8 recoveryEncryptionPubKey:(id)a9 data:(id)a10 sig:(id)a11;
- (id)initWithClock:(unsigned long long)a0 frozenPolicyVersion:(id)a1 flexiblePolicyVersion:(id)a2 policySecrets:(id)a3 syncUserControllableViews:(int)a4 deviceName:(id)a5 serialNumber:(id)a6 osVersion:(id)a7 signingKeyPair:(id)a8 recoverySigningPubKey:(id)a9 recoveryEncryptionPubKey:(id)a10 error:(id *)a11;
- (id)initWithData:(id)a0 sig:(id)a1;
- (BOOL)isEqualToPeerStableInfo:(id)a0;
- (id)bestPolicyVersion;

@end
