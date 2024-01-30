@class EKICSPreviewModel, NSMutableArray;
@protocol EKICSPreviewListDelegate;

@interface EKICSPreviewListController : UITableViewController {
    EKICSPreviewModel *_model;
    NSMutableArray *_sections;
}

@property (nonatomic) BOOL showWeekNumbers;
@property (nonatomic) BOOL allowsImport;
@property (nonatomic) BOOL allowsSubitems;
@property (weak, nonatomic) id<EKICSPreviewListDelegate> listDelegate;
@property (nonatomic) struct CGColor { } *overrideCalendarColor;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)_showWeekNumbersPreferenceChanged:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithModel:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)buildSections;
- (void)updateImportButton;
- (void)importAllPressed:(id)a0;

@end
