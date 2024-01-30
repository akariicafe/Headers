@class NSString;

@interface PKPeerPaymentRecipientRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *recipientAddress;
@property (copy, nonatomic) NSString *senderAddress;
@property (nonatomic) unsigned long long recipientAddressSource;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1 deviceIdentifier:(id)a2;

@end
