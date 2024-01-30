@class NSMutableDictionary, PKShippingMethod, PKContact, NSData, PKPaymentToken, NSString;

@interface PKPayment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKContact *billingContact;
@property (retain, nonatomic) PKContact *shippingContact;
@property (retain, nonatomic) PKPaymentToken *token;
@property (retain, nonatomic) PKShippingMethod *shippingMethod;
@property (retain, nonatomic) NSData *credential;
@property (retain, nonatomic) NSMutableDictionary *authKitAuthenticationResults;
@property (nonatomic) long long biometricAuthorizationAttempts;
@property (copy, nonatomic) NSString *installmentAuthorizationToken;
@property (readonly, nonatomic) const void *billingAddress;
@property (readonly, nonatomic) const void *shippingAddress;

+ (long long)version;
+ (id)paymentWithProtobuf:(id)a0;

- (id)protobuf;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithToken:(id)a0;
- (id)dictionaryRepresentation;

@end
