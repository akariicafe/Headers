@class NSArray, NSBundle, NSMutableDictionary, NSString, SRAuthorizationStore;

@interface SRAuthorizationCategoryGroupViewController : UITableViewController <SRAuthorizationCellDelegate, UITableViewDelegatePrivate>

@property (retain, nonatomic) NSArray *sortedReaderAuthorizationServices;
@property (retain, nonatomic) NSArray *sortedWriterAuthorizationServices;
@property (retain, nonatomic) NSBundle *appBundle;
@property (retain, nonatomic) NSMutableDictionary *readerAuthState;
@property (retain, nonatomic) NSMutableDictionary *writerAuthState;
@property (retain) SRAuthorizationStore *authStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)authorizationSwitchToggledWithValue:(BOOL)a0 indexPath:(id)a1;
- (void)confirmAuthChangeForService:(id)a0 value:(BOOL)a1 indexPath:(id)a2 setOverride:(BOOL)a3;
- (BOOL)indexPathIsInWriterSection:(id)a0;
- (void)openPrivacy;
- (long long)readerAuthSectionStart;
- (id)serviceFromIndexPath:(id)a0;
- (long long)usageSectionStart;
- (long long)writerAuthSectionStart;

@end
