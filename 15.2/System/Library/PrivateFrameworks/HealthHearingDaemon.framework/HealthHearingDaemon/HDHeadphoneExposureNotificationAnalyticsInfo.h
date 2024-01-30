@class NSDate;

@interface HDHeadphoneExposureNotificationAnalyticsInfo : NSObject {
    NSDate *_lastLockDate;
    NSDate *_lastNotificationDate;
}

- (void).cxx_destruct;
- (id)initWithLastLockDate:(id)a0 lastNotificationDate:(id)a1;
- (id)boundedIntegerForMinutesSinceLastUnlockWithNowDate:(id)a0;
- (id)boundedIntegerForTimeSinceLastNotificationWithNowDate:(id)a0;

@end
