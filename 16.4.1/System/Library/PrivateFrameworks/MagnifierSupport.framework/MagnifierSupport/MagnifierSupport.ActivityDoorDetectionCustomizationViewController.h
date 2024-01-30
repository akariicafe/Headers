@interface MagnifierSupport.ActivityDoorDetectionCustomizationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIColorPickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ availableDetectionFeedbacks;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ colorPickerController;
    void /* unknown type, empty encoding */ doorAttributesController;
    void /* unknown type, empty encoding */ magnifierModelsManger;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)colorPickerViewControllerDidSelectColor:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)didToggleBackTapSwitch:(id)a0;
- (void)didToggleDecorationsSwitch:(id)a0;
- (void)didToggleFeedbackSwitch:(id)a0;
- (void)toggleDoorDetectionSwitchChanged:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)loadView;

@end
