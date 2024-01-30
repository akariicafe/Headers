@class PKPaymentRequest, AMSDelegatePurchaseRequest, ACAccount;

@interface CASPaymentSheetPresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSDelegatePurchaseRequest *delegatePurchaseRequest;
@property (retain, nonatomic) PKPaymentRequest *localPaymentRequest;
@property (retain, nonatomic) ACAccount *storeAccount;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
