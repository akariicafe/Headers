@class NSDate, NSString, NSURL, NSArray, NSMutableDictionary, NSDictionary, NSNumber;
@protocol AlarmDelegate;

@interface Alarm : NSObject {
    BOOL _pretendActiveIfProxy;
    NSMutableDictionary *_settings;
    NSArray *_repeatDays;
    NSString *_vibrationID;
}

@property (retain, nonatomic) NSString *alarmID;
@property (retain, nonatomic) NSURL *alarmIDURL;
@property (readonly, nonatomic) Alarm *editingProxy;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isSnoozed) BOOL snoozed;
@property (nonatomic) BOOL isSleepAlarm;
@property (copy, nonatomic) NSNumber *bedtimeReminderMinutes;
@property (nonatomic) unsigned int hour;
@property (nonatomic) unsigned int minute;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;
@property (readonly, nonatomic) BOOL repeats;
@property (readonly, nonatomic) NSArray *repeatDays;
@property (nonatomic) unsigned int daySetting;
@property (nonatomic) BOOL allowsSnooze;
@property (readonly, nonatomic) long long soundType;
@property (readonly, nonatomic) NSString *sound;
@property (copy, nonatomic) NSNumber *soundVolume;
@property (readonly, nonatomic) NSString *uiTitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *vibrationID;
@property (readonly, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) unsigned int revision;
@property (weak, nonatomic) id<AlarmDelegate> delegate;
@property (nonatomic) BOOL forceActiveForMigration;

+ (BOOL)verifyIdSetting:(id)a0 withMessageList:(id)a1;
+ (BOOL)verifyHourSetting:(id)a0 withMessageList:(id)a1;
+ (BOOL)verifyMinuteSetting:(id)a0 withMessageList:(id)a1;
+ (BOOL)verifyDaySetting:(id)a0 withMessageList:(id)a1;
+ (id /* block */)timeComparator;
+ (BOOL)verifySettings:(id)a0;

- (id)initWithSettings:(id)a0;
- (void)applySettings:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)setSound:(id)a0 ofType:(long long)a1;
- (void)dropEditingProxy;
- (void)prepareEditingProxy;
- (void)applyChangesFromEditingProxy;
- (id)nowDateForOffsetCalculation;
- (id)timeZoneForOffsetCalculation;
- (id)_newBaseDateComponentsForDay:(long long)a0;
- (void)refreshActiveState;
- (void)markModified;
- (long long)compareTime:(id)a0;
- (id)alarmSoundIdentifier;
- (long long)alarmSoundType;
- (void)setAlarmSoundIdentifier:(id)a0 ofType:(long long)a1;
- (id)alarmSoundVolume;
- (void)setAlarmSoundVolume:(id)a0;

@end
