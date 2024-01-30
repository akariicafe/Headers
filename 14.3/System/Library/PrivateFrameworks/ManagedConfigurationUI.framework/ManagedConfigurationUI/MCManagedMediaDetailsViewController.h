@class MCUIProfile, MCBook;

@interface MCManagedMediaDetailsViewController : MCUITableViewController

@property (retain, nonatomic) MCUIProfile *UIProfile;
@property (retain, nonatomic) MCBook *managedBook;

- (void)_setup;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_profileChanged:(id)a0;
- (id)initWithUIProfile:(id)a0 managedBook:(id)a1;

@end
