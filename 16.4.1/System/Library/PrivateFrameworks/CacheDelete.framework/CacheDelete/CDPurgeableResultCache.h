@class NSObject, CDRecentInfo;
@protocol OS_dispatch_queue;

@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>

@property (retain, nonatomic) CDRecentInfo *recentPurgeableResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedPurgeableResultsCache;
+ (id)fetchVolumeWithPath:(id)a0;

- (BOOL)isEmpty;
- (id)servicesForVolume:(id)a0;
- (id)initEmpty;
- (BOOL)isStale;
- (BOOL)hasInvalids;
- (void)keepUpToDate:(id)a0;
- (void)log;
- (BOOL)isInvalidForVolume:(id)a0;
- (id)_recentPurgeableTotals:(int)a0 validateResults:(BOOL)a1;
- (id)bsdDiskForVolume:(id)a0;
- (BOOL)isStaleForVolume:(id)a0;
- (void)invalidateAllForgettingPushers:(BOOL)a0;
- (id)thresholdsForVolume:(id)a0;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2;
- (void)absorbRecentInfo:(id)a0;
- (void)updateRecentVolumeInfo:(id)a0;
- (id)recentInfoForVolumes:(id)a0 atUrgency:(int)a1 validateResults:(BOOL)a2 targetVolume:(id)a3;
- (id)recentPurgeableTotals:(int)a0;
- (id)recentInfoForVolume:(id)a0 atUrgency:(int)a1;
- (long long)recentStateForVolume:(id)a0;
- (BOOL)hasSnapshotForVolume:(id)a0;
- (void).cxx_destruct;

@end
