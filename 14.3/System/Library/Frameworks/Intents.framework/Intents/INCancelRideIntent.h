@class NSString;

@interface INCancelRideIntent : INIntent

@property (readonly, copy, nonatomic) NSString *rideIdentifier;

+ (id)intentDescription;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRideIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
