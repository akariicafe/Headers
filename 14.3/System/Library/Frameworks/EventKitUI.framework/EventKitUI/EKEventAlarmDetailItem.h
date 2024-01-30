@class NSArray, EKAlarmsViewModel, EKAlarmEditItemViewController;

@interface EKEventAlarmDetailItem : EKEventDetailItem {
    unsigned long long _disclosedSubitem;
    NSArray *_alarms;
    EKAlarmEditItemViewController *_currentEditViewController;
}

@property (retain, nonatomic) EKAlarmsViewModel *alarmsViewModel;

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)_alarmsAreCreatable;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (void)ttlLocationStatusChanged:(id)a0;
- (unsigned long long)numberOfSubitems;
- (void)setEvent:(id)a0 store:(id)a1;
- (BOOL)_alarmsAreEditable;
- (void)_updateAlarms;

@end
