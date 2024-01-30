@class NSString;

@interface WFSSHKeyFormatED25519 : NSObject <WFSSHKeyFormat>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedDisplayName;
+ (id)defaultKeySize;
+ (id)possibleKeySizes;
+ (id)privateKeyType;
+ (id)publicKeyType;
+ (id)privateKeySpecifier;
+ (id)publicKeySpecifier;
+ (id)keyPairFromPrivateKey:(id)a0 comment:(id)a1 error:(id *)a2;
+ (id)generateKeyPairWithKeySize:(unsigned long long)a0 comment:(id)a1;
+ (id)sshPublicKeyFromED25519Data:(id)a0;
+ (id)sshPrivateKeyFromED25519PrivateKey:(id)a0 publicKey:(id)a1 comment:(id)a2;


@end
