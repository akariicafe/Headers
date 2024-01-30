@class NSArray, NSString, SRAuthorizationGroup;

@interface SRSampleViewController : UITableViewController

@property (retain, nonatomic) NSArray *sampleDataEntries;
@property (retain, nonatomic) NSString *note;
@property (retain, nonatomic) SRAuthorizationGroup *authGroup;

+ (void)initialize;
+ (id)sampleViewControllerForAuthGroup:(id)a0;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)prepareEndRowWithText:(id)a0 detailText:(id)a1;
- (id)prepareExtendedRowWithText:(id)a0;
- (id)sortedKeysForDictionary:(id)a0;

@end
