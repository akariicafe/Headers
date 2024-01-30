@class ENGroup;

@interface IDSDestinationEngram : IDSDestination

@property (readonly, retain, nonatomic) ENGroup *underlyingGroup;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)groupID;
- (id)initWithCoder:(id)a0;
- (id)initWithENGroup:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
