@class NSArray, NSNumber;

@interface PKRetrieveMerchantTokensResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *merchantTokens;
@property (readonly, copy, nonatomic) NSNumber *totalMerchantTokens;
@property (readonly, copy, nonatomic) NSNumber *pageSize;
@property (readonly, copy, nonatomic) NSNumber *totalPages;
@property (readonly, copy, nonatomic) NSNumber *pageNumber;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithMerchantTokens:(id)a0 totalMerchantTokens:(id)a1 pageSize:(id)a2 totalPages:(id)a3 pageNumber:(id)a4;

@end
