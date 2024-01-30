@interface AMSExpressCheckoutPaymentChoices : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ details;
    void /* unknown type, empty encoding */ useApplePayButtonTitle;
    void /* unknown type, empty encoding */ useApplePayButtonEnum;
    void /* unknown type, empty encoding */ useDifferentPaymentMethodButtonTitle;
    void /* unknown type, empty encoding */ eligibleCards;
    void /* unknown type, empty encoding */ managePaymentsParams;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) long long cardsCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
