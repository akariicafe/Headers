@class NSData, NSString;

@interface SignedMutationTimestamp : SignedObjectHolder

@property (retain, nonatomic) NSData *mutation;
@property (retain) NSString *application;

+ (id)signedTypeWithObject:(id)a0 verifier:(id)a1 dataStore:(id)a2;
+ (id)signedTypeWithObject:(id)a0;

- (unsigned long long)verifyWithError:(id *)a0;
- (void).cxx_destruct;
- (id)parsedMutationWithError:(id *)a0;
- (id)copyManagedObjectWithError:(id *)a0;

@end
