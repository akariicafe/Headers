@class NSString;
@protocol CRKPrivateKey, CRKCertificate;

@interface CRKInMemoryIdentity : NSObject <CRKIdentity>

@property (readonly, nonatomic) id<CRKCertificate> certificate;
@property (readonly, nonatomic) id<CRKPrivateKey> privateKey;
@property (readonly, nonatomic) struct __SecIdentity { } *underlyingIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identityWithConfiguration:(id)a0 validityDateInterval:(id)a1;

- (void).cxx_destruct;
- (id)initWithCertificate:(id)a0 privateKey:(id)a1;

@end
