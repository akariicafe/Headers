@class NSObject, NSDate;
@protocol OS_dispatch_queue, CAMStorageControllerDelegate;

@interface CAMStorageController : NSObject

@property (nonatomic) long long _cachedVeryLowDiskThreshold;
@property (nonatomic) long long _cachedLowDiskThreshold;
@property (nonatomic) long long _cachedLegacyMGDiskThreshold;
@property (retain, nonatomic) NSDate *_lastPurgeRequestUpdateTime;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_cacheDeleteQueryQueue;
@property (nonatomic) struct CacheDeleteToken { } *_queryQueue_currentToken;
@property (weak, nonatomic) id<CAMStorageControllerDelegate> delegate;

- (long long)_preferredMinimumBytesForConfiguration:(id)a0;
- (long long)_preferredMinimumBytesForVideoConfiguration:(long long)a0 encodingBehavior:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (long long)_absoluteMinimumBytesForMode:(long long)a0;
- (void)_queryQueue_aggregateLowDiskEventWithIdentifier:(id)a0;
- (void)_legacyDiskSpaceDidBecomeLowNotification;
- (void)_notifyDelegate;
- (void)reportLowDiskEventWithIdentifier:(id)a0;
- (void)_statMountPoint:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (void)_updatePurgeRequestStateForConfiguration:(id)a0 totalFreeBytes:(long long)a1;
- (void)_queryQueue_updatePurgeRequestStateForTotalFreeBytes:(long long)a0 preferredFreeBytes:(long long)a1;
- (BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)a0 allowPurging:(BOOL)a1;
- (id)_pathForStorageMountPoint;
- (long long)_totalFreeBytes;
- (void)_loadFreeDiskThresholds;

@end
