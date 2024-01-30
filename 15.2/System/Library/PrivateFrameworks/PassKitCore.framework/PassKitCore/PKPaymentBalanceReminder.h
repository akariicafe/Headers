@class NSDecimalNumber;

@interface PKPaymentBalanceReminder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDecimalNumber *threshold;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithThreshold:(id)a0 isEnabled:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
