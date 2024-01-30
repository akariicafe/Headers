@class NSData;

@interface SKAPresenceMembershipKey : NSObject

@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *privateKey;
@property (readonly, nonatomic) NSData *privateKeyMaterial;
@property (readonly, nonatomic) NSData *publicKeyMaterial;

+ (id)logger;

- (BOOL)_generateKey;
- (BOOL)_generateKeyFromKeyData:(id)a0;
- (id)initWithNewKeyMaterial;
- (id)initWithPrivateKeyMaterial:(id)a0;
- (id)signPayload:(id)a0;

@end
