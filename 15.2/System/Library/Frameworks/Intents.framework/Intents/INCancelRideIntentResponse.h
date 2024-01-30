@class INCurrencyAmount, NSDateComponents;

@interface INCancelRideIntentResponse : INIntentResponse

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) INCurrencyAmount *cancellationFee;
@property (copy, nonatomic) NSDateComponents *cancellationFeeThreshold;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (long long)code;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithCoder:(id)a0;

@end
