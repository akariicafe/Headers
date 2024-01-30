@interface PKPaymentCommutePlanReminder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timeInterval;

- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTimeInterval:(double)a0;
- (void)encodeWithCoder:(id)a0;

@end
