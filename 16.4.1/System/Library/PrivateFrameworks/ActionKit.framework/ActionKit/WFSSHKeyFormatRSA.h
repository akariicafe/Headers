@class NSString;

@interface WFSSHKeyFormatRSA : NSObject <WFSSHKeyFormat>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedDisplayName;
+ (id)defaultKeySize;
+ (id)generateKeyPairWithKeySize:(unsigned long long)a0 comment:(id)a1;
+ (id)keyPairFromPrivateKey:(id)a0 comment:(id)a1 error:(id *)a2;
+ (id)possibleKeySizes;
+ (id)privateKeySpecifier;
+ (id)privateKeyType;
+ (id)publicKeySpecifier;
+ (id)publicKeyType;
+ (id)pkcs1FromRSAKey:(struct _CCRSACryptor { } *)a0;
+ (id)sshPublicKeyFromRSAKey:(struct _CCRSACryptor { } *)a0;


@end
