@class NSString, NSURL, PKAccountVirtualCardEncryptionFields;

@interface PKAccountWebServiceCreateVirtualCardRequest : PKAccountWebServiceRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (nonatomic) long long type;
@property (retain, nonatomic) PKAccountVirtualCardEncryptionFields *encryptionFields;


- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
