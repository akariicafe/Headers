@class NSURL, NSMutableDictionary, NSString, PKTextInputDebugLogEntryRerun, UILabel, PKTextInputDebugSharpenerLog, UITableView;

@interface PKTextInputDebugSharpenerLogViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *_mainTableView;
@property (retain, nonatomic) UILabel *_tableHeaderLabel;
@property (retain, nonatomic) PKTextInputDebugLogEntryRerun *_currentEntryRerun;
@property (readonly, nonatomic) NSMutableDictionary *_rerunResultsBySection;
@property (readonly, nonatomic) PKTextInputDebugSharpenerLog *sharpenerLog;
@property (readonly, nonatomic) NSURL *sharpenerLogURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canLoadFromFileAtURL:(id)a0;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_handleDoneButton:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_handleActionButton:(id)a0;
- (id)initWithSharpenerLog:(id)a0;
- (id)_tableHeaderText;
- (void)_handleRerunButton:(id)a0;
- (void)_configureCell:(id)a0 asDrawingDisplayForEntry:(id)a1;
- (void)_configureCell:(id)a0 withTitle:(id)a1 details:(id)a2;
- (void)_rerunRecognitionForEntryAtIndex:(long long)a0;
- (id)initWithSharpenerLogURL:(id)a0 error:(id *)a1;

@end
