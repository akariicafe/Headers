@class NSString, NSDecimalNumber;

@interface PKPeerPaymentRequestTokenRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *recipientIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSString *senderAddress;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *recipientPhoneOrEmail;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2 deviceScore:(id)a3 odiAssessment:(id)a4 deviceMetadata:(id)a5;

@end
