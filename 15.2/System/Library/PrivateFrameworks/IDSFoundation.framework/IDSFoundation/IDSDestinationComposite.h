@class NSArray;

@interface IDSDestinationComposite : IDSDestination

@property (readonly, nonatomic) NSArray *destinations;

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (void)encodeWithCoder:(id)a0;
- (id)destinationLightweightStatus;
- (id)description;
- (id)initWithDestinations:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
