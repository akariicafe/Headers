@class PKPaymentSetupProduct;

@interface PKApplyWebServiceAugmentedProductResponse : PKApplyWebServiceResponse {
    PKPaymentSetupProduct *_product;
}

@property (readonly, copy, nonatomic) PKPaymentSetupProduct *product;

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)_generateProduct;

@end
