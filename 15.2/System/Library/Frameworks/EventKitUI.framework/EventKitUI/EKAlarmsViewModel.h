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

+ (void)subscribeToDarwinNotifications;
+ (id)labelTextForIndex:(unsigned long long)a0;
+ (void)unsubscribeFromDarwinNotifications;

- (void)_updateAlarms;
- (BOOL)_hasUIAlarmChangedFromUIAlarm:(id)a0 toUIAlarm:(id)a1;
- (void)updateIfNeeded;
- (id)createAlarmEditItemViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAlarmAtIndex:(unsigned long long)a1;
- (BOOL)isAlarmEffectivelyDisabled:(id)a0;
- (void)reloadTTLLocationAuthorization:(id)a0;
- (id)initWithCalendarItem:(id)a0;
- (void)setNeedsUpdate;
- (void)_updateLeaveNowFlags;
- (void)updatedUIAlarmFromUIAlarm:(id)a0 toUIAlarm:(id)a1 atIndex:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
