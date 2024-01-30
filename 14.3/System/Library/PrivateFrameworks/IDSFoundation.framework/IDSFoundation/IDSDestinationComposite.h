@class NSArray;

@interface IDSDestinationComposite : IDSDestination

@property (readonly, nonatomic) NSArray *destinations;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)groupID;
- (id)initWithDestinations:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
