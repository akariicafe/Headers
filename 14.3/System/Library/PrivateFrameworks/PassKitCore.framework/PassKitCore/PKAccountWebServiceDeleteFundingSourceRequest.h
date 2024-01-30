@class NSString, NSURL;

@interface PKAccountWebServiceDeleteFundingSourceRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) NSString *fundingSourceIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
