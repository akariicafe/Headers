@class NSArray, STDeviceBedtime, PSSpecifier, NSString, STUIUser;
@protocol STRootViewModelCoordinator, STDeviceBedtimeListControllerDelegate;

@interface STDeviceBedtimeListController : PSListController <STUIDateTimePickerCellDelegate>

@property (readonly) NSArray *orderedWeekdayIndexes;
@property (readonly) NSArray *orderedLocalizedWeekdayNames;
@property (retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier;
@property (retain, nonatomic) PSSpecifier *informativeTextGroupSpecifier;
@property (retain) PSSpecifier *everyDaySpecifier;
@property (retain) PSSpecifier *customizeDaysSpecifier;
@property (retain, nonatomic) PSSpecifier *startTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *endTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *startTimePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *endTimePickerSpecifier;
@property (retain) NSArray *weekdaySpecifiers;
@property (retain, nonatomic) PSSpecifier *selectedTimeSpecifier;
@property (retain, nonatomic) PSSpecifier *atBedtimeGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *atBedtimeSpecifier;
@property (weak, nonatomic) id<STDeviceBedtimeListControllerDelegate> delegate;
@property (retain, nonatomic) id<STRootViewModelCoordinator> coordinator;
@property (copy, nonatomic) STDeviceBedtime *bedtime;
@property (retain, nonatomic) STUIUser *affectedUser;
@property (nonatomic) BOOL canAskForMoreTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (id)init;
- (BOOL)canBeShownFromSuspendedState;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (id)timeFooterText;
- (void)_didEndEditingDailySchedule:(id)a0;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)a0;
- (void)_didFinishEditingBedtime;
- (void)setDeviceBedtimeEnabled:(id)a0 specifier:(id)a1;
- (id)deviceBedtimeEnabled:(id)a0;
- (id)_simpleStartTime:(id)a0;
- (id)_simpleEndTime:(id)a0;
- (id)_customScheduleTime:(id)a0;
- (void)_showCustomizeDailyScheduleListController:(id)a0;
- (id)atDowntimeFooterText;
- (void)setAskForMoreTime:(id)a0 specifier:(id)a1;
- (id)askForMoreTime:(id)a0;

@end
