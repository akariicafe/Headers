@interface IDSDestinationDefaultPairedDevice : IDSDestination

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)groupID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToIDSDestinationDefaultPairedDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
