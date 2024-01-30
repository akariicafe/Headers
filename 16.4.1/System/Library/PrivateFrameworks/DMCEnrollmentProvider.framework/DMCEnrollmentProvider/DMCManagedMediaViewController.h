@class DMCApplicationProxy, MDMBook, DMCProfileViewModel;

@interface DMCManagedMediaViewController : DMCProfileTableViewController

@property (retain, nonatomic) DMCProfileViewModel *profileViewModel;
@property (retain, nonatomic) DMCApplicationProxy *app;
@property (retain, nonatomic) MDMBook *book;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_setup;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_profileChanged:(id)a0;
- (id)initWithProfileViewModel:(id)a0 managedAppBundleID:(id)a1;
- (id)initWithProfileViewModel:(id)a0 managedBook:(id)a1;

@end
