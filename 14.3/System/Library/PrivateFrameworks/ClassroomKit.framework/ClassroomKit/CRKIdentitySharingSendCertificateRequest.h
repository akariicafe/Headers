@class NSSet, NSData;

@interface CRKIdentitySharingSendCertificateRequest : CATTaskRequest

@property (retain, nonatomic) NSSet *recipients;
@property (retain, nonatomic) NSData *activeCertificateData;
@property (retain, nonatomic) NSData *stagedCertificateData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
