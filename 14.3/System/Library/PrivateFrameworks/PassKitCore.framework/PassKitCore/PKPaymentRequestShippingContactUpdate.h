@class NSArray;

@interface PKPaymentRequestShippingContactUpdate : PKPaymentRequestUpdate <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *shippingMethods;
@property (copy, nonatomic) NSArray *errors;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 paymentSummaryItems:(id)a1;
- (id)initWithStatus:(long long)a0 errors:(id)a1 paymentSummaryItems:(id)a2 shippingMethods:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)initWithErrors:(id)a0 paymentSummaryItems:(id)a1 shippingMethods:(id)a2;
- (id)initWithPaymentSummaryItems:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
