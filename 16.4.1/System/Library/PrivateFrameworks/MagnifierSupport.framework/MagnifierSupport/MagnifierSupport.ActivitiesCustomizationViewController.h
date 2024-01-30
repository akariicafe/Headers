@interface MagnifierSupport.ActivitiesCustomizationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ activities;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ commitActivityButton;
    void /* unknown type, empty encoding */ activityNameOnBoardingController;
    void /* unknown type, empty encoding */ activityToBeDuped;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_commitAndDismiss;

@end
