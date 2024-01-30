@class NSData, NSArray;

@interface NIHomeDeviceConfiguration : NIConfiguration

@property long long antennaDiversityOverride;
@property unsigned long long allowedDevices;
@property (copy) NSData *sessionKey;
@property (getter=isAnchor) BOOL anchor;
@property (copy) NSArray *monitoredRegions;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (id)initWithAllowedDevices:(unsigned long long)a0 sessionKey:(id)a1 asAnchor:(BOOL)a2 regions:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRegions:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
