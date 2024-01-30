@class MCProfile;
@protocol MCInstallationConsentDelegate;

@interface MCInstallationConsentViewController : MCUITableViewController

@property (retain, nonatomic) MCProfile *profile;
@property (weak, nonatomic) id<MCInstallationConsentDelegate> consentDelegate;
@property (nonatomic) BOOL showInstall;

- (void)_setup;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_cancelInstallProfile;
- (void)_installProfile;

@end
