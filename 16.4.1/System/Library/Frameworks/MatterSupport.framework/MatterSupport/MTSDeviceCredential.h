@class NSData;

@interface MTSDeviceCredential : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *certificationDeclaration;
@property (readonly, copy) NSData *deviceAttestationCertificate;
@property (readonly, copy) NSData *productAttestationIntermediateCertificate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithCertificationDeclaration:(id)a0 deviceAttestationCertificate:(id)a1 productAttestationIntermediateCertificate:(id)a2;

@end
