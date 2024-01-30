@class NSString, NSURL;

@interface PKAccountWebServiceCreatedZoneRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *zoneName;
@property (retain, nonatomic) NSURL *baseURL;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
