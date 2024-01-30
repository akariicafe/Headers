@class NSArray;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse {
    NSArray *_availableProducts;
}

@property (readonly, copy, nonatomic) NSArray *availableProducts;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (BOOL)supportsSecureCoding;
- (id)_generateProducts;

@end
