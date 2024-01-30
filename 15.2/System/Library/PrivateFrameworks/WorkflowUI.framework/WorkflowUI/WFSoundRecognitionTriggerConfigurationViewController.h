@class NSArray, NSString, UITableView;

@interface WFSoundRecognitionTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, WFTableViewFooterLinkViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)handleDidBecomeActive;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)shouldEnableNextButton;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)triggerTableViewController:(id)a0 didFinishWithAnySelected:(BOOL)a1 orSelectedOptions:(id)a2;
- (void)triggerTableViewControllerDidCancel:(id)a0;
- (id)infoForSection:(long long)a0;
- (void)footerLinkView:(id)a0 didTapURL:(id)a1;
- (id)footerLinkViewForTableView:(id)a0;

@end
