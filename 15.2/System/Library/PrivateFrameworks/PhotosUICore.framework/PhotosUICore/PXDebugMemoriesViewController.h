@class PHMemory, NSString, NSArray, NSDictionary, UISegmentedControl, UITableView;

@interface PXDebugMemoriesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
    PHMemory *_sourceMemory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_setupWithDictionary:(id)a0;
- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)_debugDictionary;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_switchLogsAction:(id)a0;
- (void)_sendByEmailAction:(id)a0;
- (void)_closeAction:(id)a0;
- (id)initWithMemory:(id)a0 memoryInfo:(id)a1;

@end
