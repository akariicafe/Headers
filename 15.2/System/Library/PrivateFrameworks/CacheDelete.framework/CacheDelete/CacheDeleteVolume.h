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

+ (id)volumeWithMountpoint:(id)a0;
+ (long long)stateForPath:(id)a0;
+ (id)mountPointForUUID:(id)a0;
+ (id)rootVolume;
+ (id)validateVolumeAtPath:(id)a0;
+ (id)volumeWithPath:(id)a0;

- (unsigned long long)amountPurged;
- (unsigned long long)freespace;
- (id)initWithPath:(id)a0;
- (BOOL)validate;
- (id)initWithVolume:(id)a0;
- (id)FSEventsUUID;
- (unsigned long long)size;
- (long long)state;
- (id)description;
- (BOOL)containsPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualTo:(id)a0;
- (id)uuid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)freespaceIsStale:(unsigned long long)a0;
- (unsigned long long)hash;

@end
