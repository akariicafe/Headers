@class NSData, NSString;

@interface CRKConcretePrivateKey : NSObject <CRKPrivateKey>

@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *underlyingPrivateKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)privateKeyWithData:(id)a0;

- (void)dealloc;
- (id)initWithPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;

@end
