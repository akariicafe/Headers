@class SFRevocationPolicy, SFTrustPolicy, NSArray;

@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding> {
    id _trustEvaluatorInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SFTrustPolicy *trustPolicy;
@property (copy, nonatomic) SFRevocationPolicy *revocationPolicy;
@property (copy, nonatomic) NSArray *applicationAnchorCertificates;
@property (nonatomic) BOOL allowCertificateFetching;
@property (nonatomic) BOOL trustSystemAnchorCertificates;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTrustPolicy:(id)a0;
- (id)initWithTrustPolicy:(id)a0 revocationPolicy:(id)a1;
- (id)initWithTrustPolicy:(id)a0 revocationPolicy:(id)a1 applicationAnchorCertificates:(id)a2 allowCertificateFetching:(BOOL)a3 trustSystemAnchorCertificates:(BOOL)a4;
- (void)evaluateCertificateChain:(id)a0 forDate:(id)a1 resultHandler:(id /* block */)a2;

@end
