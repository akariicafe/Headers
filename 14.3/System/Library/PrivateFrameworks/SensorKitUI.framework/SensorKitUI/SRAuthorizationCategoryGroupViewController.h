@class NSArray, NSBundle, NSMutableDictionary, NSString;

@interface SRAuthorizationCategoryGroupViewController : UITableViewController <SRAuthorizationCellDelegate, UITableViewDelegatePrivate>

@property (retain, nonatomic) NSArray *allKeys;
@property (retain, nonatomic) NSBundle *appBundle;
@property (retain, nonatomic) NSMutableDictionary *authState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;
- (void)openPrivacy;
- (void)confirmAuthChangeForService:(id)a0 value:(BOOL)a1;
- (void)setValue:(BOOL)a0 indexPath:(id)a1;

@end
