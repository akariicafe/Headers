@class NSCountedSet, NSString, NSDictionary, NSMutableDictionary, UISegmentedControl, UITableView;

@interface PXDebugRelatedViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    double _curationScore;
    double _graphScore;
    double _neighborScore;
    double _relatedScore;
    double _matchingScore;
    BOOL _isInteresting;
    unsigned long long _relatedType;
    NSString *_debugDescription;
    NSDictionary *_matchingWeight;
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_relatedKeywords;
    NSMutableDictionary *_currentKeywords;
    NSCountedSet *_countedKeywords;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithDictionary:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_setupWithDictionary:(id)a0;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)_closeAction:(id)a0;
- (void)_initDataSourceWithKeywords:(id)a0;
- (void)_sendByEmailAction:(id)a0;
- (void)_switchLogsAction:(id)a0;

@end
