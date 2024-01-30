@protocol CertInfoTrustDescription;

@interface CertInfoCertificateListController : UITableViewController {
    id<CertInfoTrustDescription> _description;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithTrustDescription:(id)a0;

@end
