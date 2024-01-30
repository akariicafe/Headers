@class TransparencyManagedDataStore, NSData, TransparencySignatureVerifier, SignedObject, Signature;

@interface SignedObjectHolder : NSObject

@property (retain) SignedObject *signedObject;
@property NSData *object;
@property (readonly) BOOL hasSignature;
@property Signature *signature;
@property (retain) TransparencySignatureVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;

+ (id)signedTypeWithObject:(id)a0 verifier:(id)a1 dataStore:(id)a2;
+ (id)signedTypeWithObject:(id)a0;
+ (id)parseFromData:(id)a0 error:(id *)a1;

- (unsigned long long)verifyWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)data;

@end
