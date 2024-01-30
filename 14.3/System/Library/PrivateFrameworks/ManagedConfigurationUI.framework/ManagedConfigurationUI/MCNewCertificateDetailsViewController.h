@class NSArray;

@interface MCNewCertificateDetailsViewController : MCUITableViewController

@property (retain, nonatomic) id certificateTrust;
@property (retain, nonatomic) NSArray *keyValueSections;
@property (retain, nonatomic) NSArray *keyValueSectionTitles;

- (void)_setup;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithCertificateProperties:(id)a0;

@end
