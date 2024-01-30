@class NSString, PKSecureElementPass, NSNumber;

@interface PKRetrieveMerchantTokensRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKSecureElementPass *pass;
@property (copy, nonatomic) NSString *merchantTokenId;
@property (copy, nonatomic) NSNumber *pageNumber;
@property (copy, nonatomic) NSNumber *pageSize;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;

@end
