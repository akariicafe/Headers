@class NSString;

@interface CRKIdentitySharingRequestCertificateRequest : CATTaskRequest

@property (retain, nonatomic) NSString *recipient;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
