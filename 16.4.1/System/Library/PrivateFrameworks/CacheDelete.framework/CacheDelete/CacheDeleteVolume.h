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

+ (id)validateVolumeAtPath:(id)a0;
+ (id)volumeWithMountpoint:(id)a0;
+ (id)volumeWithUUID:(id)a0;
+ (id)rootVolume;
+ (id)volumeWithPath:(id)a0;
+ (id)mountPointForUUID:(id)a0;
+ (long long)stateForPath:(id)a0;

- (unsigned long long)used;
- (BOOL)validate;
- (long long)state;
- (id)initWithPath:(id)a0;
- (id)initWithVolume:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (BOOL)freespaceIsStale:(unsigned long long)a0;
- (BOOL)containsPath:(id)a0;
- (unsigned long long)freespace;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)FSEventsUUID;
- (id)uuid;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)size;
- (unsigned long long)amountPurged;
- (BOOL)amountIsRational:(id)a0;
- (id)description;
- (unsigned long long)effective_size;
- (BOOL)mayContainPurgeableAmount:(id)a0 forService:(id)a1;
- (void).cxx_destruct;

@end
