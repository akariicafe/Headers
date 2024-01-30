@class UISwitch, EKRecurrenceMonthChooserController, EKRecurrenceOrdinalChooserController, NSDate, EKRecurrenceMonthlyChooserController, UITableView, NSTimeZone, EKRecurrenceWeekdayChooserController, NSString, EKUIPopupTableViewCell, EKRecurrenceChooserController, EKRecurrenceRule, UITableViewCell, UIPickerView;

@interface EKUICustomRecurrenceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, EKRecurrenceChooserControllerDelegate, UITextFieldDelegate, UIPickerViewDataSource, UIPickerViewDelegate, EKUIManagedViewController> {
    long long _cachedFrequency;
    long long _cachedInterval;
    EKRecurrenceRule *_cachedRecurrenceRule;
    BOOL _showingIntervalPicker;
    EKUIPopupTableViewCell *_frequencySummaryCell;
    UITableViewCell *_intervalSummaryCell;
    UIPickerView *_intervalPicker;
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

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)resetBackgroundColor;
- (BOOL)canManagePresentationStyle;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)wantsManagement;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (id)recurrenceRule;
- (void)setRecurrenceRule:(id)a0;
- (void)_updateSummaryLabel;
- (id)_chooserForFrequency:(long long)a0;
- (void)_createChoosersAndControls;
- (BOOL)_disallowsRecurrenceInterval;
- (void)_frequencyPickerViewUpdated;
- (long long)_numberOfRowsForSection:(long long)a0;
- (void)_refreshCacheAndPickers;
- (void)_setShowingIntervalPicker:(BOOL)a0;
- (id)_stringForFrequency:(long long)a0;
- (id)_stringForFrequency:(long long)a0 interval:(long long)a1;
- (long long)_tagForIndexPath:(id)a0;
- (void)_toggleInlineSpinnerForTag:(long long)a0;
- (void)_updateCustomPickerView;
- (void)_updateFrequencyRows;
- (void)_updateRecurrenceRule;
- (void)_updateTableSectionsFromFrequency:(long long)a0 toFrequency:(long long)a1;
- (void)_yearOrdinalSwitchChanged:(id)a0;
- (struct CGSize { double x0; double x1; })calculatePreferredContentSize;
- (BOOL)canRequirePushOrPresentation;
- (id)frequencyPopupMenu;
- (id)initWithStartDate:(id)a0 timeZone:(id)a1 clearBackground:(BOOL)a2;
- (BOOL)prefersPushForSizeClass:(long long)a0;
- (void)recurrenceChooser:(id)a0 wantsRowReload:(long long)a1;
- (void)recurrenceChooserUpdated:(id)a0;
- (void)recurrenceChooserWantsReload:(id)a0;
- (void)setRecurrenceRule:(id)a0 shouldUpdatePickers:(BOOL)a1;

@end
