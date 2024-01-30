@class HDHeadphoneAudioExposureBucketCollection, NSNumber;

@interface HDHeadphoneExposureStatisticsResult : NSObject

@property (readonly, nonatomic) HDHeadphoneAudioExposureBucketCollection *cache;
@property (readonly, nonatomic) BOOL eligbleForUserNotification;
@property (readonly, nonatomic) NSNumber *prunedCount;
@property (nonatomic) BOOL needsRebuildOnNextUnlock;

+ (id)resultWithCache:(id)a0 prunedCount:(id)a1;
+ (id)resultWithCache:(id)a0 eligbleForUserNotification:(BOOL)a1;
+ (id)resultForAppendedSamplesDuringStartup;

- (void).cxx_destruct;
- (id)copyWithEligbleForUserNotificationOverride:(BOOL)a0;
- (id)_initWithCache:(id)a0 eligbleForUserNotification:(BOOL)a1 prunedCount:(id)a2;

@end
