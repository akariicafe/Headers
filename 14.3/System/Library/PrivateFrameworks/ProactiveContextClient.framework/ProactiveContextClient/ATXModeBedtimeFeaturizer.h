@class NSString, MTAlarmManager, NSTimer, MTAlarm;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeBedtimeFeaturizer : NSObject <ATXModeFeaturizer> {
    MTAlarmManager *_alarmManager;
    MTAlarm *_sleepAlarm;
    NSTimer *_timer;
    int _significantTimeToken;
}

@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopListening;
- (void).cxx_destruct;
- (void)beginListening;
- (id)provideFeatures;
- (void)_fetchSleepAlarmIfNecessary;
- (void)_updateFeatures;
- (void)_scheduleTimerForAlarm:(id)a0;
- (void)_alarmsDidChange:(id)a0;

@end
