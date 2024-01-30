@class NSMutableArray, HDHeadphoneDoseMetadataStore, HDProfile, NSObject, HDHeadphoneAudioExposureBucketCollection;
@protocol OS_dispatch_queue;

@interface HDHeadphoneAudioExposureStatisticsCalculator : NSObject {
    HDProfile *_profile;
    HDHeadphoneDoseMetadataStore *_keyValueStore;
    NSObject<OS_dispatch_queue> *_queue;
    HDHeadphoneAudioExposureBucketCollection *_memoryCache;
    NSMutableArray *_pendingSamples;
}

@property (copy, nonatomic) id /* block */ unitTesting_didUpdatePreviousSevenDayNotificationFireDate;
@property (readonly, nonatomic) BOOL needsRebuild;
@property (readonly, nonatomic, getter=isSetup) BOOL setup;

- (id)_setupWithAssertion:(id)a0 error:(id *)a1;
- (id)updateWithNotifications:(id)a0 assertion:(id)a1 error:(id *)a2;
- (id)unitTesting_snapshotBuckets;
- (void)unitTesting_clearNeedsRebuild;
- (void)_setNeedsRebuild:(BOOL)a0;
- (id)_loadCacheWithError:(id *)a0;
- (id)_initWithProfile:(id)a0 keyValueStore:(id)a1 daemonDidBecomeReadyHandler:(id /* block */)a2;
- (id)_updateWithExposure:(id)a0 replaying:(BOOL)a1 assertion:(id)a2 error:(id *)a3;
- (id)rebuildWithAssertion:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 keyValueStore:(id)a1;
- (id)unitTesting_pendingSamples;
- (id)_loadBucketsFromProfile:(id)a0 needsRebuild:(BOOL *)a1 error:(id *)a2;
- (id)_updateWithExposure:(id)a0 replaying:(BOOL)a1 error:(id *)a2;
- (id)pruneWithNowDate:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
- (void)setNeedsRebuild;
- (id)updateWithExposure:(id)a0 assertion:(id)a1 error:(id *)a2;
- (id)_rebuildWithAssertion:(id)a0 allowInitialQueriesToFail:(BOOL)a1 resetDoseToZero:(BOOL)a2 error:(id *)a3;

@end
