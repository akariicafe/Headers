@class NSString;

@interface HFAnalyticsHomePodAlarmUpdatedEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *homePodAlarmID;
@property (nonatomic) BOOL alarmUpdatedSuccessfully;
@property (nonatomic) BOOL isMusicAlarm;
@property (nonatomic) BOOL hasCustomVolume;
@property (nonatomic) float customVolumeLevel;
@property (retain, nonatomic) NSString *processName;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
