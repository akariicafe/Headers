@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDDatabaseZoneManagerConfiguration : HMFObject <NSCopying, NSMutableCopying>

@property (getter=isZoneOwner) BOOL zoneOwner;
@property BOOL shouldCreateZone;
@property (copy) NSSet *externalRecordTypesForSubscriptions;
@property (copy) HMDHomeKitVersion *minimumHomeKitVersion;
@property (copy) NSSet *requiredSupportedFeatures;
@property (copy) HMBCloudZoneConfiguration *cloudZoneConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
