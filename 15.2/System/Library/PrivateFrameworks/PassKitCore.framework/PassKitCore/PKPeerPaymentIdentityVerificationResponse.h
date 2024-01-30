@class NSString, PKPeerPaymentAccount, NSArray;

@interface PKPeerPaymentIdentityVerificationResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) BOOL complete;
@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSArray *requiredFieldsByPage;
@property (readonly, nonatomic) NSArray *acceptableDocuments;
@property (readonly, copy, nonatomic) NSArray *encryptionCertificates;
@property (readonly, copy, nonatomic) NSString *encryptionVersion;
@property (nonatomic) BOOL manuallyTriggered;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
