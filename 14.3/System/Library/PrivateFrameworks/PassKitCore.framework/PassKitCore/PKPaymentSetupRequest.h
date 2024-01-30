@class NSArray, PKPaymentSetupConfiguration;

@interface PKPaymentSetupRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentSetupConfiguration *configuration;
@property (retain, nonatomic) NSArray *paymentSetupFeatures;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
