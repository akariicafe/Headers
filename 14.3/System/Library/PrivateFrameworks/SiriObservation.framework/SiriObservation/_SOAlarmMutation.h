@class NSString, NSUUID, NSURL, SOAlarm;

@interface _SOAlarmMutation : NSObject <SOAlarmMutating> {
    SOAlarm *_baseModel;
    NSUUID *_alarmID;
    NSURL *_alarmURL;
    NSString *_title;
    unsigned long long _hour;
    unsigned long long _minute;
    unsigned long long _repeatSchedule;
    BOOL _isEnabled;
    BOOL _isFiring;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAlarmID : 1; unsigned char hasAlarmURL : 1; unsigned char hasTitle : 1; unsigned char hasHour : 1; unsigned char hasMinute : 1; unsigned char hasRepeatSchedule : 1; unsigned char hasIsEnabled : 1; unsigned char hasIsFiring : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsEnabled:(BOOL)a0;
- (void)setMinute:(unsigned long long)a0;
- (void)setHour:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)generate;
- (void)setIsFiring:(BOOL)a0;
- (void)setAlarmID:(id)a0;
- (void)setTitle:(id)a0;
- (void)setRepeatSchedule:(unsigned long long)a0;
- (void)setAlarmURL:(id)a0;
- (id)initWithBaseModel:(id)a0;

@end
