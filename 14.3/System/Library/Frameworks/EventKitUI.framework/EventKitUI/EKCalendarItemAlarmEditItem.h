@class NSArray, EKAlarmsViewModel;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    BOOL _userChangedAlarm;
    BOOL _hasLeaveNowAlarm;
    BOOL _canHaveLeaveNowAlarm;
}

@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void)refreshFromCalendarItemAndStore;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (void)ttlLocationStatusChanged:(id)a0;
- (BOOL)configureForCalendarConstraints:(id)a0;
- (BOOL)_calendarItemHasLeaveNowAlarm;
- (BOOL)_alarmsMatchCalendarItem;
- (unsigned long long)numberOfSubitems;
- (void)_updateAlarms;

@end
