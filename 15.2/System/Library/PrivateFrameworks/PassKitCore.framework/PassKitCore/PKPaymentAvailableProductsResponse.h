@class NSArray;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *availableProducts;

- (BOOL)supportsSecureCoding;
- (void).cxx_destruct;

@end
