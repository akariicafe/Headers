@class PKPaymentDeviceMetadata, NSString, CNContact, NSURL, NSArray;

@interface PKAccountWebServiceAccountUpdateUserInfoRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *ssn;
@property (retain, nonatomic) NSString *encryptionVersion;
@property (copy, nonatomic) NSArray *certificates;
@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) NSString *odiAssessment;
@property (retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata;

- (id)_urlRequestWithAppleAccountInformation:(id)a0;
- (void).cxx_destruct;

@end
