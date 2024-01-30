@class PSSpecifier, NSString, STBlueprintScheduleCustomDayItem, NSDateComponents;

@interface STCustomizeDailyScheduleListController : PSListController <STUIDateTimePickerCellDelegate>

@property (getter=isWeekdayEnabled) BOOL weekdayEnabled;
@property (copy) STBlueprintScheduleCustomDayItem *dailySchedule;
@property (readonly) unsigned long long weekdayIndex;
@property (readonly, copy) NSDateComponents *minimumStartTime;
@property (readonly) PSSpecifier *dailyScheduleGroupSpecifier;
@property (readonly) PSSpecifier *startTimeSpecifier;
@property (readonly) PSSpecifier *startTimePickerSpecifier;
@property (readonly) PSSpecifier *endTimeSpecifier;
@property (readonly) PSSpecifier *endTimePickerSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (BOOL)canBeShownFromSuspendedState;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (id)_startTime:(id)a0;
- (id)_endTime:(id)a0;
- (void)_didEndEditingDailySchedule:(BOOL)a0;
- (void)_setWeekdayEnabled:(id)a0 specifier:(id)a1;
- (id)_getWeekdayEnabled:(id)a0;
- (void)_updateTimeSpecifierDetailTextLabelColors:(BOOL)a0 selectedSpecifier:(id)a1 unselectedSpecifier:(id)a2;
- (id)initWithDailySchedule:(id)a0 weekdayIndex:(unsigned long long)a1 weekdayName:(id)a2 minimumStartTime:(id)a3;

@end
