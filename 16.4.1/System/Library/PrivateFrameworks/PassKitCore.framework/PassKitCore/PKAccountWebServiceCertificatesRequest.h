@class NSURL;

@interface PKAccountWebServiceCertificatesRequest : PKAccountWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) unsigned long long destination;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
