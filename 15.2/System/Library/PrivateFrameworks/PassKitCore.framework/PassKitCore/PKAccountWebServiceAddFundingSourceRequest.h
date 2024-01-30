@class NSString, PKAccountPaymentFundingSource, NSURL, PKAccountWebServiceCertificatesResponse;

@interface PKAccountWebServiceAddFundingSourceRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource;
@property (retain, nonatomic) NSString *fundingSourceTermsIdentifier;
@property (retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
