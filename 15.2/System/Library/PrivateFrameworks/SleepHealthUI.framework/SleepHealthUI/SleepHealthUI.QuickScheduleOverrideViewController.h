@interface SleepHealthUI.QuickScheduleOverrideViewController : UITableViewController <SleepHealthUI.SleepScheduleComponentsEditViewHandling, SleepHealthUI.ScheduleOccurrenceAlarmVolumeTableViewCellHandler, HKSwitchTableViewCellDelegate, TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ alarmPreviewPlayer;
    void /* unknown type, empty encoding */ alarmConfigurationObserver;
    void /* unknown type, empty encoding */ modelEditObserver;
    void /* unknown type, empty encoding */ significantTimeChangeObserver;
    void /* unknown type, empty encoding */ eventRecordChangeObserver;
    void /* unknown type, empty encoding */ scheduleChangeObserver;
    void /* unknown type, empty encoding */ sleepDurationGoalObserver;
    void /* unknown type, empty encoding */ validScheduleRangeObserver;
    void /* unknown type, empty encoding */ sleepScheduleProvider;
    void /* unknown type, empty encoding */ modelHasChanged;
    void /* unknown type, empty encoding */ tonePickerStyleProvider;
    void /* unknown type, empty encoding */ vibrationPickerStyleProvider;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSource;
}

- (void)handleSignificantTimeChange;
- (void)cancelButtonPressed;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (void)sleepScheduleComponentsEditViewEditingDidChange:(id)a0;
- (void)sleepScheduleComponentsEditViewEditingDidEnd:(id)a0;
- (void)saveButtonPressed;
- (void)scheduleOccurrenceAlarmVolumeEditingDidEnd:(id)a0;
- (void)tonePickerViewController:(id)a0 selectedToneWithIdentifier:(id)a1;
- (void)tonePickerViewController:(id)a0 willPresentVibrationPickerViewController:(id)a1;
- (void)tonePickerViewController:(id)a0 didDismissVibrationPickerViewController:(id)a1;
- (void)vibrationPickerViewController:(id)a0 selectedVibrationWithIdentifier:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
