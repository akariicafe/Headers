@class NSArray, EKAlarmsViewModel;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    BOOL _hasLeaveNowAlarm;
    BOOL _canHaveLeaveNowAlarm;
}

@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel;

- (void)_updateAlarms;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)ttlLocationStatusChanged:(id)a0;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (id)footerTitle;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)_alarmsMatchCalendarItem;
- (BOOL)_calendarItemHasLeaveNowAlarm;
- (BOOL)configureForCalendarConstraints:(id)a0;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (void)setCalendarItem:(id)a0 store:(id)a1;

@end
