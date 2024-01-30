@class HDProfile, HAENotificationCenter;

@interface HDHeadphoneExposureNotificationCenter : NSObject {
    HDProfile *_profile;
    HAENotificationCenter *_notificationCenter;
}

- (id)initWithProfile:(id)a0;
- (void)_reportHeadphoneNotificationWithNowDate:(id)a0 eventDuration:(double)a1 exposureLevel:(double)a2 exposureDuration:(double)a3 hasPrunableData:(BOOL)a4 isDeviceLocked:(BOOL)a5 analyticsInfo:(id)a6;
- (void).cxx_destruct;
- (id)postSevenDayDoseNotification:(id)a0 nowDate:(id)a1 analyticsInfo:(id)a2 error:(id *)a3;

@end
