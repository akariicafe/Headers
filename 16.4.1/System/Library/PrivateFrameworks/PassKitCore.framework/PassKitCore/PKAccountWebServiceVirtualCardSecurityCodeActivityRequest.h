@class NSString, NSURL, NSDate;

@interface PKAccountWebServiceVirtualCardSecurityCodeActivityRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *virtualCardIdentifier;
@property (copy, nonatomic) NSString *securityCodeIdentifier;
@property (nonatomic) long long action;
@property (copy, nonatomic) NSDate *timestamp;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
