@interface AppleMediaServices.ExpressCheckoutCard : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ fpanSuffix;
    void /* unknown type, empty encoding */ paymentNetwork;
    void /* unknown type, empty encoding */ passSerialNumber;
    void /* unknown type, empty encoding */ passTypeIdentifier;
    void /* unknown type, empty encoding */ applePayBrandName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
