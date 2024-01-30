@class NSSet;

@interface PKPaymentSendOwnershipTokensRequest : PKPaymentWebServiceRequest

@property (nonatomic) unsigned long long reason;
@property (retain, nonatomic) NSSet *passOwnershipTokens;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 deviceMetadata:(id)a2 appleAccountInformation:(id)a3;

@end
