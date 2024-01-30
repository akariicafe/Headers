@class NSArray, EKAlarmsViewModel, EKUIRecurrenceAlertController, NSMutableArray;

@interface EKEventAlarmDetailItem : EKEventDetailItem {
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    NSMutableArray *_alarmPopupMenus;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}

@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void)_updateAlarms;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)_createRealPopupMenuForIndex:(long long)a0 popupCell:(id)a1;
- (void)ttlLocationStatusChanged:(id)a0;
- (BOOL)_alarmsAreEditable;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (void)setEvent:(id)a0 store:(id)a1;
- (void)reset;
- (BOOL)_alarmsAreCreatable;

@end
