@class NSArray;

@interface CertificateDetailsViewController : UITableViewController

@property (retain, nonatomic) id certificateTrust;
@property (retain, nonatomic) NSArray *keyValueSections;
@property (retain, nonatomic) NSArray *keyValueSectionTitles;

- (void)_setup;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)preferredContentSizeChanged:(id)a0;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)didReceiveMemoryWarning;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)initWithCertificateProperties:(id)a0;
- (void)setCertificateProperties:(id)a0;

@end
