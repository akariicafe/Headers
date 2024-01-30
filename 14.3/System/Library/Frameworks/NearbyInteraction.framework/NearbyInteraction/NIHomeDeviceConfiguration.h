@class NSData, NSArray;

@interface NIHomeDeviceConfiguration : NIConfiguration

@property unsigned long long allowedDevices;
@property (copy) NSData *sessionKey;
@property (getter=isAnchor) BOOL anchor;
@property (copy) NSArray *monitoredRegions;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithAllowedDevices:(unsigned long long)a0 sessionKey:(id)a1 asAnchor:(BOOL)a2 regions:(id)a3;
- (id)initWithRegions:(id)a0;

@end
