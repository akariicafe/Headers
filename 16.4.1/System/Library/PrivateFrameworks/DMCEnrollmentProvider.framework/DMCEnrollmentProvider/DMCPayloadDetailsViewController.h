@class DMCPayloadViewModel, NSArray, MCPayload;

@interface DMCPayloadDetailsViewController : DMCProfileTableViewController

@property (retain, nonatomic) MCPayload *payload;
@property (retain, nonatomic) DMCPayloadViewModel *payloadViewModel;
@property (retain, nonatomic) NSArray *keyValueSections;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithPayload:(id)a0;
- (void)_setup;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)_keyValueSectionForSection:(long long)a0;
- (void)_setTitle:(id)a0 keyValueSections:(id)a1;
- (id)initWithPayloadViewModel:(id)a0;

@end
