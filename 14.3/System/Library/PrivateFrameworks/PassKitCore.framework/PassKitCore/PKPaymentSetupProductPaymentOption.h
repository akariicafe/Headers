@interface PKPaymentSetupProductPaymentOption : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) long long supportedProtocols;

- (id)initWithCoder:(id)a0;
- (id)initWithPaymentOptionDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
