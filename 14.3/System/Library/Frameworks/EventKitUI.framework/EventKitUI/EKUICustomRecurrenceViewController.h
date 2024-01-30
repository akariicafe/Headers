@class UISwitch, EKRecurrenceMonthChooserController, EKRecurrenceOrdinalChooserController, NSDate, EKRecurrenceMonthlyChooserController, UITableView, NSTimeZone, EKRecurrenceWeekdayChooserController, NSString, EKUICustomRecurrenceIntervalViewController, EKRecurrenceChooserController, EKRecurrenceRule, UITableViewCell, UIPickerView;

@interface EKUICustomRecurrenceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource, EKRecurrenceChooserControllerDelegate> {
    long long _cachedFrequency;
    long long _cachedInterval;
    EKRecurrenceRule *_cachedRecurrenceRule;
    BOOL _showingFrequencyPicker;
    BOOL _showingIntervalPicker;
    UITableViewCell *_frequencySummaryCell;
    UITableViewCell *_intervalSummaryCell;
    BOOL _useClearBackground;
}

@property (copy) id /* block */ completionBlock;
@property (retain) UITableView *tableView;
@property (weak) EKRecurrenceChooserController *currentChooser;
@property (retain) EKRecurrenceWeekdayChooserController *weeklyChooser;
@property (retain) EKRecurrenceMonthlyChooserController *monthlyChooser;
@property (retain) EKRecurrenceMonthChooserController *yearlyChooser;
@property (retain) EKRecurrenceOrdinalChooserController *yearlyOrdinalChooser;
@property (retain) NSDate *startDate;
@property (retain) NSTimeZone *timeZone;
@property (retain) UIPickerView *frequencyPickerView;
@property (retain) EKUICustomRecurrenceIntervalViewController *intervalPickerViewController;
@property (retain) UISwitch *yearOrdinalSwitch;
@property (copy) NSString *recurrenceSummaryString;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;
@property BOOL prohibitsYearlyRecurrenceInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)isRecurrenceRuleOrdinal:(id)a0;

- (id)recurrenceRule;
- (void)setRecurrenceRule:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_createChoosersAndControls;
- (struct CGSize { double x0; double x1; })calculatePreferredContentSize;
- (void)_yearOrdinalSwitchChanged:(id)a0;
- (void)_frequencyPickerViewUpdated;
- (long long)_numberOfRowsForSection:(long long)a0;
- (long long)_tagForIndexPath:(id)a0;
- (id)_stringForFrequency:(long long)a0;
- (id)_stringForFrequency:(long long)a0 interval:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_toggleInlineSpinnerForTag:(long long)a0;
- (void)_updateIntervalPicker;
- (void)_updateRecurrenceRule;
- (void)_collapseAllPickers;
- (void)setRecurrenceRule:(id)a0 shouldUpdatePickers:(BOOL)a1;
- (void)_refreshCacheAndPickers;
- (void)_updateCustomPickerView;
- (id)_chooserForFrequency:(long long)a0;
- (void)_updateTableSectionsFromFrequency:(long long)a0 toFrequency:(long long)a1;
- (void)_updateFrequencyRows;
- (void)_setShowingFrequencyPicker:(BOOL)a0;
- (void)_setShowingIntervalPicker:(BOOL)a0;
- (void)recurrenceChooserWantsReload:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)recurrenceChooser:(id)a0 wantsRowReload:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)_updateSummaryLabel;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)recurrenceChooserUpdated:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithStartDate:(id)a0 timeZone:(id)a1 clearBackground:(BOOL)a2;

@end
