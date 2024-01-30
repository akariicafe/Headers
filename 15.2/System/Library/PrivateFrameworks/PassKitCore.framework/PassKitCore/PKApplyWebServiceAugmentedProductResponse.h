@class PKPaymentSetupProduct;

@interface PKApplyWebServiceAugmentedProductResponse : PKApplyWebServiceResponse {
    PKPaymentSetupProduct *_product;
}

@property (readonly, copy, nonatomic) PKPaymentSetupProduct *product;

+ (BOOL)supportsSecureCoding;

- (id)_generateProduct;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
