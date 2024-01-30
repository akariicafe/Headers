@class NSDecimalNumber;

@interface PKPaymentBalanceReminder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDecimalNumber *threshold;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithThreshold:(id)a0 isEnabled:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
