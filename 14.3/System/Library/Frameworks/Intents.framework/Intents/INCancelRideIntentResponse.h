@class INCurrencyAmount, NSDateComponents;

@interface INCancelRideIntentResponse : INIntentResponse

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) INCurrencyAmount *cancellationFee;
@property (copy, nonatomic) NSDateComponents *cancellationFeeThreshold;

+ (BOOL)supportsSecureCoding;

- (long long)code;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
