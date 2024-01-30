@class MCUIProfile, MCBook;

@interface MCManagedMediaDetailsViewController : MCUITableViewController

@property (retain, nonatomic) MCUIProfile *UIProfile;
@property (retain, nonatomic) MCBook *managedBook;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_setup;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)_profileChanged:(id)a0;
- (id)initWithUIProfile:(id)a0 managedBook:(id)a1;

@end
