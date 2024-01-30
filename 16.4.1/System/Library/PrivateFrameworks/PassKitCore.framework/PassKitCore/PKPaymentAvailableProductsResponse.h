@class NSArray, NSDate;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSArray *availableProducts;
@property (readonly, nonatomic) NSDate *expiry;

- (BOOL)supportsSecureCoding;
- (void).cxx_destruct;

@end
