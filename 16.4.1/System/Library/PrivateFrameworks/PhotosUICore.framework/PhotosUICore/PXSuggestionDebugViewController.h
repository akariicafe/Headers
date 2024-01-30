@class NSString, NSArray, NSDictionary, UISegmentedControl, PHSuggestion, UITableView;

@interface PXSuggestionDebugViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
    PHSuggestion *_suggestion;
    NSDictionary *_suggestionInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_setupWithDictionary:(id)a0;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)_closeAction:(id)a0;
- (void)_sendByEmailAction:(id)a0;
- (void)_switchLogsAction:(id)a0;
- (id)existingSectionsWithSuggestion:(id)a0 suggestionInfo:(id)a1;
- (id)infoSectionsWithSuggestion:(id)a0 suggestionInfo:(id)a1 compact:(BOOL)a2;
- (id)initWithSuggestion:(id)a0 suggestionInfo:(id)a1;

@end
