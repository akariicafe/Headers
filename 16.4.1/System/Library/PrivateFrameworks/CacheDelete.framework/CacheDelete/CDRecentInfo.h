@class NSNumber, NSMutableDictionary, NSMutableSet;

@interface CDRecentInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSMutableDictionary *volumes;
@property (retain, nonatomic) NSMutableSet *pushingServices;
@property (retain, nonatomic) NSMutableSet *invalidVolumes;

+ (id)recentInfoForVolumes:(id)a0;
+ (id)fetchAllowedClassesSet;

- (BOOL)isEmpty;
- (void)invalidateForVolume:(id)a0;
- (id)copyInvalidsForVolume:(id)a0 atUrgency:(int)a1;
- (void)encodeWithCoder:(id)a0;
- (id)servicesForVolume:(id)a0;
- (BOOL)isStale;
- (BOOL)hasInvalids;
- (id)initWithCoder:(id)a0;
- (void)log;
- (BOOL)isInvalidForVolume:(id)a0;
- (id)bsdDiskForVolume:(id)a0;
- (BOOL)isStaleForVolume:(id)a0;
- (id)initWithVolumes:(id)a0;
- (BOOL)updateServiceInfoAmount:(id)a0 forService:(id)a1 onVolume:(id)a2 atUrgency:(int)a3 withTimestamp:(double)a4 nonPurgeableAmount:(id)a5 deductFromCurrentAmount:(BOOL)a6;
- (id)thresholdsForVolume:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_createNewRecentVolumeInfo;
- (id)_recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (id)_createNewRecentVolumeInfoWithName:(id)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (long long)recentStateForVolume:(id)a0;
- (id)description;
- (void)removeServiceInfo:(id)a0 forVolume:(id)a1;
- (BOOL)updateRecentState:(long long)a0 forVolume:(id)a1;
- (id)initWithRecentInfo:(id)a0;
- (BOOL)validateForVolume:(id)a0 andService:(id)a1 atUrgency:(int)a2;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (void).cxx_destruct;
- (void)removeServiceInfo:(id)a0;
- (id)copyPushingServices;

@end
