@class NSArray, NSString, UITableView;
@protocol _CDUserContext;

@interface WFTimeOfDayTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTimeOffsetPickerViewControllerDelegate, WFTimeTriggerDayOfWeekCellDelegate>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (nonatomic) BOOL showingPicker;
@property (nonatomic) unsigned long long timeOfDayInterval;
@property (readonly, nonatomic) id<_CDUserContext> userContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)dismissKeyboard;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)dayOfWeekPickerCell:(id)a0 didChangeSelectedRecurrences:(id)a1;
- (id)initWithTrigger:(id)a0 triggerManager:(id)a1 mode:(unsigned long long)a2;
- (id)infoForSection:(long long)a0;
- (void)timeOffsetPickerViewController:(id)a0 didSelectOffset:(unsigned long long)a1;
- (void)timeOffsetPickerViewControllerDidCancel:(id)a0;
- (id)titleForIndexPath:(id)a0;
- (void)presentOffsetPickerViewControllerForEvent:(unsigned long long)a0;
- (void)updateTriggerTimeFromDate:(id)a0;
- (void)updateTriggerCalendarDayFromDate:(id)a0;
- (void)timePickerUpdated:(id)a0;
- (void)updateCalendarDayIfNeeded;
- (void)updateCalendarFooterText;
- (id)calendarFooterText;
- (id)allDaysOfWeek;
- (id)currentDayOfMonth;
- (id)dateComponentsFromTriggerDays;
- (id)currentSunriseTime;
- (id)currentSunsetTime;

@end
