@class NSBundle, NSString, ACAccount, UITableView;

@interface AMSUIPasswordSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AMSUIPasswordSettingsFreeDownloadsCellDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) unsigned long long freeSetting;
@property (nonatomic) unsigned long long paidSetting;
@property (retain, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)donePressed:(id)a0;
- (void)handleAuthenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleDialogRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccount:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void)viewDidLoad;
- (void)freeDownloadsToggle:(id)a0 changedValue:(BOOL)a1;

@end
