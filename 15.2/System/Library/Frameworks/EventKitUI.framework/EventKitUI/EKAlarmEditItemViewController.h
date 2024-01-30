@class EKUIAlarm, NSString, EKUIRecurrenceAlertController, CalendarEventAlarmTable, EKCalendar;

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate> {
    CalendarEventAlarmTable *_table;
    double _warningLabelWidth;
    BOOL _immediateAlarmCreation;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}

@property (retain, nonatomic) EKUIAlarm *alarm;
@property (retain, nonatomic) EKUIAlarm *previousAlarm;
@property (retain, nonatomic) EKCalendar *calendar;
@property (nonatomic) unsigned long long alarmIndex;
@property (nonatomic) BOOL allDay;
@property (nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate;
@property (nonatomic) BOOL shouldShowLeaveNowOption;
@property (nonatomic) BOOL eventHasTravelTime;
@property (nonatomic) unsigned long long timeToLeaveLocationStatus;
@property (nonatomic) long long presetIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_storeChanged:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableHeaderView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)resetBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleProvider:(id)a1;
- (BOOL)customSelected;
- (void)alarmTable:(id)a0 didSelectRowAtIndexPath:(id)a1 commitSelectionBlock:(id /* block */)a2;
- (void)setCustomString:(id)a0;
- (BOOL)displaysWarningLabel;

@end
