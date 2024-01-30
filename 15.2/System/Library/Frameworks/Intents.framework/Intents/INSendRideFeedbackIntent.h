@class NSString, NSNumber, INCurrencyAmount;

@interface INSendRideFeedbackIntent : INIntent

@property (readonly, copy, nonatomic) NSString *rideIdentifier;
@property (copy, nonatomic) NSNumber *rating;
@property (copy, nonatomic) INCurrencyAmount *tip;

+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRideIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
