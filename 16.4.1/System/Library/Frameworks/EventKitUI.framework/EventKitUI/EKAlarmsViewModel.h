@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject {
    BOOL _canHaveLeaveNowAlarm;
    BOOL _hasLeaveNowAlarm;
    unsigned long long _locationStatus;
}

@property (retain, nonatomic) EKCalendarItem *calendarItem;
@property (retain, nonatomic) NSMutableArray *uiAlarms;
@property (nonatomic) BOOL needsUpdate;
@property (readonly, nonatomic) BOOL canHaveLeaveNowAlarm;
@property (readonly, nonatomic) BOOL hasLeaveNowAlarm;
@property (readonly, nonatomic) unsigned long long locationStatus;

+ (id)labelTextForIndex:(unsigned long long)a0;
+ (void)subscribeToDarwinNotifications;
+ (void)unsubscribeFromDarwinNotifications;
+ (id)_noneAlertTitle;

- (void)setNeedsUpdate;
- (id)_menuForAlarmAtIndex:(unsigned long long)a0 placeholder:(BOOL)a1 actionHandler:(id /* block */)a2;
- (id)menuForAlarmAtIndex:(unsigned long long)a0 actionHandler:(id /* block */)a1;
- (void)_updateAlarms;
- (void)updateIfNeeded;
- (void)_updateLeaveNowFlags;
- (id)placeholderMenuForAlarmAtIndex:(unsigned long long)a0;
- (BOOL)locationStatusMakesTTLAlarmDisabled;
- (id)_errorTitleForDisabledTTLAlarm;
- (id)initWithCalendarItem:(id)a0;
- (BOOL)showDefaultAlarm:(id)a0;
- (void)updatedUIAlarmFromUIAlarm:(id)a0 toUIAlarm:(id)a1 atIndex:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (void)reloadTTLLocationAuthorization:(id)a0;
- (id)presetAlarmsIntervals;
- (BOOL)_hasUIAlarmChangedFromUIAlarm:(id)a0 toUIAlarm:(id)a1;
- (id)init;
- (BOOL)isAlarmEffectivelyDisabled:(id)a0;
- (void).cxx_destruct;

@end
