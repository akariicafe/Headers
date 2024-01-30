@class NSString, NSURL;

@interface PKAccountWebServiceBankLookupRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
