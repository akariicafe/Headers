@class NSString, NSURL;

@interface PKAccountWebServiceDeleteAccountUserRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;
@property (retain, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
