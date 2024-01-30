@class NSString;

@interface HMDLegacyCloudZoneConfiguration : HMBCloudZoneConfiguration <NSMutableCopying>

@property (copy) NSString *rootRecordName;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
