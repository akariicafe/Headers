@class NSURL, NSString;

@interface PKAccountWebserviceCustomizePhysicalCardRequest : PKAccountWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *accountUserAltDSID;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
