@class NSURL;

@interface PKAccountWebServiceCertificatesRequest : PKAccountWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long destination;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
