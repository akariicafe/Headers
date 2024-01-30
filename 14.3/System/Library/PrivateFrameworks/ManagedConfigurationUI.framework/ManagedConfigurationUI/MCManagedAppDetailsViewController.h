@class MCUIProfile, LSApplicationProxy;

@interface MCManagedAppDetailsViewController : MCUITableViewController

@property (retain, nonatomic) MCUIProfile *UIProfile;
@property (retain, nonatomic) LSApplicationProxy *managedAppProxy;

- (void)_setup;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_profileChanged:(id)a0;
- (id)initWithUIProfile:(id)a0 managedApp:(id)a1;
- (id)initWithUIProfile:(id)a0 managedAppID:(id)a1;

@end
