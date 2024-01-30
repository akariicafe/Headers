@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceVirtualCardLegacyCredentialsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *virtualCardIdentifier;
@property (retain, nonatomic) PKAccountVirtualCardEncryptionFields *encryptionFields;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
