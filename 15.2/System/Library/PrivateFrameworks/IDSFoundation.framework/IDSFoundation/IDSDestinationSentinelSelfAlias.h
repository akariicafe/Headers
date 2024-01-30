@interface IDSDestinationSentinelSelfAlias : IDSDestination

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
