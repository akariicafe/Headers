@class NSDictionary, TKClientTokenObject;

@interface SecCTKKey : NSObject <NSCopying>

@property (retain, nonatomic) TKClientTokenObject *tokenObject;
@property (readonly, nonatomic) NSDictionary *keychainAttributes;
@property (retain, nonatomic) NSDictionary *sessionParameters;

+ (id)fromKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromKey:(id)a0;
- (id)initWithAttributes:(id)a0 error:(id *)a1;
- (id)performOperation:(long long)a0 data:(id)a1 algorithms:(id)a2 parameters:(id)a3 error:(id *)a4;

@end
