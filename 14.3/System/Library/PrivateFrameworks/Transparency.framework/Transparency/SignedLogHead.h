@class Signature, NSData, LogHead, TransparencySignatureVerifier, TransparencyManagedDataStore;

@interface SignedLogHead : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencySignatureVerifier *verifier;
@property (retain) TransparencyManagedDataStore *dataStore;
@property (readonly) LogHead *parsedLogHead;
@property (copy, nonatomic) NSData *logHead;
@property (retain, nonatomic) Signature *signature;
@property (nonatomic) BOOL hasSignature;

+ (id)descriptor;

- (unsigned long long)verifyWithError:(id *)a0;
- (id)copyManagedObject:(id *)a0;
- (id)createManagedObjectWithError:(id *)a0;
- (void)storeSignatureResult:(unsigned long long)a0 signatureError:(id *)a1;

@end
