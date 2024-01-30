@class NSArray, NSString;

@interface WLQRCodeListViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    unsigned long long _attempts;
}

@property (retain, nonatomic) NSArray *qrcodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_doneButtonTapped:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
