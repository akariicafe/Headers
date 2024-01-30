@interface IDSDestinationSentinelSelfAlias : IDSDestination

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)groupID;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
