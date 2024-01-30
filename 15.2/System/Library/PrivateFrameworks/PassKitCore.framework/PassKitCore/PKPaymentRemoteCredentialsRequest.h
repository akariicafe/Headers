@class NSString;

@interface PKPaymentRemoteCredentialsRequest : PKPaymentWebServiceRequest

@property (nonatomic) BOOL includeMetadata;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) long long credentialType;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;

@end
