@class NSSet, NSData;

@interface CRKIdentitySharingSendCertificateRequest : CATTaskRequest

@property (retain, nonatomic) NSSet *recipients;
@property (retain, nonatomic) NSData *activeCertificateData;
@property (retain, nonatomic) NSData *stagedCertificateData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
