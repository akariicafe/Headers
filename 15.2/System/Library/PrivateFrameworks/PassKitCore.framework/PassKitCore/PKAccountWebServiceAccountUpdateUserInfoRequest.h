@class NSString, CNContact, NSURL, PKAccountWebServiceCertificatesResponse;

@interface PKAccountWebServiceAccountUpdateUserInfoRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *ssn;
@property (retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
