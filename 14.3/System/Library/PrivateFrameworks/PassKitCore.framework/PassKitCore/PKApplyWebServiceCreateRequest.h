@class NSURL, PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceCreateRequest : PKApplyWebServiceRequest

@property (retain, nonatomic) NSURL *applyServiceURL;
@property (nonatomic) unsigned long long featureIdentifier;
@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
