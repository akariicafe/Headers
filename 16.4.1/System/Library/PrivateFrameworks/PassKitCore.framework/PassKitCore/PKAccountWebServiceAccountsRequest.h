@class NSURL;

@interface PKAccountWebServiceAccountsRequest : PKAccountWebServiceRequest

@property (retain, nonatomic) NSURL *accountServicesURL;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 AppleAccountInformation:(id)a1;

@end
