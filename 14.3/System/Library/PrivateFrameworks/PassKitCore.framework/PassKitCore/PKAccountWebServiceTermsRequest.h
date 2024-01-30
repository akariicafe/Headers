@class NSString, NSURL;

@interface PKAccountWebServiceTermsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (nonatomic) BOOL termsAccepted;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
