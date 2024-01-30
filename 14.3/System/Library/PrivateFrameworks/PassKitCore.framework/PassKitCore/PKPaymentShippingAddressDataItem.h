@class NSString, NSAttributedString, CNContact;

@interface PKPaymentShippingAddressDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSAttributedString *formattedAddressString;
@property (readonly, nonatomic) CNContact *shippingAddress;
@property (readonly, nonatomic) NSString *shippingType;
@property (readonly, nonatomic) BOOL isShippingEditable;

+ (long long)dataType;

- (id)errors;
- (BOOL)isValidWithError:(id *)a0;
- (id)paymentContactFormatErrors;
- (id)_shippingName;

@end
