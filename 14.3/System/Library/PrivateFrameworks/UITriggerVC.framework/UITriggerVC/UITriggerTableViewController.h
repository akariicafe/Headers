@class NSMutableDictionary, NSString, NSMutableArray, IDSService;

@interface UITriggerTableViewController : UITableViewController <IDSServiceDelegate, CSLUIUITriggerIDSProtocolResponse, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) IDSService *idsService;
@property (nonatomic) BOOL loading;
@property (retain, nonatomic) NSMutableArray *sectionList;
@property (retain, nonatomic) NSMutableDictionary *sectionContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)didReceiveMemoryWarning;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)idsUIProvidersResponse:(id)a0;
- (void)idsRequestUITriggerResponse:(id)a0;
- (BOOL)requestPluginList;
- (id)sectionStringForIndexPath:(id)a0;
- (id)tailStringForIndexPath:(id)a0;
- (BOOL)triggerUIProvider:(id)a0;
- (void)_extractSections:(id)a0;
- (id)sendProtobufRequest:(id)a0 type:(unsigned short)a1 priority:(long long)a2 expectsResponse:(BOOL)a3 errorHandler:(id /* block */)a4 withTimeout:(double)a5;

@end
