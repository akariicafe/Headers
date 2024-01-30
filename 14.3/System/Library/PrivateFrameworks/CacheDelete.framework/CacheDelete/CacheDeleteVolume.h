@class NSString, NSDictionary;

@interface CacheDeleteVolume : NSObject

@property (readonly) BOOL isRoot;
@property (readonly, nonatomic) NSString *fsType;
@property (readonly, nonatomic) NSString *mountPoint;
@property (readonly) unsigned long long initialFreespace;
@property (readonly, nonatomic) NSDictionary *thresholds;
@property (readonly, nonatomic) long long state;
@property (readonly) int dev;
@property (readonly) unsigned int block_size;
@property (readonly, nonatomic) NSString *bsdName;

+ (id)rootVolume;
+ (id)mountPointForUUID:(id)a0;
+ (id)volumeWithMountpoint:(id)a0;
+ (long long)stateForPath:(id)a0;
+ (id)validateVolumeAtPath:(id)a0;
+ (id)volumeWithPath:(id)a0;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVolume:(id)a0;
- (BOOL)validate;
- (unsigned long long)size;
- (BOOL)isEqualTo:(id)a0;
- (unsigned long long)hash;
- (id)uuid;
- (id)description;
- (id)FSEventsUUID;
- (unsigned long long)amountPurged;
- (BOOL)isEqual:(id)a0;
- (long long)state;
- (unsigned long long)freespace;

@end
