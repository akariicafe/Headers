@class NSString;

@interface HMDMutableLegacyCloudZoneConfiguration : HMDLegacyCloudZoneConfiguration <NSMutableCopying>

@property (copy) NSString *rootRecordName;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
