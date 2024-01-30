@class NSData, MapHead;

@interface SignedMapHead : SignedObjectHolder

@property (retain, nonatomic) NSData *mapHead;
@property (readonly) MapHead *parsedMapHead;

+ (id)signedTypeWithObject:(id)a0 verifier:(id)a1 dataStore:(id)a2;
+ (id)signedTypeWithObject:(id)a0;

- (unsigned long long)verifyWithError:(id *)a0;
- (id)copyManagedObject:(id *)a0;
- (id)createManagedObjectWithError:(id *)a0;

@end
