@class NSArray, NSDictionary, NSString, UISegmentedControl, UITableView;

@interface PXDebugDictionaryViewController : UIViewController <UITableViewDataSource>

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSDictionary *tableContent;
@property (readonly, nonatomic) NSDictionary *debugDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_switchLogsAction:(id)a0;
- (void)_closeAction:(id)a0;
- (id)initWithDebugDictionary:(id)a0;
- (id)segmentedTitles;
- (void)_updateWithSegmentedTitle:(id)a0;
- (id)_flattenDictionary:(id)a0;
- (id)_sanitizedTextForTitle:(id)a0 value:(id)a1;

@end
