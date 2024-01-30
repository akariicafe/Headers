@class NSArray, EKAlarmsViewModel;

@interface EKCalendarItemAlarmEditItem : EKCalendarItemEditItem {
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    BOOL _userChangedAlarm;
    BOOL _hasLeaveNowAlarm;
    BOOL _canHaveLeaveNowAlarm;
}

@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel;

- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)_updateAlarms;
- (BOOL)editItemViewControllerSave:(id)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)ttlLocationStatusChanged:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfSubitems;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)configureForCalendarConstraints:(id)a0;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (BOOL)_calendarItemHasLeaveNowAlarm;
- (BOOL)_alarmsMatchCalendarItem;

@end
