@class NSString;

@interface WFSSHKeyFormatRSA : NSObject <WFSSHKeyFormat>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultKeySize;
+ (id)localizedDisplayName;
+ (id)possibleKeySizes;
+ (id)privateKeyType;
+ (id)publicKeyType;
+ (id)privateKeySpecifier;
+ (id)publicKeySpecifier;
+ (id)keyPairFromPrivateKey:(id)a0 comment:(id)a1 error:(id *)a2;
+ (id)generateKeyPairWithKeySize:(unsigned long long)a0 comment:(id)a1;
+ (id)pkcs1FromRSAKey:(struct _CCRSACryptor { } *)a0;
+ (id)sshPublicKeyFromRSAKey:(struct _CCRSACryptor { } *)a0;


@end
