@class INCurrencyAmount, NSDateComponents;

@interface INCancelRideIntentResponse : INIntentResponse

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) INCurrencyAmount *cancellationFee;
@property (copy, nonatomic) NSDateComponents *cancellationFeeThreshold;

+ (BOOL)supportsSecureCoding;

- (id)initWithBackingStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)code;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
