@class NSArray, NSString, UIButton;
@protocol CDPDevicePickerDelegate;

@interface CDPDevicePickerViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_escapeOffers;
    id<CDPDevicePickerDelegate> _delegate;
    UIButton *_remoteApprovalButton;
}

@property (copy, nonatomic) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)viewForFooterInTableView:(id)a0;
- (double)heightForFooterInTableView:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)initWithDevices:(id)a0 delegate:(id)a1;
- (id)escapeOffers;

@end
