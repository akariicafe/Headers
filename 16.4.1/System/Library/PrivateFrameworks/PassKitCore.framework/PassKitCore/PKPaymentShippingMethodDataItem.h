@class PKShippingMethod;

@interface PKPaymentShippingMethodDataItem : PKPaymentDataItem

@property (readonly, nonatomic) PKShippingMethod *shippingMethod;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;
- (long long)context;

@end
