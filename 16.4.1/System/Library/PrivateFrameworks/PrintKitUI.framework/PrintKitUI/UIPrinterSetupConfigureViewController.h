@class UIButton, NSString, UIPrinterSetupConnectingView, PKPrinter;

@interface UIPrinterSetupConfigureViewController : UITableViewController <UITableViewDataSource, UITextFieldDelegate>

@property (retain, nonatomic) PKPrinter *printer;
@property (nonatomic) BOOL addToNetwork;
@property (nonatomic) BOOL directPrinting;
@property (copy, nonatomic) NSString *directPasscode;
@property (retain, nonatomic) UIButton *finishButton;
@property (retain, nonatomic) UIPrinterSetupConnectingView *connectingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)textDidChange:(id)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)finished:(BOOL)a0;
- (id)initWithPrinter:(id)a0;
- (void)toggleAddToNetwork:(id)a0;
- (void)toggleDirectPrinting:(id)a0;

@end
