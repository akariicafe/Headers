@class NSArray, MCPayloadInfo, MCPayload;

@interface MCPayloadDetailsViewController : MCUITableViewController

@property (retain, nonatomic) MCPayload *payload;
@property (retain, nonatomic) MCPayloadInfo *payloadInfo;
@property (retain, nonatomic) NSArray *keyValueSections;

- (void)_setup;
- (id)initWithPayload:(id)a0;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithPayloadInfo:(id)a0;
- (void)setTitle:(id)a0 keyValueSections:(id)a1;

@end
