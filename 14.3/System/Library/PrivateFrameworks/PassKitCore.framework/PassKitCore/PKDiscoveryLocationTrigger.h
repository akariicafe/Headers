@interface PKDiscoveryLocationTrigger : PKDiscoveryTrigger <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double radius;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
