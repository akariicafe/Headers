@class Signature, NSData, TransparencySignatureVerifier, MapHead, TransparencyManagedDataStore;

@interface SignedMapHead : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencySignatureVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) MapHead *parsedMapHead;
@property (copy, nonatomic) NSData *mapHead;
@property (retain, nonatomic) Signature *signature;
@property (nonatomic) BOOL hasSignature;

+ (id)descriptor;

- (unsigned long long)verifyWithError:(id *)a0;
- (id)copyManagedObject:(id *)a0;
- (id)createManagedObjectWithError:(id *)a0;

@end
