@class NSString, WebUIAlert, UITableView;

@interface WBUAlertController : UIAlertController <UITableViewDelegate, UITableViewDataSource> {
    WebUIAlert *_alert;
    BOOL _automaticallyDismiss;
    UITableView *_tableView;
    id /* block */ _handler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithAlert:(id)a0 automaticallyDismiss:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_setUpAlert;

@end
