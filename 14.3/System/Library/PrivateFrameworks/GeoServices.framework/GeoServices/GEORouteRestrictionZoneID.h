@interface GEORouteRestrictionZoneID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long restrictionType;

- (id)init;
- (id)initWithGeoRestrictedZoneId:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
