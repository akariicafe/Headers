@class NSURL;

@interface PKAccountWebServiceAccountsRequest : PKAccountWebServiceRequest

@property (retain, nonatomic) NSURL *accountServicesURL;

- (id)_urlRequestWithServiceURL:(id)a0 AppleAccountInformation:(id)a1;
- (void).cxx_destruct;

@end
