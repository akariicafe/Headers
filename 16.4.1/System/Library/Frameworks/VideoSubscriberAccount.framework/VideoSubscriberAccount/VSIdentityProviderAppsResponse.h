@class NSArray;

@interface VSIdentityProviderAppsResponse : NSObject

@property (copy, nonatomic) NSArray *providerAppAdamIDs;
@property (copy, nonatomic) NSArray *channelMappings;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
