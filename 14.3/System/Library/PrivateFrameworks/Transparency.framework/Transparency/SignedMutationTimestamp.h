@class NSString, NSData, TransparencySignatureVerifier, Signature, TransparencyManagedDataStore;

@interface SignedMutationTimestamp : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencySignatureVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (retain) NSString *application;
@property (copy, nonatomic) NSData *mutation;
@property (retain, nonatomic) Signature *signature;
@property (nonatomic) BOOL hasSignature;

+ (id)descriptor;

- (unsigned long long)verifyWithError:(id *)a0;
- (id)parsedMutationWithError:(id *)a0;
- (id)copyManagedObjectWithError:(id *)a0;

@end
