@interface SleepHealthAppPlugin.SleepOptionsViewController : UITableViewController <HKSwitchTableViewCellDelegate, HKSPSleepStoreObserver> {
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ sleepScheduleProvider;
    void /* unknown type, empty encoding */ sleepScheduleSubscriber;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ isApplyingSnapshot;
}

- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepModeOnDidChange:(BOOL)a1;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
