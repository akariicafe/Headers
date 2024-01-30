@class NSString, NSDictionary, NSData, PKContact;

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *quoteIdentifier;
@property (copy, nonatomic) NSData *paymentData;
@property (copy, nonatomic) NSDictionary *certificates;
@property (copy, nonatomic) NSString *recipientPhoneOrEmail;
@property (retain, nonatomic) PKContact *contact;
@property (retain, nonatomic) NSString *routingNumber;
@property (retain, nonatomic) NSString *accountNumber;
@property (copy, nonatomic) NSString *pushToken;
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature;

+ (id)requestWithAuthorizedPeerPaymentQuote:(id)a0;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2 deviceScore:(id)a3 deviceMetadata:(id)a4;

@end
