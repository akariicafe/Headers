@class NSData, LogHead;

@interface SignedLogHead : SignedObjectHolder

@property (retain, nonatomic) NSData *logHead;
@property (readonly) LogHead *parsedLogHead;
@property BOOL gossip;

+ (id)signedTypeWithObject:(id)a0 verifier:(id)a1 dataStore:(id)a2;
+ (id)signedTypeWithObject:(id)a0;

- (unsigned long long)verifyWithError:(id *)a0;
- (id)copyManagedObject:(id *)a0;
- (id)createManagedObjectWithError:(id *)a0;
- (void)storeSignatureResult:(unsigned long long)a0 signatureError:(id *)a1;

@end
