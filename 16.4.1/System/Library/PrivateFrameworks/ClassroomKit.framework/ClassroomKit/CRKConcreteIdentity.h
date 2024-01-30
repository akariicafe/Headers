@class NSString;
@protocol CRKPrivateKey, CRKCertificate;

@interface CRKConcreteIdentity : NSObject <CRKIdentity>

@property (readonly, nonatomic) id<CRKCertificate> certificate;
@property (readonly, nonatomic) id<CRKPrivateKey> privateKey;
@property (readonly, nonatomic) struct __SecIdentity { } *underlyingIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityWithCertificate:(id)a0 privateKey:(id)a1;
+ (id)identityWithConfiguration:(id)a0;

- (id)initWithIdentity:(struct __SecIdentity { } *)a0;
- (void)dealloc;

@end
