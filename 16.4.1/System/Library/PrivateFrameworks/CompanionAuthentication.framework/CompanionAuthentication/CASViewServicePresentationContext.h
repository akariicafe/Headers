@class AMSDelegatePurchaseRequest, NSString, CASSystemAuthenticationRequest, ACAccount, CASWebRequest, PKPaymentRequest;

@interface CASViewServicePresentationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceName;
@property (retain, nonatomic) AMSDelegatePurchaseRequest *delegatePurchaseRequest;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) ACAccount *storeAccount;
@property (retain, nonatomic) CASSystemAuthenticationRequest *systemAuthenticationRequest;
@property (retain, nonatomic) CASWebRequest *webAuthenticationRequest;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
