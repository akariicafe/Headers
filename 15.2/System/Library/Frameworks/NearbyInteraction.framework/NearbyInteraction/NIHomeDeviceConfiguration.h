@class NSData, NSArray;

@interface NIHomeDeviceConfiguration : NIConfiguration

@property unsigned long long allowedDevices;
@property (copy) NSData *sessionKey;
@property (getter=isAnchor) BOOL anchor;
@property (copy) NSArray *monitoredRegions;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)descriptionInternal;
- (id)initWithAllowedDevices:(unsigned long long)a0 sessionKey:(id)a1 asAnchor:(BOOL)a2 regions:(id)a3;
- (id)initWithRegions:(id)a0;

@end
