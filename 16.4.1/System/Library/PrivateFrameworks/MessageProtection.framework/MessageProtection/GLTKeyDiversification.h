@interface GLTKeyDiversification : NSObject

+ (id)diversifyPublicKey:(struct __SecKey { } *)a0 trackingPreventionSalt:(id)a1 withDocumentIdentifier:(id)a2 error:(id *)a3;
+ (struct __SecKey { } *)diversifyPrivateKey:(struct __SecKey { } *)a0 withDocumentIdentifier:(id)a1 trackingPreventionSalt:(id)a2 error:(id *)a3;
+ (id)diversifyPublicKey:(struct __SecKey { } *)a0 withDocumentIdentifier:(id)a1 error:(id *)a2;

@end
