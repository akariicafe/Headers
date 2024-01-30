@class NSString, NSURL;

@interface CMSExtensionQueuesContentProtectionEndpointConfiguration : CMSExtensionEndpointConfiguration

@property (retain, nonatomic) NSString *keySystemIdentifier;
@property (retain, nonatomic) NSURL *fairPlayKeySystemCertificateUrl;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0 endpoint:(id)a1 baseURL:(id)a2 groupHeaders:(id)a3;

@end
