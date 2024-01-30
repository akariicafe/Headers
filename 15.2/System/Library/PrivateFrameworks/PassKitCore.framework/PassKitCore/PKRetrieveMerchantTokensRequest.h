@class NSString, NSNumber, PKPaymentPass;

@interface PKRetrieveMerchantTokensRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) PKPaymentPass *pass;
@property (copy, nonatomic) NSString *merchantTokenId;
@property (copy, nonatomic) NSNumber *pageNumber;
@property (copy, nonatomic) NSNumber *pageSize;

- (id)_urlRequestWithServiceURL:(id)a0 deviceIdentifier:(id)a1 appleAccountInformation:(id)a2;
- (void).cxx_destruct;

@end
