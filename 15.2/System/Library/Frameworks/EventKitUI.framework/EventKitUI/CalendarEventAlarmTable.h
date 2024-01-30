@class NSString, NSIndexPath;
@protocol EKStyleProvider, CalendarEventAlarmTableDelegate;

@interface CalendarEventAlarmTable : UITableView <UITableViewDelegate, UITableViewDataSource> {
    long long _alarmIdentifier;
    NSString *_customString;
    BOOL _immediateAlarmCreation;
    NSIndexPath *_selectedItem;
}

@property (weak, nonatomic) id<CalendarEventAlarmTableDelegate> alarmTableDelegate;
@property (retain, nonatomic) id<EKStyleProvider> styleProvider;
@property (nonatomic) BOOL useAllDayAlarms;
@property (nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate;
@property (nonatomic) BOOL customSelected;
@property (nonatomic) BOOL shouldShowLeaveNowOption;
@property (nonatomic) BOOL leaveNowAlarmSelected;
@property (nonatomic) BOOL eventHasTravelTime;
@property (nonatomic) unsigned long long timeToLeaveLocationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_selectIndexPath:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)presetIdentifier;
- (id)_indexPathForPresetIdentifier:(long long)a0;
- (unsigned long long)countOfPresets;
- (long long)_presetIdentifierForRow:(long long)a0;
- (int)intervalForPresetIdentifier:(long long)a0;
- (BOOL)timeToLeaveAlarmIsEffectivelyDisabled;
- (void)setPresetIdentifier:(long long)a0;
- (void)setCustomString:(id)a0;
- (long long)presetIdentifierAtIndex:(unsigned long long)a0;

@end
