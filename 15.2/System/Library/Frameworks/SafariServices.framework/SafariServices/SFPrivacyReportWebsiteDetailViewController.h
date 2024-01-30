@class WBSTrackedFirstParty;

@interface SFPrivacyReportWebsiteDetailViewController : UITableViewController {
    WBSTrackedFirstParty *_website;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithWebsite:(id)a0;

@end
